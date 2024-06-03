#ifndef __CCALERTCIRCLE_H__
#define __CCALERTCIRCLE_H__


#include "../includes.h"

class CCAlertCircle: public cocos2d::CCNode {
public:
    static CCAlertCircle* create();
    virtual bool init();
    virtual void draw();
};

#endif /* __CCALERTCIRCLE_H__ */