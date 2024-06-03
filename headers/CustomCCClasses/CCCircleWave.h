#ifndef __CCCIRCLEWAVE_H__
#define __CCCIRCLEWAVE_H__


#include "../includes.h"

class CCCircleWave: public cocos2d::CCNode {
public:
    static CCCircleWave* create(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut);
    static CCCircleWave* create(float p0, float p1, float p2, bool p3);
    TodoReturn baseSetup(float p0);
    TodoReturn followObject(cocos2d::CCNode* p0, bool p1);
    bool init(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut);
    TodoReturn updatePosition(float p0);
    virtual void setPosition(cocos2d::CCPoint const& p0);
    virtual void removeMeAndCleanup();
    virtual void draw();
    virtual void updateTweenAction(float p0, char const* p1);
    /* PAD */

    cocos2d::ccColor3B m_color;
};

#endif /* __CCCIRCLEWAVE_H__ */