#ifndef __SONGOBJECT_H__
#define __SONGOBJECT_H__


#include "../includes.h"

class SongObject: public cocos2d::CCObject {
public:
    static SongObject* create(int p0);
    bool init(int p0);
};

#endif /* __SONGOBJECT_H__ */