#ifndef __CCSPRITECOPACITY_H__
#define __CCSPRITECOPACITY_H__


#include "../includes.h"

class CCSpriteCOpacity: public cocos2d::CCSprite {
public:
    TodoReturn createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);
    TodoReturn createWithSpriteFrameName(char const* frameName);
    virtual void setOpacity(unsigned char opacity);
};

#endif /* __CCSPRITECOPACITY_H__ */
