#ifndef __SETUPCAMERAMODEPOPUP_H__
#define __SETUPCAMERAMODEPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupCameraModePopup: public SetupTriggerPopup {
public:
    static SetupCameraModePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onEditCameraSettings(cocos2d::CCObject* sender);
    void onUnboundMode(cocos2d::CCObject* sender);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn updateCameraEasing();
    TodoReturn updateCameraEasingLabel();
    TodoReturn updateCameraPadding();
    TodoReturn updateCameraPaddingLabel();
    TodoReturn updateItemVisibility();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
};

#endif /* __SETUPCAMERAMODEPOPUP_H__ */