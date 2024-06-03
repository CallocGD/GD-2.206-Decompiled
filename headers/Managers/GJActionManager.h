#ifndef __GJACTIONMANAGER_H__
#define __GJACTIONMANAGER_H__


#include "../includes.h"

class GJActionManager: public cocos2d::CCNode {
public:
    static GJActionManager* create();
    TodoReturn getInternalAction(int p0);
    TodoReturn runInternalAction(cocos2d::CCAction* p0, cocos2d::CCNode* p1);
    TodoReturn stopAllInternalActions();
    TodoReturn stopInternalAction(int p0);
    TodoReturn updateInternalActions(float p0, bool p1);
    virtual bool init();
};

#endif /* __GJACTIONMANAGER_H__ */