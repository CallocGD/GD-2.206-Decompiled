#ifndef __CCSPRITEPLUS_H__
#define __CCSPRITEPLUS_H__


#include "../includes.h"

class CCSpritePlus: public cocos2d::CCSprite {
public:
    TodoReturn addFollower(cocos2d::CCNode* p0);
    TodoReturn createWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
    TodoReturn createWithSpriteFrameName(char const* p0);
    TodoReturn followSprite(CCSpritePlus* p0);
    TodoReturn getFollower();
    TodoReturn removeFollower(cocos2d::CCNode* p0);
    TodoReturn stopFollow();
    virtual void setScaleX(float p0);
    virtual void setScaleY(float p0);
    virtual void setScale(float p0);
    virtual void setPosition(cocos2d::CCPoint const& p0);
    virtual void setRotation(float p0);
    virtual void setRotationX(float p0);
    virtual void setRotationY(float p0);
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);
    virtual bool initWithSpriteFrameName(char const* p0);
    virtual void setFlipX(bool p0);
    virtual void setFlipY(bool p0);
    cocos2d::CCArray* m_followers;
    CCSpritePlus* m_followingSprite;
    bool m_hasFollower;
    bool m_propagateScaleChanges;
    bool m_propagateFlipChanges;
    /* PAD */

};

#endif /* __CCSPRITEPLUS_H__ */