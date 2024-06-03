#ifndef __GJWORLDNODE_H__
#define __GJWORLDNODE_H__


#include "../includes.h"

class GJWorldNode: public cocos2d::CCNode {
public:
    static GJWorldNode* create(int p0, WorldSelectLayer* p1);
    TodoReturn addDotsToLevel(int p0, bool p1);
    TodoReturn dotPositionForLevel(int p0, int p1);
    bool init(int p0, WorldSelectLayer* p1);
    void onLevel(cocos2d::CCObject* sender);
    TodoReturn playStep1();
    TodoReturn playStep2();
    TodoReturn playStep3();
    TodoReturn positionForLevelButton(int p0);
    TodoReturn unlockActiveItem();
};

#endif /* __GJWORLDNODE_H__ */