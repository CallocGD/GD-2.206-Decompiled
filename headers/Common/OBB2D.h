#ifndef __OBB2D_H__
#define __OBB2D_H__


#include "../includes.h"

class OBB2D: public cocos2d::CCNode {
public:
    static OBB2D* create(cocos2d::CCPoint p0, float p1, float p2, float p3);
    TodoReturn calculateWithCenter(cocos2d::CCPoint p0, float p1, float p2, float p3);
    TodoReturn computeAxes();
    TodoReturn getBoundingRect();
    bool init(cocos2d::CCPoint p0, float p1, float p2, float p3);
    TodoReturn orderCorners();
    TodoReturn overlaps(OBB2D* p0);
    TodoReturn overlaps1Way(OBB2D* p0);
};

#endif /* __OBB2D_H__ */