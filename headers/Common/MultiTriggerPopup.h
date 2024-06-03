#ifndef __MULTITRIGGERPOPUP_H__
#define __MULTITRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class MultiTriggerPopup: public SetupTriggerPopup {
public:
    static MultiTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __MULTITRIGGERPOPUP_H__ */