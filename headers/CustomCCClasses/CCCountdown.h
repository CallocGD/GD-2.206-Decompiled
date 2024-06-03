#ifndef __CCCOUNTDOWN_H__
#define __CCCOUNTDOWN_H__


#include "../includes.h"

class CCCountdown: public cocos2d::CCSprite {
public:
    static CCCountdown* create();
    TodoReturn lapFinished();
    TodoReturn startTimerWithSeconds(float p0, cocos2d::SEL_CallFunc p1, cocos2d::CCNode* p2);
    virtual bool init();
    virtual void setOpacity(unsigned char p0);
};

#endif /* __CCCOUNTDOWN_H__ */