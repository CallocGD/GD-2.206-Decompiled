#ifndef __INHERITANCENODE_H__
#define __INHERITANCENODE_H__


#include "../includes.h"

class InheritanceNode: public cocos2d::CCObject {
public:
    static InheritanceNode* create(int p0, InheritanceNode* p1);
    bool init(int p0, InheritanceNode* p1);
};

#endif /* __INHERITANCENODE_H__ */