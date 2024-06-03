#ifndef __URLVIEWLAYER_H__
#define __URLVIEWLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJDropDownLayer;

class URLViewLayer: public GJDropDownLayer {
public:
    static URLViewLayer* create(std::string p0, cocos2d::CCArray* p1);
    bool init(std::string p0, cocos2d::CCArray* p1);
};

#endif /* __URLVIEWLAYER_H__ */