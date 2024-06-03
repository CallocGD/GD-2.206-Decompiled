#ifndef __CCSPRITECOPACITY_H__
#define __CCSPRITECOPACITY_H__


#include "../includes.h"

class CCSpriteCOpacity: public cocos2d::CCSprite {
public:
    TodoReturn createWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
    TodoReturn createWithSpriteFrameName(char const* p0);
    virtual void setOpacity(unsigned char p0);
};

#endif /* __CCSPRITECOPACITY_H__ */