#ifndef __DUNGEONBARSSPRITE_H__
#define __DUNGEONBARSSPRITE_H__


#include "../includes.h"

class DungeonBarsSprite: public cocos2d::CCNode {
public:
    static DungeonBarsSprite* create();
    TodoReturn animateOutBars();
    virtual bool init();
    virtual void visit();
};

#endif /* __DUNGEONBARSSPRITE_H__ */