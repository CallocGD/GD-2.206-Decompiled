#ifndef __STATSOBJECT_H__
#define __STATSOBJECT_H__


#include "../includes.h"

class StatsObject: public cocos2d::CCObject {
public:
    static StatsObject* create(char const* p0, int p1);
    bool init(char const* p0, int p1);
};

#endif /* __STATSOBJECT_H__ */