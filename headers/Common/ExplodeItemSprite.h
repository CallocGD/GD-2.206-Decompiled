#ifndef __EXPLODEITEMSPRITE_H__
#define __EXPLODEITEMSPRITE_H__


#include "../includes.h"

class ExplodeItemSprite: public cocos2d::CCSprite {
public:
    static ExplodeItemSprite* create();
    virtual bool init();
};

#endif /* __EXPLODEITEMSPRITE_H__ */