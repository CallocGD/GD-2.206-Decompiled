#ifndef __GJROTATIONCONTROL_H__
#define __GJROTATIONCONTROL_H__


#include "../includes.h"

class GJRotationControl: public cocos2d::CCLayer {
public:
    static GJRotationControl* create();
    TodoReturn finishTouch();
    void setAngle(float p0);
    TodoReturn updateSliderPosition(cocos2d::CCPoint p0);
    virtual bool init();
    virtual void draw();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
};

#endif /* __GJROTATIONCONTROL_H__ */