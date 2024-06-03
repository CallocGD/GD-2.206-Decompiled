#ifndef __CCLIGHTFLASH_H__
#define __CCLIGHTFLASH_H__


#include "../includes.h"

class CCLightFlash: public cocos2d::CCNode {
public:
    static CCLightFlash* create();
    TodoReturn cleanupFlash();
    void fadeAndRemove();
    TodoReturn playEffect(cocos2d::CCPoint p0, cocos2d::ccColor3B p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, int p16, bool p17, bool p18, float p19);
    TodoReturn removeLights();
    void showFlash();
    virtual bool init();
};

#endif /* __CCLIGHTFLASH_H__ */