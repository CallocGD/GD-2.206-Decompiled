#ifndef __GJBIGSPRITE_H__
#define __GJBIGSPRITE_H__


#include "../includes.h"

class GJBigSprite: public cocos2d::CCNode {
public:
    static GJBigSprite* create();
    TodoReturn finishedLoadingSpriteAsync(cocos2d::CCObject* p0);
    TodoReturn loadSpriteAsync(std::string p0, int p1);
    TodoReturn unloadAll();
    TodoReturn unloadSprite(std::string p0, int p1);
    TodoReturn updateSpriteVisibility();
    virtual bool init();
};

#endif /* __GJBIGSPRITE_H__ */