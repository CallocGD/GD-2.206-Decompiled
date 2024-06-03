#ifndef __CREATEMENUITEM_H__
#define __CREATEMENUITEM_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCMenuItemSpriteExtra;

class CreateMenuItem: public CCMenuItemSpriteExtra {
public:
    static CreateMenuItem* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);
    bool init(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);
    /* PAD */

    int m_objectID;
};

#endif /* __CREATEMENUITEM_H__ */