#ifndef __SETUPSTOPTRIGGERPOPUP_H__
#define __SETUPSTOPTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupStopTriggerPopup: public SetupTriggerPopup {
public:
    static SetupStopTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __SETUPSTOPTRIGGERPOPUP_H__ */