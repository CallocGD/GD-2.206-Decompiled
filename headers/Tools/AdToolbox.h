#ifndef __ADTOOLBOX_H__
#define __ADTOOLBOX_H__


#include "../includes.h"

class AdToolbox {
public:
    TodoReturn cacheInterstitial();
    TodoReturn cacheRewardedVideo();
    TodoReturn disableBanner();
    TodoReturn enableBanner();
    TodoReturn enableBannerNoRefresh();
    TodoReturn hasCachedInterstitial();
    TodoReturn hasCachedRewardedVideo();
    bool isShowingAd();
    TodoReturn queueRefreshBanner();
    TodoReturn setupAds();
    void showDebug();
    void showInterstitial();
    void showRewardedVideo();
};

#endif /* __ADTOOLBOX_H__ */