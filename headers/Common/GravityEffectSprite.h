#ifndef __GRAVITYEFFECTSPRITE_H__
#define __GRAVITYEFFECTSPRITE_H__


#include "../includes.h"

class GravityEffectSprite: public cocos2d::CCSprite {
public:
    static GravityEffectSprite* create();
    TodoReturn updateSpritesColor(cocos2d::ccColor3B p0);
    virtual bool init();
    virtual void draw();
};

#endif /* __GRAVITYEFFECTSPRITE_H__ */