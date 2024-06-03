#ifndef __SETUPGRAVITYTRIGGERPOPUP_H__
#define __SETUPGRAVITYTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupGravityTriggerPopup: public SetupTriggerPopup {
public:
    static SetupGravityTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    virtual void valueDidChange(int p0, float p1);
};

#endif /* __SETUPGRAVITYTRIGGERPOPUP_H__ */