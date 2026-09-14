/*
 * Geometry Dash for Derka — ядро: уровень, физика, столкновения.
 * Чистый C99. Один шаг = 1/120 c, поэтому поведение не зависит от FPS.
 */
#include "gd_core.h"
#include <math.h>

#define STEP   (1.0f / 240.0f)  /* физика GD тикает 240 раз в секунду */
#define SPEED    10.386f  /* «normal speed» GD = 10.386 блока/с (311.58 u/s, блок = 30) */
#define GRAV     95.0f
#define JUMPV    20.5f   /* -> высота 2.21 блока, полёт 0.43 с, дальность 4.49 */
#define PSZ       0.9f   /* видимый размер куба */
#define PBOX     0.28f   /* половина ширины хитбокса (прощает края) */
#define SPX      0.16f   /* половина ширины хитбокса шипа */
#define SPY      0.45f   /* высота смертельной зоны шипа */
#define LEVEL  1000.0f   /* длина уровня в блоках (~96 с) */

/* ------------------------------------------------------------------ уровень */

/* Схема куска уровня: два ряда по 10 колонок. '^' — шип, '#' — блок, '.' — пусто.
 * Нижний ряд стоит на земле (y=0), верхний висит на y=1.
 * Порядок = сложность: 0..4 простые, 5..9 средние, 10..13 злые. */
typedef struct { const char *bot, *top; unsigned char gap; } Pat;

static const Pat PAT[] = {
  { "..........", "..........", 2 },  /*  0 передышка                      */
  { "....^.....", "..........", 5 },  /*  1 одиночный шип                  */
  { "....#.....", "..........", 5 },  /*  2 одиночный блок                 */
  { "..^......^", "..........", 5 },  /*  3 два шипа                       */
  { "...#.....^", "..........", 5 },  /*  4 блок, потом шип                */
  { "....^^....", "..........", 5 },  /*  5 двойной шип                    */
  { "....###...", "..........", 5 },  /*  6 три блока подряд               */
  { ".#.....##.", "..........", 5 },  /*  7 блок и площадка                */
  { "..........", "....###...", 4 },  /*  8 потолок — не прыгать           */
  { "..^.....^^", "..........", 5 },  /*  9 шип и двойной шип              */
  { "..###.##..", "......#...", 5 },  /* 10 площадка и пирамида            */
  { "....##....", "..........", 5 },  /* 11 площадка                       */
  { "....^.....", "..........", 2 },  /* 12 шип, плотный ритм              */
  { "..^^.....#", "..........", 5 },  /* 13 двойной шип и блок             */
};
#define NPAT ((int)(sizeof PAT / sizeof *PAT))

static unsigned rnd(GDGame *g)
{
  unsigned x = g->rng;
  x ^= x << 13; x ^= x >> 17; x ^= x << 5;
  return g->rng = x;
}

static float rf(GDGame *g, float a, float b)
{
  return a + (float)(rnd(g) % 1000) / 1000.0f * (b - a);
}

static void add(GDGame *g, float x, float y, float w, float h, int t)
{
  GDObj *o;
  if (g->n >= GD_MAX_OBJ) return;
  o = &g->o[g->n++];
  o->x = x; o->y = y; o->w = w; o->h = h; o->t = (unsigned char)t;
}

void gd_init(GDGame *g)
{
  float x = 24.0f;               /* пустой разгон в начале */

  g->n = g->np = 0;
  g->attempt = 0; g->best = 0; g->jumps = 0;
  g->rng = 0x5DEECEu;            /* уровень всегда один и тот же */
  g->phase = GD_TITLE;
  g->hold = 0; g->ground = 1;
  g->px = g->py = g->vy = g->rot = 0.0f;
  g->camx = -4.5f; g->shake = g->acc = g->deadt = g->t = 0.0f;
  g->len = 0.0f;

  while (x < LEVEL) {
    int tier = (int)(3.0f * x / LEVEL);          /* 0, 1, 2 — сложность растёт */
    int lo = tier * 4, hi = lo + 5 + tier;       /* окно выбора паттерна */
    const Pat *p;
    int col, len;

    if (hi > NPAT) hi = NPAT;
    p = &PAT[lo + (int)(rnd(g) % (unsigned)(hi - lo))];
    len = 10;

    for (col = 0; col < len; col++) {            /* колонками: объекты идут по X */
      if (p->bot[col] == '^') add(g, x + col, 0.0f, 1.0f, 1.0f, GD_SPIKE);
      if (p->bot[col] == '#') add(g, x + col, 0.0f, 1.0f, 1.0f, GD_BLOCK);
      if (p->top[col] == '#') add(g, x + col, 1.0f, 1.0f, 1.0f, GD_BLOCK);
      if (p->top[col] == '^') add(g, x + col, 1.0f, 1.0f, 1.0f, GD_SPIKE);
    }
    x += len + p->gap + (float)(rnd(g) % 3u);
  }

  g->len = x + 20.0f;
  add(g, g->len, 0.0f, 1.0f, 6.0f, GD_FINISH);
}

/* ------------------------------------------------------------------- игра */

static void upd_best(GDGame *g)
{
  int p = (int)(gd_prog(g) * 100.0f);
  if (p > g->best) g->best = p;
}

static void burst(GDGame *g)
{
  int i;
  g->np = GD_MAX_PART;
  for (i = 0; i < GD_MAX_PART; i++) {
    GDPart *p = &g->p[i];
    float a = rf(g, 0.0f, 6.283f), s = rf(g, 4.0f, 15.0f);
    p->x = g->px; p->y = g->py + PSZ * 0.5f;
    p->vx = cosf(a) * s; p->vy = sinf(a) * s + 4.0f;
    p->r = rf(g, 0.08f, 0.24f); p->life = rf(g, 0.35f, 0.9f);
  }
}

static void die(GDGame *g)
{
  if (g->phase != GD_PLAY) return;
  upd_best(g);
  g->phase = GD_DEAD;
  g->deadt = 0.0f;
  g->shake = 1.0f;
  burst(g);
}

void gd_go(GDGame *g)
{
  g->phase  = GD_PLAY;
  g->px     = 0.0f;
  g->py     = 0.0f;
  g->vy     = 0.0f;
  g->rot    = 0.0f;
  g->camx   = -4.5f;
  g->acc    = 0.0f;
  g->deadt  = 0.0f;
  g->t      = 0.0f;
  g->shake  = 0.0f;
  g->ground = 1;
  g->np     = 0;
  g->attempt++;
}

void gd_press(GDGame *g)
{
  g->hold = 1;
  if (g->phase == GD_TITLE || g->phase == GD_WIN) gd_go(g);
}

void gd_release(GDGame *g) { g->hold = 0; }

float gd_prog(const GDGame *g)
{
  float p = g->px / g->len;
  return p < 0.0f ? 0.0f : (p > 1.0f ? 1.0f : p);
}

static void step(GDGame *g)
{
  int i;
  float prev, pl, pr;

  g->t += STEP;
  if (g->shake > 0.0f) g->shake -= STEP * 3.0f;

  for (i = 0; i < g->np; i++) {
    GDPart *p = &g->p[i];
    p->life -= STEP;
    p->vy -= 60.0f * STEP;
    p->x += p->vx * STEP;
    p->y += p->vy * STEP;
    if (p->y < 0.0f) { p->y = 0.0f; p->vy *= -0.35f; p->vx *= 0.8f; }
  }

  if (g->phase == GD_DEAD) {
    g->deadt += STEP;
    if (g->deadt > 0.75f) gd_go(g);     /* авто-рестарт, как в оригинале */
    return;
  }
  if (g->phase != GD_PLAY) return;

  prev = g->py;
  g->px += SPEED * STEP;
  g->vy -= GRAV * STEP;
  g->py += g->vy * STEP;

  g->ground = 0;
  if (g->py <= 0.0f) { g->py = 0.0f; if (g->vy < 0.0f) g->vy = 0.0f; g->ground = 1; }

  pl = g->px - PBOX;
  pr = g->px + PBOX;

  for (i = 0; i < g->n; i++) {
    GDObj *o = &g->o[i];
    if (o->x > g->px + 3.0f) break;              /* объекты отсортированы по X */
    if (o->x + o->w < g->px - 2.0f) continue;

    if (o->t == GD_FINISH) {
      if (g->px >= o->x) { upd_best(g); g->phase = GD_WIN; }
      continue;
    }
    if (o->t == GD_SPIKE) {
      float sx = o->x + o->w * 0.5f;
      if (pr > sx - SPX && pl < sx + SPX &&
          g->py + 0.06f < o->y + SPY && g->py + PSZ > o->y + 0.05f) { die(g); return; }
      continue;
    }
    /* блок: либо приземляемся сверху, либо умираем */
    if (pr > o->x && pl < o->x + o->w && g->py + PSZ > o->y && g->py < o->y + o->h) {
      float top = o->y + o->h;
      if (g->vy <= 0.0f && prev >= top - 0.07f) {
        g->py = top; g->vy = 0.0f; g->ground = 1;
      } else { die(g); return; }
    }
  }

  if (!g->ground) {
    g->rot += 834.0f * STEP;                     /* один оборот за прыжок */
  } else {
    float q = g->rot / 90.0f, snap;
    q = (float)(int)(q + (q >= 0.0f ? 0.5f : -0.5f));
    snap = q * 90.0f;
    g->rot += (snap - g->rot) * (STEP * 30.0f);
  }

  if (g->hold && g->ground) { g->vy = JUMPV; g->ground = 0; g->jumps++; }

  g->camx = g->px - 4.5f;
}

void gd_update(GDGame *g, float dt)
{
  if (dt > 0.1f) dt = 0.1f;
  g->acc += dt;
  while (g->acc >= STEP) { g->acc -= STEP; step(g); }
}

/* ------------------------------------------------------------------ симулятор */
#ifdef GD_SIM
/* Автопилот для проверки честности уровня. Сборка:
 *   gcc -std=c99 -O2 -DGD_SIM game/gd_core.c -o /tmp/gdsim -lm && /tmp/gdsim   */
#include <stdio.h>
#include <stdlib.h>

static float SLACK;                            /* на сколько блоков ошибается игрок */

static int ai(const GDGame *g)
{
  int i;
  if (!g->ground) return 0;                    /* в воздухе решение уже принято */

  for (i = 0; i < g->n; i++) {
    const GDObj *o = &g->o[i];
    float d, lead = 2.30f;


    if (o->x > g->px + 9.0f) break;
    if (o->t == GD_FINISH) continue;
    if (o->x + o->w <= g->px + PBOX) continue;
    if (o->y >= 0.9f && g->py < 0.9f) continue;   /* шип/блок высоко — проскакиваем низом */

    d = o->x - (g->px + PBOX);
    if (o->t == GD_SPIKE) {
      /* одиночный шип: взлетать можно в окне ~3 блока; двойной — вдвое уже,
       * поэтому по двойному прыгаем позже, иначе приземлимся ровно в него */
      lead = 1.90f;
      if (i + 1 < g->n && g->o[i + 1].t == GD_SPIKE && g->o[i + 1].y == o->y &&
          g->o[i + 1].x <= o->x + o->w + 0.01f) lead = 1.15f;
    } else {
      int k;
      lead = (o->y + o->h <= 1.01f) ? 2.00f : 1.90f;
      /* широкая площадка: взлетаем раньше, чтобы сесть сверху, а не в торец */
      for (k = 1; k <= 2; k++)
        if (i + k < g->n && g->o[i + k].t == o->t && g->o[i + k].y == o->y &&
            g->o[i + k].x <= o->x + o->w * k + 0.01f) lead += 0.30f;
    }
    if (g->py > 0.5f) lead += 0.30f;              /* с возвышения летим дальше */

    return d < lead + SLACK;
  }
  return 0;
}

int main(int argc, char **argv)
{
  GDGame g;
  int f = 0, dead = 0, last_phase;

  SLACK = argc > 1 ? (float)atof(argv[1]) : 0.0f;
  gd_init(&g);
  printf("уровень: %d объектов, %.0f блоков, %.0f сек, ошибка тайминга %+.2f блока\n",
         g.n, g.len, g.len / SPEED, SLACK);

  last_phase = g.phase;
  gd_go(&g);
  while (g.phase != GD_WIN && f < 60 * 240) {
    if (ai(&g)) gd_press(&g); else gd_release(&g);
    gd_update(&g, 1.0f / 60.0f);
    if (g.phase == GD_DEAD && last_phase != GD_DEAD) {
      printf("  смерть %d на %d%% (x=%.1f, y=%.2f)\n", ++dead, (int)(gd_prog(&g) * 100), g.px, g.py);
    }
    last_phase = g.phase;
    f++;
  }
  printf("итог: %s, попыток %d, прыжков %d, лучший %d%%, время %.1f c\n",
         g.phase == GD_WIN ? "УРОВЕНЬ ПРОЙДЕН" : "ТАЙМАУТ", g.attempt, g.jumps, g.best, g.t);
  return dead ? 1 : 0;
}
#endif
