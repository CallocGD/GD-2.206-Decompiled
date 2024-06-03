#ifndef __CHARACTERCOLORPAGE_H__
#define __CHARACTERCOLORPAGE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class CharacterColorPage: public FLAlertLayer {
public:
    static CharacterColorPage* create();
    int activeColorForMode(int mode);
    TodoReturn checkColor(int p0, UnlockType p1);
    int colorForIndex(int p0);
    void createColorMenu();
    void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    cocos2d::CCPoint offsetForIndex(int p0);
    void onClose(cocos2d::CCObject* sender);
    void onMode(cocos2d::CCObject* sender);
    void onPlayerColor(cocos2d::CCObject* sender);
    void toggleGlow(cocos2d::CCObject* p0);
    TodoReturn toggleGlowItems(bool p0);
    void toggleShip(cocos2d::CCObject* p0);
    void updateColorMode(int p0);
    void updateIconColors();
    virtual bool init();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void show();
    int m_colorMode;
    float m_height;
    float m_width;
    cocos2d::CCArray* m_playerObjects;
    cocos2d::CCArray* m_modeButtons;
    cocos2d::CCDictionary* m_colorButtons;
    cocos2d::CCArray* m_cursors;
    CharacterColorDelegate* m_delegate;
    CCMenuItemToggler* m_glowToggler;
    cocos2d::CCLabelBMFont* m_glowLabel;
};

#endif /* __CHARACTERCOLORPAGE_H__ */