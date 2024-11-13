#ifndef __CCSPRITEGRAYSCALE_H__
#define __CCSPRITEGRAYSCALE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCSpriteWithHue;

class CCSpriteGrayscale: public CCSpriteWithHue {
public:
    static CCSpriteGrayscale* create(std::string const& file, cocos2d::CCRect const& rect);
    static CCSpriteGrayscale* create(std::string const& file);
    static CCSpriteGrayscale* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);
    static CCSpriteGrayscale* createWithSpriteFrameName(std::string const& frameName);
    static CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotated);
    static CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D* texture);
    virtual std::string getShaderName();
    virtual const char* shaderBody();
};


#endif /* __CCSPRITEGRAYSCALE_H__ */
