#ifndef __PLATFORMTOOLBOX_H__
#define __PLATFORMTOOLBOX_H__


#include "../includes.h"

class PlatformToolbox {
public:
    static TodoReturn activateGameCenter();
    static TodoReturn copyToClipboard(std::string p0);
    static TodoReturn doesFileExist(std::string p0);
    static TodoReturn downloadAndSavePromoImage(std::string p0, std::string p1);
    static TodoReturn gameDidSave();
    static TodoReturn getDeviceRefreshRate();
    static TodoReturn getDisplaySize();
    static TodoReturn getRawPath(char const* p0);
    static TodoReturn getUniqueUserID();
    static TodoReturn getUserID();
    static TodoReturn hideCursor();
    static bool isControllerConnected();
    static bool isHD();
    static bool isLocalPlayerAuthenticated();
    static bool isLowMemoryDevice();
    static bool isNetworkAvailable();
    static bool isSignedInGooglePlay();
    static TodoReturn loadAndDecryptFileToString(char const* p0, char const* p1);
    static TodoReturn logEvent(char const* p0);
    static TodoReturn onGameLaunch();
    static TodoReturn onNativePause();
    static TodoReturn onNativeResume();
    static TodoReturn onToggleKeyboard();
    static TodoReturn openAppPage();
    static void platformShutdown();
    static TodoReturn refreshWindow();
    static TodoReturn reportAchievementWithID(char const* p0, int p1);
    static TodoReturn reportLoadingFinished();
    static TodoReturn resizeWindow(float p0, float p1);
    static TodoReturn saveAndEncryptStringToFile(std::string p0, char const* p1, char const* p2);
    static TodoReturn sendMail(char const* p0, char const* p1, char const* p2);
    static void setBlockBackButton(bool p0);
    static void setKeyboardState(bool p0);
    static TodoReturn shouldResumeSound();
    static void showAchievements();
    static void showCursor();
    static TodoReturn signInGooglePlay();
    static TodoReturn signOutGooglePlay();
    static TodoReturn spriteFromSavedFile(std::string p0);
    static TodoReturn toggleCallGLFinish(bool p0);
    static TodoReturn toggleCPUSleepMode(bool p0);
    static TodoReturn toggleForceTimer(bool p0);
    static TodoReturn toggleFullScreen(bool p0);
    static TodoReturn toggleLockCursor(bool p0);
    static TodoReturn toggleMouseControl(bool p0);
    static TodoReturn toggleSmoothFix(bool p0);
    static TodoReturn toggleVerticalSync(bool p0);
    static TodoReturn tryShowRateDialog(std::string p0);
    static TodoReturn updateMouseControl();
    static TodoReturn updateWindowedSize(float p0, float p1);
};

#endif /* __PLATFORMTOOLBOX_H__ */