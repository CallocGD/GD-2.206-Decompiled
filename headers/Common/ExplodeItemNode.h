#ifndef __EXPLODEITEMNODE_H__
#define __EXPLODEITEMNODE_H__


#include "../includes.h"

class ExplodeItemNode: public cocos2d::CCNode {
public:
    static ExplodeItemNode* create(cocos2d::CCRenderTexture* p0);
    TodoReturn createSprites(int p0, int p1, float p2, float p3, float p4, float p5, float p6, float p7, cocos2d::ccColor4F p8, cocos2d::ccColor4F p9, bool p10);
    bool init(cocos2d::CCRenderTexture* p0);
    virtual void update(float p0);
};

#endif /* __EXPLODEITEMNODE_H__ */