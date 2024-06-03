#ifndef __GJPATHPAGE_H__
#define __GJPATHPAGE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class FLAlertLayerProtocol;
class GJPurchaseDelegate;

class GJPathPage: public FLAlertLayer, public FLAlertLayerProtocol, public GJPurchaseDelegate {
public:
    static GJPathPage* create(int p0, GJPathsLayer* p1);
    bool init(int p0, GJPathsLayer* p1);
    void onActivatePath(cocos2d::CCObject* sender);
    void onBack(cocos2d::CCObject* sender);
    void onIconInfo(cocos2d::CCObject* sender);
    void onUnlock(cocos2d::CCObject* sender);
    TodoReturn playUnlockAnimation();
    void showCantAffordMessage(GJStoreItem* p0);
    TodoReturn unlockAnimationFinished();
    TodoReturn unlockAnimationStep2();
    TodoReturn unlockAnimationStep3();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void show();
    virtual TodoReturn didPurchaseItem(GJStoreItem* p0);
};

#endif /* __GJPATHPAGE_H__ */