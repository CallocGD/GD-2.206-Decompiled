#ifndef __PROMOINTERSTITIAL_H__
#define __PROMOINTERSTITIAL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class PromoInterstitial: public FLAlertLayer {
public:
    static PromoInterstitial* create(bool p0);
    bool init(bool p0);
    void onClick(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    TodoReturn setup();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void keyBackClicked();
    virtual void show();
};

#endif /* __PROMOINTERSTITIAL_H__ */