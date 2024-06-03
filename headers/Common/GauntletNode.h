#ifndef __GAUNTLETNODE_H__
#define __GAUNTLETNODE_H__


#include "../includes.h"

class GauntletNode: public cocos2d::CCNode {
public:
    static GauntletNode* create(GJMapPack* p0);
    TodoReturn frameForType(GauntletType p0);
    bool init(GJMapPack* p0);
    static gd::string nameForType(GauntletType p0);
    TodoReturn onClaimReward();
};

#endif /* __GAUNTLETNODE_H__ */