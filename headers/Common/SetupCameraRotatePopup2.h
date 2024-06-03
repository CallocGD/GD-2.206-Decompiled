#ifndef __SETUPCAMERAROTATEPOPUP2_H__
#define __SETUPCAMERAROTATEPOPUP2_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupCameraRotatePopup2: public SetupTriggerPopup {
public:
    static SetupCameraRotatePopup2* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPCAMERAROTATEPOPUP2_H__ */