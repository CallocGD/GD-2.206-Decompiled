#ifndef __SETUPZOOMTRIGGERPOPUP_H__
#define __SETUPZOOMTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupZoomTriggerPopup: public SetupTriggerPopup {
public:
    static SetupZoomTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
};

#endif /* __SETUPZOOMTRIGGERPOPUP_H__ */