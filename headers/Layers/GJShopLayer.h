#ifndef __GJSHOPLAYER_H__
#define __GJSHOPLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJPurchaseDelegate;
class DialogDelegate;
class RewardedVideoDelegate;

class GJShopLayer: public cocos2d::CCLayer, public GJPurchaseDelegate, public DialogDelegate, public RewardedVideoDelegate {
public:
    static GJShopLayer* create(ShopType p0);
    TodoReturn exitVideoAdItems();
    bool init(ShopType p0);
    void onBack(cocos2d::CCObject* sender);
    void onCommunityCredits(cocos2d::CCObject* sender);
    void onPlushies(cocos2d::CCObject* sender);
    void onSelectItem(cocos2d::CCObject* sender);
    void onVideoAd(cocos2d::CCObject* sender);
    TodoReturn scene(ShopType p0);
    void showCantAffordMessage(GJStoreItem* p0);
    void showReactMessage();
    TodoReturn updateCurrencyCounter();
    virtual void onExit();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual TodoReturn didPurchaseItem(GJStoreItem* p0);
    virtual void rewardedVideoFinished();
    virtual void dialogClosed(DialogLayer* p0);
};

#endif /* __GJSHOPLAYER_H__ */