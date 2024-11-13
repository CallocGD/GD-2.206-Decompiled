
#include "includes.h"


CCSpritePart* CCSpritePart::create(cocos2d::CCTexture2D* texture)
{   
    CCSpritePart* part = new CCSpritePart;
    if (part->initWithTexture(texture)) {
        part->autorelease();
        return part;
    }
    CC_SAFE_DELETE(part);
    return nullptr;
}



CCSpritePart* CCSpritePart::createWithSpriteFrameName(char const* frameName){
    CCSpritePart* part = new CCSpritePart;
    if (part->initWithSpriteFrameName(frameName)) {
        part->autorelease();
        return part;
    }
    CC_SAFE_DELETE(part);
    return nullptr;
};


void CCSpritePart::frameChanged(std::string frame){
    if ((m_delegate != nullptr) && (frame == this->m_spriteFrameName)){
        m_delegate->displayFrameChanged(this, frame);
    }
    m_spriteFrameName = frame;
}; 


bool CCSpritePart::getBeingUsed()
{
    return m_isBeingUsed;
}


void CCSpritePart::hideInactive(){
    if (!m_isBeingUsed) {
        setVisible(false);
    }
};


void CCSpritePart::markAsNotBeingUsed(){
    m_isBeingUsed = false;
};


void CCSpritePart::resetTextureRect()
{
    cocos2d::CCSprite::setTextureRect(cocos2d::CCRectZero);
}

void CCSpritePart::setBeingUsed(bool used)
{
    m_isBeingUsed = used;
}

void CCSpritePart::setVisible(bool visible)
{
    cocos2d::CCSprite::setVisible((!m_isBeingUsed) ? false: visible);
}


void CCSpritePart::updateDisplayFrame(std::string frame){
    frameChanged(frame);
    setDisplayFrame(cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(frame.c_str()));
};
