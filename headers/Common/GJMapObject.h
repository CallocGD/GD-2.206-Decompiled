#ifndef __GJMAPOBJECT_H__
#define __GJMAPOBJECT_H__


#include "../includes.h"

class GJMapObject: public cocos2d::CCNode {
public:
    static GJMapObject* create(cocos2d::CCNode* p0);
    TodoReturn createMonster(int p0);
    bool init(cocos2d::CCNode* p0);
    TodoReturn monsterIdle();
    TodoReturn monsterJump();
    TodoReturn moveFinished();
    TodoReturn moveMonster();
    TodoReturn moveMonster(cocos2d::CCPoint p0, float p1);
    TodoReturn playerJump();
    void setObjectOrigin(cocos2d::CCPoint p0, float p1);
    TodoReturn startMonsterJumpLoop();
    TodoReturn startPlayerJumpLoop();
    TodoReturn touchMonster();
    TodoReturn updateShadow(float p0, float p1, cocos2d::CCPoint p2);
};

#endif /* __GJMAPOBJECT_H__ */