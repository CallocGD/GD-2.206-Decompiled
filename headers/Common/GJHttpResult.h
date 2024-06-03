#ifndef __GJHTTPRESULT_H__
#define __GJHTTPRESULT_H__


#include "../includes.h"

class GJHttpResult: public cocos2d::CCNode {
public:
    static GJHttpResult* create(bool p0, std::string p1, std::string p2, GJHttpType p3);
    bool init(bool p0, std::string p1, std::string p2, GJHttpType p3);
};

#endif /* __GJHTTPRESULT_H__ */