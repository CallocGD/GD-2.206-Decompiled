
#include "includes.h"

CCSpriteCOpacity* CCSpriteCOpacity::createWithSpriteFrame(cocos2d::CCSpriteFrame* frame){
    CCSpriteCOpacity * sprite = new CCSpriteCOpacity;
    if (sprite->initWithSpriteFrame(frame)){
        sprite->autorelease();
        return sprite;
    } 
    CC_SAFE_DELETE(sprite);
    return nullptr;
};


CCSpriteCOpacity* CCSpriteCOpacity::createWithSpriteFrameName(char const* frameName){
    return createWithSpriteFrame(cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(frameName));
};

void CCSpriteCOpacity::setOpacity(unsigned char opacity)
{
    cocos2d::CCSprite::setOpacity(opacity);
    setChildOpacity(opacity);
}

