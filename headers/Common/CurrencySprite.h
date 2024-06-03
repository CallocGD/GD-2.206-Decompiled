#ifndef __CURRENCYSPRITE_H__
#define __CURRENCYSPRITE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCSpritePlus;

class CurrencySprite: public CCSpritePlus {
public:
    static CurrencySprite* create(CurrencySpriteType p0, bool p1);
    TodoReturn createWithSprite(cocos2d::CCSprite* p0);
    bool init(CurrencySpriteType p0, bool p1);
    TodoReturn initWithSprite(cocos2d::CCSprite* p0);
    TodoReturn rewardToSpriteType(int p0);
    TodoReturn spriteTypeToStat(CurrencySpriteType p0);
};

#endif /* __CURRENCYSPRITE_H__ */