#ifndef __GJCHESTSPRITE_H__
#define __GJCHESTSPRITE_H__


#include "../includes.h"

class GJChestSprite: public cocos2d::CCSprite {
public:
    static GJChestSprite* create(int p0);
    bool init(int p0);
    void switchToState(ChestSpriteState p0, bool p1);
    virtual void setOpacity(unsigned char p0);
    virtual void setColor(cocos2d::ccColor3B const& p0);
};

#endif /* __GJCHESTSPRITE_H__ */