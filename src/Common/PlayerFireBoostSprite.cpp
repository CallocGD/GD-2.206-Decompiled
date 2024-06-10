
#include "includes.h"


void PlayerFireBoostSprite::animateFireIn()
{
    stopAllActions();
    runAction(
        cocos2d::CCSequence::create(
            cocos2d::CCScaleTo::create(0.06,this->m_size * 0.6,this->m_size * 1.5), 
            cocos2d::CCCallFunc::create(this, (cocos2d::SEL_CallFunc)(&loopFireAnimation)))
    );
}


void PlayerFireBoostSprite::animateFireOut()
{
    stopAllActions();
    runAction(cocos2d::CCScaleTo::create(0.4, 0.01, 0.01));
}


PlayerFireBoostSprite* PlayerFireBoostSprite::create()
{
    PlayerFireBoostSprite* pfbs = new PlayerFireBoostSprite();
    if ((pfbs != nullptr) & (pfbs->init())){
        pfbs->autorelease();
        return pfbs;
    }
    CC_SAFE_DELETE(pfbs);
    return nullptr;
}


bool PlayerFireBoostSprite::init()
{
    if (!initWithFile("fireBoost_001.png")){
        return false;
    }
    setAnchorPoint(CCPointMake(0.5,1.0));
    return true;
}



void PlayerFireBoostSprite::loopFireAnimation()
{
    stopAllActions();
    runAction(
        cocos2d::CCRepeatForever::create(
            cocos2d::CCSequence::create(
                cocos2d::CCScaleTo::create(0.06 , m_size * 1.2, m_size),
                cocos2d::CCScaleTo::create(0.06 , m_size * 0.6, m_size * 1.5),
                0
            )
        )
    );
}
