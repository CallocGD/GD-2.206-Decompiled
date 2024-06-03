#ifndef __CCMENUITEMTOGGLER_H__
#define __CCMENUITEMTOGGLER_H__


#include "../includes.h"

class CCMenuItemToggler: public cocos2d::CCMenuItem {
public:
     CCMenuItemToggler();
    static CCMenuItemToggler* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);
    static CCMenuItemToggler* createWithSize(const char* spr1, const char* spr2, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);
    static CCMenuItemToggler* createWithStandardSprites(cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);
    TodoReturn activeItem();
    bool init(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);
    TodoReturn normalTouch(cocos2d::CCObject* p0);
    TodoReturn selectedTouch(cocos2d::CCObject* p0);
    void setSizeMult(float mult);
    void toggle(bool p0);
    bool isToggled();
    bool isOn();
    void setClickable(bool on);
    void toggleWithCallback(bool on);
    virtual void activate();
    virtual void selected();
    virtual void unselected();
    virtual void setEnabled(bool p0);
    void updateSprite();
    CCMenuItemSpriteExtra* m_offButton;
    CCMenuItemSpriteExtra* m_onButton;
    bool m_toggled;
    bool m_notClickable;
};

#endif /* __CCMENUITEMTOGGLER_H__ */