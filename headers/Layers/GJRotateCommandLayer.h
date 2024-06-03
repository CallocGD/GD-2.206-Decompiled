#ifndef __GJROTATECOMMANDLAYER_H__
#define __GJROTATECOMMANDLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class GJRotateCommandLayer: public SetupTriggerPopup {
public:
    static GJRotateCommandLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onEasing(cocos2d::CCObject* sender);
    void onEasingRate(cocos2d::CCObject* sender);
    void onFollowRotation(cocos2d::CCObject* sender);
    void onLockRotation(cocos2d::CCObject* sender);
    void onUpdateGroupID(cocos2d::CCObject* sender);
    void onUpdateGroupID2(cocos2d::CCObject* sender);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn sliderDegreesChanged(cocos2d::CCObject* p0);
    TodoReturn sliderTimesChanged(cocos2d::CCObject* p0);
    TodoReturn toggleEasingRateVisibility();
    TodoReturn updateCommandDegrees();
    TodoReturn updateCommandTimes();
    TodoReturn updateDegreesLabel();
    TodoReturn updateDuration();
    TodoReturn updateDurLabel(bool p0);
    TodoReturn updateEasingLabel();
    TodoReturn updateEasingRateLabel();
    TodoReturn updateMoveCommandEasing();
    TodoReturn updateMoveCommandEasingRate();
    TodoReturn updateTargetGroupID();
    TodoReturn updateTargetGroupID2();
    TodoReturn updateTextInputLabel();
    TodoReturn updateTextInputLabel2();
    TodoReturn updateTimesLabel();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textChanged(CCTextInputNode* p0);
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
};

#endif /* __GJROTATECOMMANDLAYER_H__ */