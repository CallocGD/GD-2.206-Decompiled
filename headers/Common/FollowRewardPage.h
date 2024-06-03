#ifndef __FOLLOWREWARDPAGE_H__
#define __FOLLOWREWARDPAGE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class FLAlertLayerProtocol;
class GameRateDelegate;
class RewardedVideoDelegate;

class FollowRewardPage: public FLAlertLayer, public FLAlertLayerProtocol, public GameRateDelegate, public RewardedVideoDelegate {
public:
    static FollowRewardPage* create();
    void onClose(cocos2d::CCObject* sender);
    void onRewardedVideo(cocos2d::CCObject* sender);
    void onSpecialItem(cocos2d::CCObject* sender);
    TodoReturn switchToOpenedState(CCMenuItemSpriteExtra* p0);
    virtual bool init();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void show();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void rewardedVideoFinished();
    virtual void updateRate();
};

#endif /* __FOLLOWREWARDPAGE_H__ */