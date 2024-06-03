#ifndef __GJBIGSPRITENODE_H__
#define __GJBIGSPRITENODE_H__


#include "../includes.h"

class GJBigSpriteNode: public cocos2d::CCNode {
public:
    static GJBigSpriteNode* create();
    virtual bool init();
};

#endif /* __GJBIGSPRITENODE_H__ */