#ifndef __CCSPRITEWITHHUE_H__
#define __CCSPRITEWITHHUE_H__


#include "../includes.h"

class CCSpriteWithHue: public cocos2d::CCSprite {
public:
    static CCSpriteWithHue* create(std::string const& p0, cocos2d::CCRect const& p1);
    static CCSpriteWithHue* create(std::string const& p0);
    TodoReturn createWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
    TodoReturn createWithSpriteFrameName(std::string const& p0);
    TodoReturn createWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2);
    TodoReturn createWithTexture(cocos2d::CCTexture2D* p0);
    TodoReturn getAlpha();
    TodoReturn getHue();
    TodoReturn getUniformLocations();
    TodoReturn initShader();
    void setCustomLuminance(float p0, float p1, float p2);
    void setEvenLuminance(float p0);
    void setHue(float p0);
    void setHueDegrees(float p0);
    void setLuminance(float p0);
    TodoReturn setupDefaultSettings();
    TodoReturn updateColorMatrix();
    TodoReturn updateHue(float p0);
    virtual void draw();
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1);
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2);
    virtual bool initWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
    virtual TodoReturn getShaderName();
    virtual TodoReturn shaderBody();
    virtual void updateColor();
};

#endif /* __CCSPRITEWITHHUE_H__ */