#ifndef __SETUPPICKUPTRIGGERPOPUP_H__
#define __SETUPPICKUPTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupPickupTriggerPopup: public SetupTriggerPopup {
public:
    static SetupPickupTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn updateState();
    virtual void onPlusButton(cocos2d::CCObject* sender);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __SETUPPICKUPTRIGGERPOPUP_H__ */