#ifndef __CCMENUITEMSPRITEEXTRA_H__
#define __CCMENUITEMSPRITEEXTRA_H__


#include "../includes.h"

class CCMenuItemSpriteExtra: public cocos2d::CCMenuItemSprite {
public:
     ~CCMenuItemSpriteExtra();
     CCMenuItemSpriteExtra();
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode* sprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);
    bool init(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);
    TodoReturn useAnimationType(MenuAnimationType p0);
    virtual void activate();
    virtual void selected();
    virtual void unselected();
    void setSprite(cocos2d::CCSprite* sprite);
    void updateSprite();
    float m_scaleMultiplier;
    float m_baseScale;
    bool m_animationEnabled;
    bool m_colorEnabled;
    float m_unknown1;
    std::string m_unknown2;
    std::string m_unknown3;
    float m_colorDip;
    cocos2d::CCPoint m_destPosition;
    cocos2d::CCPoint m_offset;
    MenuAnimationType m_animationType;
    cocos2d::CCPoint m_startPosition;
    int m_unknown4;
};

#endif /* __CCMENUITEMSPRITEEXTRA_H__ */