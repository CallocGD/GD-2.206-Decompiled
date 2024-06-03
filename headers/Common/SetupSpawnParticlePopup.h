#ifndef __SETUPSPAWNPARTICLEPOPUP_H__
#define __SETUPSPAWNPARTICLEPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupSpawnParticlePopup: public SetupTriggerPopup {
public:
    static SetupSpawnParticlePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPSPAWNPARTICLEPOPUP_H__ */