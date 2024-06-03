#ifndef __CURRENCYREWARDLAYER_H__
#define __CURRENCYREWARDLAYER_H__


#include "../includes.h"

class CurrencyRewardLayer: public cocos2d::CCLayer {
public:
    static CurrencyRewardLayer* create(int p0, int p1, int p2, int p3, CurrencySpriteType p4, int p5, CurrencySpriteType p6, int p7, cocos2d::CCPoint p8, CurrencyRewardType p9, float p10, float p11);
    TodoReturn createObjects(CurrencySpriteType p0, int p1, cocos2d::CCPoint p2, float p3);
    TodoReturn createObjectsFull(CurrencySpriteType p0, int p1, cocos2d::CCSprite* p2, cocos2d::CCPoint p3, float p4);
    TodoReturn createUnlockObject(cocos2d::CCSprite* p0, cocos2d::CCPoint p1, float p2);
    TodoReturn incrementCount(int p0);
    TodoReturn incrementDiamondsCount(int p0);
    TodoReturn incrementMoonsCount(int p0);
    TodoReturn incrementSpecialCount1(int p0);
    TodoReturn incrementSpecialCount2(int p0);
    TodoReturn incrementStarsCount(int p0);
    bool init(int p0, int p1, int p2, int p3, CurrencySpriteType p4, int p5, CurrencySpriteType p6, int p7, cocos2d::CCPoint p8, CurrencyRewardType p9, float p10, float p11);
    TodoReturn pulseSprite(cocos2d::CCSprite* p0);
    virtual void update(float p0);
};

#endif /* __CURRENCYREWARDLAYER_H__ */