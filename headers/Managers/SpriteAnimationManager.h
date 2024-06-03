#ifndef __SPRITEANIMATIONMANAGER_H__
#define __SPRITEANIMATIONMANAGER_H__


#include "../includes.h"

class SpriteAnimationManager: public cocos2d::CCNode {
public:
    TodoReturn animationFinished();
    TodoReturn callAnimationFinished();
    TodoReturn createAnimations(std::string p0);
    TodoReturn createWithOwner(CCAnimatedSprite* p0, std::string p1);
    TodoReturn doCleanup();
    TodoReturn executeAnimation(std::string p0);
    TodoReturn finishAnimation(std::string p0);
    TodoReturn getAnimType(std::string p0);
    TodoReturn getPrio(std::string p0);
    TodoReturn initWithOwner(CCAnimatedSprite* p0, std::string p1);
    TodoReturn loadAnimations(std::string p0);
    TodoReturn offsetCurrentAnimation(float p0);
    TodoReturn overridePrio();
    TodoReturn playSound(std::string p0);
    TodoReturn playSoundForAnimation(std::string p0);
    TodoReturn queueAnimation(std::string p0);
    TodoReturn resetAnimState();
    TodoReturn runAnimation(std::string p0);
    TodoReturn runQueuedAnimation();
    TodoReturn stopAnimations();
    TodoReturn storeAnimation(cocos2d::CCAnimate* p0, cocos2d::CCAnimate* p1, std::string p2, int p3, spriteMode p4, cocos2d::CCSpriteFrame* p5);
    TodoReturn storeSoundForAnimation(cocos2d::CCString* p0, std::string p1, float p2);
    TodoReturn switchToFirstFrameOfAnimation(std::string p0);
    TodoReturn updateAnimationSpeed(float p0);
};

#endif /* __SPRITEANIMATIONMANAGER_H__ */