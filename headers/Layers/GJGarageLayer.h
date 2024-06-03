#ifndef __GJGARAGELAYER_H__
#define __GJGARAGELAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TextInputDelegate;
class FLAlertLayerProtocol;
class GameRateDelegate;
class ListButtonBarDelegate;
class DialogDelegate;
class CharacterColorDelegate;
class RewardedVideoDelegate;

class GJGarageLayer: public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public GameRateDelegate, public ListButtonBarDelegate, public DialogDelegate, public CharacterColorDelegate, public RewardedVideoDelegate {
public:
    gd::string achievementForUnlock(int p0, UnlockType p1);
    gd::string descriptionForUnlock(int p0, UnlockType p1);
    cocos2d::CCArray* getItems(IconType p0);
    cocos2d::CCArray* getItems(int p0, int p1, IconType p2, int p3);
    gd::string getLockFrame(int p0, UnlockType p1);
    static GJGarageLayer* node();
    void onArrow(cocos2d::CCObject* sender);
    void onBack(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onNavigate(cocos2d::CCObject* sender);
    void onPaint(cocos2d::CCObject* sender);
    void onSelect(cocos2d::CCObject* sender);
    void onSelectTab(cocos2d::CCObject* sender);
    void onShards(cocos2d::CCObject* sender);
    void onShop(cocos2d::CCObject* sender);
    void onSpecial(cocos2d::CCObject* sender);
    void onToggleItem(cocos2d::CCObject* sender);
    void playRainbowEffect();
    void playShadowEffect();
    static cocos2d::CCScene* scene();
    void selectTab(IconType p0);
    void setupIconSelect();
    void setupPage(int p0, IconType p1);
    void setupSpecialPage();
    void showUnlockPopupNew(int p0, UnlockType p1);
    gd::string titleForUnlock(int p0, UnlockType p1);
    void toggleGlow();
    void updatePlayerColors();
    void updatePlayerName(char const* p0);
    virtual bool init();
    virtual void keyBackClicked();
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    virtual void listButtonBarSwitchedPage(ListButtonBar* p0, int p1);
    virtual void showUnlockPopup(int p0, UnlockType p1);
    virtual void updateRate();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void dialogClosed(DialogLayer* p0);
    virtual void playerColorChanged();
    virtual void rewardedVideoFinished();
    CCTextInputNode* m_usernameInput;
    SimplePlayer* m_playerObject;
    cocos2d::CCArray* m_tabButtons;
    cocos2d::CCArray* m_pageButtons;
    /* PAD */

    bool m_hasClosed;
    IconType m_iconType;
    std::map<IconType, int> m_iconPages;
    cocos2d::CCSprite* m_cursor1;
    cocos2d::CCSprite* m_cursor2;
    CCMenuItemSpriteExtra* m_currentIcon;
    ListButtonBar* m_iconSelection;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_rightArrow;
    cocos2d::CCMenu* m_iconSelectionMenu;
    int m_iconID;
    IconType m_selectedIconType;
};

#endif /* __GJGARAGELAYER_H__ */