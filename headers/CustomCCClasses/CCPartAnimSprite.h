#ifndef __CCPARTANIMSPRITE_H__
#define __CCPARTANIMSPRITE_H__


#include "../includes.h"

class CCPartAnimSprite: public cocos2d::CCSprite {
public:
    void changeTextureOfID(char *textureFrame, char *displayFrame);
    unsigned int countParts();
    static CCPartAnimSprite* createWithAnimDesc(char const* frame, cocos2d::CCTexture2D* texture, bool rotated);
    void dirtify();
    CCSpritePart* getSpriteForKey(char const* partID);
    bool initWithAnimDesc(char const* frame, cocos2d::CCTexture2D* texture, bool rotated);
    void setColor(cocos2d::ccColor3B p0);
    void setFlipX(bool p0);
    void setFlipY(bool p0);
    void transformSprite(SpriteDescription* desc);
    void tweenSpriteTo(SpriteDescription* desc, float duration);
    void tweenToFrame(cocos2d::CCSpriteFrame* frame, float duration);
    virtual void setScaleX(float scaleX);
    virtual void setScaleY(float scaleY);
    virtual void setScale(float scale);
    virtual void setOpacity(unsigned char opacity);
    virtual void setBlendFunc(cocos2d::ccBlendFunc func);
    virtual void setDisplayFrame(cocos2d::CCSpriteFrame* frame);
    virtual bool isFrameDisplayed(cocos2d::CCSpriteFrame* frame);


    virtual cocos2d::CCSpriteFrame* displayFrame();

    cocos2d::CCDictionary* m_spritePartIDs;
    cocos2d::CCSpriteFrame* m_spriteFrame;
    bool m_hasChanged;
    cocos2d::CCSize m_unkSize;
    cocos2d::CCArray* m_spriteParts;

};

#endif /* __CCPARTANIMSPRITE_H__ */
