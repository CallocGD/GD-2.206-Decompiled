#ifndef __GAUNTLETSPRITE_H__
#define __GAUNTLETSPRITE_H__


#include "../includes.h"

class GauntletSprite: public cocos2d::CCNode {
public:
    static GauntletSprite* create(GauntletType p0, bool p1);
    TodoReturn addLockedSprite();
    TodoReturn addNormalSprite();
    TodoReturn colorForType(GauntletType p0);
    bool init(GauntletType p0, bool p1);
    TodoReturn luminanceForType(GauntletType p0);
    TodoReturn toggleLockedSprite(bool p0);
};

#endif /* __GAUNTLETSPRITE_H__ */