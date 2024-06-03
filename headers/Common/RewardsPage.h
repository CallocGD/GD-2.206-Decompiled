#ifndef __REWARDSPAGE_H__
#define __REWARDSPAGE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class FLAlertLayerProtocol;
class GJRewardDelegate;

class RewardsPage: public FLAlertLayer, public FLAlertLayerProtocol, public GJRewardDelegate {
public:
    static RewardsPage* create();
    static char const* getRewardFrame(int p0, int p1);
    void onClose(cocos2d::CCObject* sender);
    void onFreeStuff(cocos2d::CCObject* sender);
    void onReward(cocos2d::CCObject* sender);
    TodoReturn tryGetRewards();
    TodoReturn unlockLayerClosed(RewardUnlockLayer* p0);
    void updateTimers(float p0);
    virtual bool init();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void show();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void rewardsStatusFinished(int p0);
    virtual void rewardsStatusFailed();
    cocos2d::CCLabelBMFont* m_leftLabel;
    cocos2d::CCLabelBMFont* m_rightLabel;
    CCMenuItemSpriteExtra* m_leftChest;
    CCMenuItemSpriteExtra* m_rightChest;
    bool m_leftOpen;
    bool m_rightOpen;
    cocos2d::CCNode* m_openLayer;
};

#endif /* __REWARDSPAGE_H__ */