#ifndef __SECRETREWARDSLAYER_H__
#define __SECRETREWARDSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class DialogDelegate;
class BoomScrollLayerDelegate;

class SecretRewardsLayer: public cocos2d::CCLayer, public DialogDelegate, public BoomScrollLayerDelegate {
public:
    static SecretRewardsLayer* create(bool p0);
    TodoReturn createSecondaryLayer(int p0);
    TodoReturn generateChestItems(int p0);
    TodoReturn getPageColor(int p0);
    void goToPage(int p0);
    bool init(bool p0);
    TodoReturn moveToMainLayer(cocos2d::CCObject* p0);
    TodoReturn moveToSecondaryLayer(int p0);
    void onBack(cocos2d::CCObject* sender);
    void onChestType(cocos2d::CCObject* sender);
    void onSelectItem(cocos2d::CCObject* sender);
    void onShop(cocos2d::CCObject* sender);
    void onSpecialItem(cocos2d::CCObject* sender);
    void onSwitchPage(cocos2d::CCObject* sender);
    TodoReturn scene(bool p0);
    void showDialog01();
    void showDialog03();
    void showDialogDiamond();
    void showDialogMechanic();
    void showLockedChest();
    void showShop(int p0);
    TodoReturn switchToOpenedState(CCMenuItemSpriteExtra* p0);
    TodoReturn updateBackButton();
    TodoReturn updateUnlockedLabel();
    virtual void onExit();
    virtual void keyBackClicked();
    virtual void dialogClosed(DialogLayer* p0);
    virtual void scrollLayerMoved(cocos2d::CCPoint p0);
};

#endif /* __SECRETREWARDSLAYER_H__ */