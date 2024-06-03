#ifndef __SETUPINSTANTCOLLISIONTRIGGERPOPUP_H__
#define __SETUPINSTANTCOLLISIONTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupInstantCollisionTriggerPopup: public SetupTriggerPopup {
public:
    static SetupInstantCollisionTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn updateSpecialNodes();
    virtual void updateDefaultTriggerValues();
    virtual void valueDidChange(int p0, float p1);
};

#endif /* __SETUPINSTANTCOLLISIONTRIGGERPOPUP_H__ */