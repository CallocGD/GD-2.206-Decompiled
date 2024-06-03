#ifndef __COLORACTION2_H__
#define __COLORACTION2_H__


#include "../includes.h"

class ColorAction2 {
public:
     ColorAction2(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2, double p3, bool p4, int p5, float p6, float p7);
    TodoReturn resetAction();
    TodoReturn step(float p0);
    TodoReturn updateCustomColor(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1);
};

#endif /* __COLORACTION2_H__ */