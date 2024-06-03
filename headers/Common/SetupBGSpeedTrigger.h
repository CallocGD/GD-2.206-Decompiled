#ifndef __SETUPBGSPEEDTRIGGER_H__
#define __SETUPBGSPEEDTRIGGER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupBGSpeedTrigger: public SetupTriggerPopup {
public:
    static SetupBGSpeedTrigger* create(EffectGameObject* p0, cocos2d::CCArray* p1, int p2);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, int p2);
};

#endif /* __SETUPBGSPEEDTRIGGER_H__ */