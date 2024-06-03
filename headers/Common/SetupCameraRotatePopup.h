#ifndef __SETUPCAMERAROTATEPOPUP_H__
#define __SETUPCAMERAROTATEPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupCameraRotatePopup: public SetupTriggerPopup {
public:
    static SetupCameraRotatePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onEasing(cocos2d::CCObject* sender);
    void onEasingRate(cocos2d::CCObject* sender);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn sliderDegreesChanged(cocos2d::CCObject* p0);
    TodoReturn toggleEasingRateVisibility();
    TodoReturn updateCommandDegrees();
    TodoReturn updateDegreesLabel();
    TodoReturn updateDuration();
    TodoReturn updateDurLabel(bool p0);
    TodoReturn updateEasingLabel();
    TodoReturn updateEasingRateLabel();
    TodoReturn updateMoveCommandEasing();
    TodoReturn updateMoveCommandEasingRate();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textChanged(CCTextInputNode* p0);
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
};

#endif /* __SETUPCAMERAROTATEPOPUP_H__ */