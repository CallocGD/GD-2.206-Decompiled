#ifndef __CCANIMATEDSPRITE_H__
#define __CCANIMATEDSPRITE_H__


#include "../includes.h"

class CCAnimatedSprite: public cocos2d::CCSprite {
public:
    TodoReturn cleanupSprite();
    TodoReturn createWithType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);
    bool initWithType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);
    TodoReturn loadType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);
    void runAnimation(std::string p0);
    void runAnimationForced(std::string p0);
    TodoReturn stopTween();
    TodoReturn switchToMode(spriteMode p0);
    void tweenToAnimation(std::string p0, float p1);
    void tweenToAnimationFinished();
    TodoReturn willPlayAnimation();
    virtual void setOpacity(unsigned char p0);
    virtual void setColor(cocos2d::ccColor3B const& p0);
    virtual TodoReturn animationFinished(char const* p0);
    virtual TodoReturn animationFinishedO(cocos2d::CCObject* p0);
};

#endif /* __CCANIMATEDSPRITE_H__ */