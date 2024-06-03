#ifndef __SETUPMGTRIGGER_H__
#define __SETUPMGTRIGGER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupMGTrigger: public SetupTriggerPopup {
public:
    static SetupMGTrigger* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onEasing(cocos2d::CCObject* sender);
    void onEasingRate(cocos2d::CCObject* sender);
    TodoReturn posFromSliderValue(float p0);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn sliderValueFromPos(int p0);
    TodoReturn sliderYChanged(cocos2d::CCObject* p0);
    TodoReturn toggleEasingRateVisibility();
    TodoReturn updateDuration();
    TodoReturn updateDurLabel(bool p0);
    TodoReturn updateEasingLabel();
    TodoReturn updateEasingRateLabel();
    TodoReturn updateMoveCommandEasing();
    TodoReturn updateMoveCommandEasingRate();
    TodoReturn updateMoveCommandPosY();
    TodoReturn updateValueYLabel();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textChanged(CCTextInputNode* p0);
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
};

#endif /* __SETUPMGTRIGGER_H__ */