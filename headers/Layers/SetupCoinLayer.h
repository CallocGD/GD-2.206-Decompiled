#ifndef __SETUPCOINLAYER_H__
#define __SETUPCOINLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupCoinLayer: public SetupTriggerPopup {
public:
    static SetupCoinLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPCOINLAYER_H__ */