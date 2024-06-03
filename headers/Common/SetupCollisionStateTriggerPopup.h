#ifndef __SETUPCOLLISIONSTATETRIGGERPOPUP_H__
#define __SETUPCOLLISIONSTATETRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupInstantCollisionTriggerPopup;

class SetupCollisionStateTriggerPopup: public SetupInstantCollisionTriggerPopup {
public:
    static SetupCollisionStateTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPCOLLISIONSTATETRIGGERPOPUP_H__ */