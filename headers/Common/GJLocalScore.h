#ifndef __GJLOCALSCORE_H__
#define __GJLOCALSCORE_H__


#include "../includes.h"

class GJLocalScore: public cocos2d::CCObject {
public:
    static GJLocalScore* create(int p0, int p1);
    bool init(int p0, int p1);
};

#endif /* __GJLOCALSCORE_H__ */