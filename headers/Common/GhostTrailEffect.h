#ifndef __GHOSTTRAILEFFECT_H__
#define __GHOSTTRAILEFFECT_H__


#include "../includes.h"

class GhostTrailEffect: public cocos2d::CCNode {
public:
    static GhostTrailEffect* create();
    TodoReturn doBlendAdditive();
    TodoReturn runWithTarget(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4, bool p5);
    TodoReturn stopTrail();
    TodoReturn trailSnapshot(float p0);
    virtual bool init();
    virtual void draw();
    /* PAD */

    cocos2d::ccColor3B m_color;
    /* PAD */

};

#endif /* __GHOSTTRAILEFFECT_H__ */