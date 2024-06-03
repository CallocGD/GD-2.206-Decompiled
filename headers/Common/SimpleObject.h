#ifndef __SIMPLEOBJECT_H__
#define __SIMPLEOBJECT_H__


#include "../includes.h"

class SimpleObject: public cocos2d::CCObject {
public:
    static SimpleObject* create();
    bool init();
};

#endif /* __SIMPLEOBJECT_H__ */