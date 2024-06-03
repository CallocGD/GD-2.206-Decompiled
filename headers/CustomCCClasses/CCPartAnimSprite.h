#ifndef __CCPARTANIMSPRITE_H__
#define __CCPARTANIMSPRITE_H__


#include "../includes.h"

class CCPartAnimSprite: public cocos2d::CCSprite {
public:
    TodoReturn changeTextureOfID(char const* p0, char const* p1);
    TodoReturn countParts();
    TodoReturn createWithAnimDesc(char const* p0, cocos2d::CCTexture2D* p1, bool p2);
    TodoReturn dirtify();
    TodoReturn getSpriteForKey(char const* p0);
    TodoReturn initWithAnimDesc(char const* p0, cocos2d::CCTexture2D* p1, bool p2);
    void setColor(cocos2d::ccColor3B p0);
    void setFlipX(bool p0);
    void setFlipY(bool p0);
    TodoReturn transformSprite(SpriteDescription* p0);
    TodoReturn tweenSpriteTo(SpriteDescription* p0, float p1);
    TodoReturn tweenToFrame(cocos2d::CCSpriteFrame* p0, float p1);
    virtual void setScaleX(float p0);
    virtual void setScaleY(float p0);
    virtual void setScale(float p0);
    virtual void setOpacity(unsigned char p0);
    virtual void setBlendFunc(cocos2d::_ccBlendFunc p0);
    virtual void setDisplayFrame(cocos2d::CCSpriteFrame* p0);
    virtual bool isFrameDisplayed(cocos2d::CCSpriteFrame* p0);
    virtual cocos2d::CCSpriteFrame* displayFrame();
};

#endif /* __CCPARTANIMSPRITE_H__ */