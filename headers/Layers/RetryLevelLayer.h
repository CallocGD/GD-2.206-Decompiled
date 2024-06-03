#ifndef __RETRYLEVELLAYER_H__
#define __RETRYLEVELLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJDropDownLayer;
class RewardedVideoDelegate;

class RetryLevelLayer: public GJDropDownLayer, public RewardedVideoDelegate {
public:
    static RetryLevelLayer* create();
    TodoReturn getEndText();
    void onEveryplay(cocos2d::CCObject* sender);
    void onMenu(cocos2d::CCObject* sender);
    void onReplay(cocos2d::CCObject* sender);
    void onRewardedVideo(cocos2d::CCObject* sender);
    TodoReturn setupLastProgress();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual void customSetup();
    virtual void showLayer(bool p0);
    virtual void enterAnimFinished();
    virtual void rewardedVideoFinished();
    virtual bool shouldOffsetRewardCurrency();
    virtual void keyUp(cocos2d::enumKeyCodes p0);
};

#endif /* __RETRYLEVELLAYER_H__ */