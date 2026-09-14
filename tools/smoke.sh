#!/usr/bin/env bash
# Smoke-тест APK на эмуляторе (вызывается из CI-шага android-emulator-runner).
# Отчёт (pids, am start, выжимка logcat) постится комментарием в PR: логи шагов снаружи не прочитать.
set -u

PKG=com.derka.gd
ACT=android.app.NativeActivity

note() { echo "::notice::SMOKE: $*"; }
die()  { echo "::error::SMOKE: $*"; exit 1; }

post_report() {
  # канал 0: полный отчёт файлом в ветку ci/smoke-report (commit со [skip ci] - без цикла)
  if [ -d .git ]; then
    cp smoke.txt ci-smoke-report.txt
    git config user.email "ci-bot@users.noreply.github.com" 2>/dev/null || true
    git config user.name "ci-smoke-bot" 2>/dev/null || true
    git add -f ci-smoke-report.txt || echo "::warning::SMOKE: git add report failed"   # -f: в .gitignore есть *.txt
    git commit -q -m "ci: smoke report run ${GITHUB_RUN_ID:-?} [skip ci]" || echo "::warning::SMOKE: git commit report failed"
    git push -q -f origin HEAD:refs/heads/ci/smoke-report || echo "::warning::SMOKE: report push failed"
  fi
  if command -v gh >/dev/null 2>&1 && [ -n "${GITHUB_TOKEN:-}" ]; then
    local body; body=$(cat smoke.txt)
    local num=""
    num=$(gh pr list --state open --json number,headRefName \
          --jq '.[] | select(.headRefName=="'"${GITHUB_REF_NAME:-}"'") | .number' 2>/dev/null | head -1) || true
    if [ -z "$num" ]; then
      local hr; hr=$(gh pr view 1 --json headRefName --jq .headRefName 2>/dev/null) || true
      [ "$hr" = "${GITHUB_REF_NAME:-}" ] && num=1
    fi
    if [ -n "$num" ]; then
      gh pr comment "$num" --body "smoke run ${GITHUB_RUN_ID:-?}:
\`\`\`
$body
\`\`\`" >/dev/null 2>&1 || echo "::warning::SMOKE: pr comment failed"
      note "report posted to PR #$num"
    else
      echo "::warning::SMOKE: no PR found for branch, report only in annotations"
    fi
  fi
}

note "stage=env adb=$(command -v adb || echo MISSING)"
adb wait-for-device || die "adb wait-for-device failed"

# эмулятор может отрапортовать boot раньше, чем поднимутся сервисы
# (иначе adb install ловит "Can't find service: package")
B=""
for i in $(seq 1 90); do
  B=$(adb shell getprop sys.boot_completed 2>/dev/null | tr -d '\r\n' || true)
  [ "$B" = "1" ] && break
  sleep 2
done
note "boot_completed=${B:-none}"
for i in $(seq 1 60); do
  adb shell pm path android >/dev/null 2>&1 && break
  sleep 3
done

OK=""
for i in 1 2 3 4 5; do
  if adb install -r Game.apk > install.txt 2>&1; then OK=1; break; fi
  note "install attempt $i failed: $(tail -n 1 install.txt)"
  sleep 10
done
[ -n "$OK" ] || die "adb install failed after 5 attempts: $(tail -n 1 install.txt 2>/dev/null)"
note "stage=installed"

{ echo "run=${GITHUB_RUN_ID:-?}";
  echo "--- pm path ---"; adb shell pm path "$PKG" 2>&1 | head -4;
  echo "--- dumpsys package (abi) ---"; adb shell dumpsys package "$PKG" 2>&1 | grep -aE 'abi|versionName|codePath' | head -6;
} > pre.txt || true

# большой ring + живой logcat с момента ДО старта
adb logcat -G 4M >/dev/null 2>&1 || true
adb logcat -c    >/dev/null 2>&1 || true
adb logcat -v time > live.log 2>&1 &
LOGPID=$!

adb shell am start -W -n "$PKG/$ACT" > amstart.txt 2>&1 || note "am start rc=$?"
head -6 amstart.txt | while IFS= read -r l; do note "amstart: $l"; done

: > pids.txt
for i in $(seq 1 10); do
  P=$(adb shell pidof "$PKG" 2>/dev/null | tr -d '\r\n' || true)
  echo "t=$((i*2))s pid=${P:-DEAD}" >> pids.txt
  sleep 2
done
kill "$LOGPID" >/dev/null 2>&1 || true
wait "$LOGPID" >/dev/null 2>&1 || true

PID=$(adb shell pidof "$PKG" 2>/dev/null | tr -d '\r\n' || true)
note "stage=pid pid=${PID:-DEAD}"

{
  cat pre.txt
  echo "--- pids ---"; cat pids.txt
  echo "--- am start ---"; head -8 amstart.txt
  echo "--- derka/AM/crash lines ---"
  grep -aE 'derka|NativeActivity|FATAL|Fatal signal|ANR|avc|Zygote.*derka|ActivityManager|ActivityTaskManager' live.log | head -25
  echo "--- crash buffer ---"
  adb logcat -b crash -d 2>/dev/null | head -30
  echo "--- activity state ---"
  adb shell dumpsys activity activities 2>/dev/null | grep -a -B2 -A6 derka | head -20
  echo "--- live tail ---"
  tail -n 60 live.log
} > smoke.txt

post_report

# 4 плотные аннотации: одна аннотация = до 15 строк отчёта (не режутся лимитом)
chunk() {
  sed -n "$1,$2p" smoke.txt | sed 's/$/%0A/' | tr -d '\n' | sed "s|^|::error::SMOKE REPORT $3%0A|"
  echo
}
if [ -z "$PID" ]; then
  chunk 1 15 "1/4"; chunk 16 30 "2/4"; chunk 31 45 "3/4"; chunk 46 60 "4/4"
  exit 1
fi
chunk 1 12 "OK"
note "stage=done, game is alive"
adb shell am force-stop "$PKG" || true
note "stage=done, game is alive"
