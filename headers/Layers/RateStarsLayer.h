#ifndef __RATESTARSLAYER_H__
#define __RATESTARSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class UploadPopupDelegate;
class UploadActionDelegate;

class RateStarsLayer: public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static RateStarsLayer* create(int p0, bool p1, bool p2);
    CCMenuItemSpriteExtra* getStarsButton(int p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);
    bool init(int p0, bool p1, bool p2);
    void onClose(cocos2d::CCObject* sender);
    void onFeature(cocos2d::CCObject* sender);
    void onRate(cocos2d::CCObject* sender);
    void onToggleCoins(cocos2d::CCObject* sender);
    void selectRating(cocos2d::CCObject* p0);
    virtual void keyBackClicked();
    virtual void uploadActionFinished(int p0, int p1);
    virtual void uploadActionFailed(int p0, int p1);
    virtual void onClosePopup(UploadActionPopup* p0);
    /* PAD */

    int m_starsRate;
};

#endif /* __RATESTARSLAYER_H__ */