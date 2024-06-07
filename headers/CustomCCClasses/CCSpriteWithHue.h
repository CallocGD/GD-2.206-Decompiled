#ifndef __CCSPRITEWITHHUE_H__
#define __CCSPRITEWITHHUE_H__


#include "../includes.h"

class CCSpriteWithHue: public cocos2d::CCSprite {
public:
    CCSpriteWithHue(){};

    static CCSpriteWithHue* create(std::string const& frame, cocos2d::CCRect const& rect);
    static CCSpriteWithHue* create(std::string const& frame);
    static CCSpriteWithHue* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);
    static CCSpriteWithHue* createWithSpriteFrameName(std::string const& p0);
    static CCSpriteWithHue* createWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotate);
    static CCSpriteWithHue* createWithTexture(cocos2d::CCTexture2D* texture);
    float getAlpha();
    float getHue();
    void getUniformLocations();
    void initShader();
    void setCustomLuminance(float r, float g, float b);
    void setEvenLuminance(float lum);
    void setHue(float hue);
    void setHueDegrees(float degress);
    void setLuminance(float lum);
    void setupDefaultSettings();
    void updateColorMatrix();
    void updateHue(float hue);
    virtual void draw();
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture);
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect);
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotate);
    virtual bool initWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
    virtual std::string getShaderName();
    virtual const char* shaderBody();
    virtual void updateColor();

    float m_hue;
    float m_luminance[3];
    float m_colorMatrix[3][3];	
    float m_uHueLoc;
    float m_uAlphaLoc;
    float m_uLumLoc;
};

#endif /* __CCSPRITEWITHHUE_H__ */