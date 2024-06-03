#ifndef __RATELEVELLAYER_H__
#define __RATELEVELLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class RateLevelLayer: public FLAlertLayer {
public:
    static RateLevelLayer* create(int p0);
    bool init(int p0);
    void onClose(cocos2d::CCObject* sender);
    void onRate(cocos2d::CCObject* sender);
    TodoReturn selectRating(cocos2d::CCObject* p0);
    virtual void keyBackClicked();
};

#endif /* __RATELEVELLAYER_H__ */