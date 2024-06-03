#ifndef __REWARDUNLOCKLAYER_H__
#define __REWARDUNLOCKLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class CurrencyRewardDelegate;

class RewardUnlockLayer: public FLAlertLayer, public CurrencyRewardDelegate {
public:
    static RewardUnlockLayer* create(int p0, RewardsPage* p1);
    TodoReturn connectionTimeout();
    bool init(int p0, RewardsPage* p1);
    TodoReturn labelEnterFinishedO(cocos2d::CCObject* p0);
    void onClose(cocos2d::CCObject* sender);
    TodoReturn playDropSound();
    TodoReturn playLabelEffect(int p0, int p1, cocos2d::CCSprite* p2, cocos2d::CCPoint p3, float p4);
    TodoReturn playRewardEffect();
    TodoReturn readyToCollect(GJRewardItem* p0);
    void showCloseButton();
    void showCollectReward(GJRewardItem* p0);
    TodoReturn step2();
    TodoReturn step3();
    virtual void keyBackClicked();
    virtual void currencyWillExit(CurrencyRewardLayer* p0);
};

#endif /* __REWARDUNLOCKLAYER_H__ */