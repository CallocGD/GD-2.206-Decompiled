
#include "includes.h"



void CCSpritePlus::addFollower(cocos2d::CCNode *follower){
    m_hasFollower = true;
    if (m_followers == nullptr){
        m_followers = cocos2d::CCArray::create();
        m_followers->retain();
    }
    m_followers->addObject(follower);
}

CCSpritePlus * CCSpritePlus::createWithSpriteFrame(cocos2d::CCSpriteFrame *frame)
{
    CCSpritePlus *pRet = new CCSpritePlus;
    if ((frame != nullptr) && (pRet->initWithSpriteFrame(frame))) {
        pRet->autorelease();
        return pRet;
    }
    CC_SAFE_DELETE(pRet);
    return nullptr;
}

CCSpritePlus * CCSpritePlus::createWithSpriteFrameName(char const* frame){
    return createWithSpriteFrame(cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(frame));
}



void CCSpritePlus::followSprite(CCSpritePlus *sprite)
{
    m_followingSprite = sprite;
    sprite->addFollower(sprite);
}

CCSpritePlus * CCSpritePlus::getFollower(){
    return (m_hasFollower) ? reinterpret_cast<CCSpritePlus*>(m_followers->objectAtIndex(0)) : nullptr;
}


bool CCSpritePlus::initWithSpriteFrameName(char const* frame)
{
    m_eObjType = 13;
    return cocos2d::CCSprite::initWithSpriteFrameName(frame);
}


bool CCSpritePlus::initWithTexture(cocos2d::CCTexture2D* texture)
{
    m_eObjType = 13;
    return cocos2d::CCSprite::initWithTexture(texture);
}

void CCSpritePlus::removeFollower(cocos2d::CCNode *sprite)
{ 
    if (m_followers != nullptr) {
        m_followers->removeObject(sprite, true);
        if (m_followers->count() == 0) {
            m_hasFollower = false;
        }
    }
}   




void CCSpritePlus::setFlipX(bool value){
    unsigned int i;
    cocos2d::CCSprite::setFlipX(value);
    if ((m_propagateFlipChanges != false) && (m_pParent != nullptr)) {
        for (i= 0; i < m_pParent->getChildrenCount(); i++) {
            (reinterpret_cast<cocos2d::CCSprite*>(m_pParent->getChildren()->objectAtIndex(i)))->setFlipX(value);
        }
    }
    if (m_hasFollower) {
        for (i = 0; i < m_followers->count(); i++) {
            reinterpret_cast<cocos2d::CCSprite*>(m_followers->objectAtIndex(i))->setFlipX(value);
        }
    }
}


void CCSpritePlus::setFlipY(bool value){
    unsigned int i;
    cocos2d::CCSprite::setFlipY(value);
    if ((m_propagateFlipChanges != false) && (m_pParent != nullptr)) {
        for (i= 0; i < m_pParent->getChildrenCount(); i++) {
            (reinterpret_cast<cocos2d::CCSprite*>(m_pParent->getChildren()->objectAtIndex(i)))->setFlipY(value);
        }
    }
    if (m_hasFollower) {
        for (i = 0; i < m_followers->count(); i++) {
            reinterpret_cast<cocos2d::CCSprite*>(m_followers->objectAtIndex(i))->setFlipY(value);
        }
    }
}


void CCSpritePlus::setPosition(cocos2d::CCPoint const & pos){ 
    cocos2d::CCSprite::setPosition(pos); 
    if (m_hasFollower){ 
        for (unsigned int i = 0; i < m_followers->count(); i++){ 
            reinterpret_cast<cocos2d::CCSprite*>(m_followers->objectAtIndex(i))->setPosition(pos); 
        } 
    } 
}

void CCSpritePlus::setRotation(float fRotation){ 
    cocos2d::CCSprite::setRotation(fRotation); 
    if (m_hasFollower){ 
        for (unsigned int i = 0; i < m_followers->count(); i++){ 
            reinterpret_cast<cocos2d::CCSprite*>(m_followers->objectAtIndex(i))->setRotation(fRotation); 
        } 
    } 
}

void CCSpritePlus::setRotationX(float fRotationX){ 
    cocos2d::CCSprite::setRotationX(fRotationX); 
    if (m_hasFollower){ 
        for (unsigned int i = 0; i < m_followers->count(); i++){ 
            reinterpret_cast<cocos2d::CCSprite*>(m_followers->objectAtIndex(i))->setRotationX(fRotationX); 
        } 
    } 
}

void CCSpritePlus::setRotationX(float fRotationX){ 
    cocos2d::CCSprite::setRotationX(fRotationX); 
    if (m_hasFollower){ 
        for (unsigned int i = 0; i < m_followers->count(); i++){ 
            reinterpret_cast<cocos2d::CCSprite*>(m_followers->objectAtIndex(i))->setRotationX(fRotationX); 
        } 
    } 
}

void CCSpritePlus::setRotationX(float fRotationX){ 
    cocos2d::CCSprite::setRotationX(fRotationX); 
    if (m_hasFollower){ 
        for (unsigned int i = 0; i < m_followers->count(); i++){ 
            reinterpret_cast<cocos2d::CCSprite*>(m_followers->objectAtIndex(i))->setRotationX(fRotationX); 
        } 
    } 
}

void CCSpritePlus::setRotationY(float fRotationY){ 
    cocos2d::CCSprite::setRotationY(fRotationY); 
    if (m_hasFollower){ 
        for (unsigned int i = 0; i < m_followers->count(); i++){ 
            reinterpret_cast<cocos2d::CCSprite*>(m_followers->objectAtIndex(i))->setRotationY(fRotationY); 
        } 
    }
}

void CCSpritePlus::setScale(float fScale){ 
    cocos2d::CCSprite::setScale(fScale); 
    if (m_hasFollower){ 
        for (unsigned int i = 0; i < m_followers->count(); i++){ 
            reinterpret_cast<cocos2d::CCSprite*>(m_followers->objectAtIndex(i))->setScale(fScale); 
        } 
    } 
}

void CCSpritePlus::setScaleX(float fScaleX){ 
    cocos2d::CCSprite::setScaleX(fScaleX); 
    if (m_hasFollower){ 
        for (unsigned int i = 0; i < m_followers->count(); i++){ 
            reinterpret_cast<cocos2d::CCSprite*>(m_followers->objectAtIndex(i))->setScaleX(fScaleX); 
        } 
    } 
}

void CCSpritePlus::setScaleY(float fScaleY){ 
    cocos2d::CCSprite::setScaleY(fScaleY); 
    if (m_hasFollower){ 
        for (unsigned int i = 0; i < m_followers->count(); i++){ 
            reinterpret_cast<cocos2d::CCSprite*>(m_followers->objectAtIndex(i))->setScaleY(fScaleY); 
        } 
    } 
}

void CCSpritePlus::stopFollow(){
    if (m_followingSprite != nullptr) {
        m_followingSprite->removeFollower(this);
    }
};


