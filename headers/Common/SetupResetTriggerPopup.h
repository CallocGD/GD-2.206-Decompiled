#ifndef __SETUPRESETTRIGGERPOPUP_H__
#define __SETUPRESETTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupResetTriggerPopup: public SetupTriggerPopup {
public:
    static SetupResetTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPRESETTRIGGERPOPUP_H__ */