#ifndef __CCSPRITEGRAYSCALE_H__
#define __CCSPRITEGRAYSCALE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCSpriteWithHue;

class CCSpriteGrayscale: public CCSpriteWithHue {
public:
    static CCSpriteGrayscale* create(std::string const& p0, cocos2d::CCRect const& p1);
    static CCSpriteGrayscale* create(std::string const& p0);
    static CCSpriteGrayscale* createWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
    static CCSpriteGrayscale* createWithSpriteFrameName(std::string const& p0);
    TodoReturn createWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2);
    TodoReturn createWithTexture(cocos2d::CCTexture2D* p0);
    virtual std::string getShaderName();
    virtual const char* shaderBody();
};

#endif /* __CCSPRITEGRAYSCALE_H__ */