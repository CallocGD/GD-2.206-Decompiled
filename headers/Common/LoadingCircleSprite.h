#ifndef __LOADINGCIRCLESPRITE_H__
#define __LOADINGCIRCLESPRITE_H__


#include "../includes.h"

class LoadingCircleSprite: public cocos2d::CCSprite {
public:
    static LoadingCircleSprite* create();
    TodoReturn fadeInCircle(bool p0);
    TodoReturn hideCircle();
    virtual bool init();
};

#endif /* __LOADINGCIRCLESPRITE_H__ */