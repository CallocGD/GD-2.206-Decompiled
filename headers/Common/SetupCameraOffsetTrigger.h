#ifndef __SETUPCAMERAOFFSETTRIGGER_H__
#define __SETUPCAMERAOFFSETTRIGGER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupCameraOffsetTrigger: public SetupTriggerPopup {
public:
    static SetupCameraOffsetTrigger* create(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
    bool init(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
    void onEasing(cocos2d::CCObject* sender);
    void onEasingRate(cocos2d::CCObject* sender);
    void onTargetMode(cocos2d::CCObject* sender);
    TodoReturn posFromSliderValue(float p0);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn sliderValueFromPos(int p0);
    TodoReturn sliderXChanged(cocos2d::CCObject* p0);
    TodoReturn sliderYChanged(cocos2d::CCObject* p0);
    TodoReturn toggleEasingRateVisibility();
    TodoReturn updateDuration();
    TodoReturn updateDurLabel(bool p0);
    TodoReturn updateEasingLabel();
    TodoReturn updateEasingRateLabel();
    TodoReturn updateMoveCommandEasing();
    TodoReturn updateMoveCommandEasingRate();
    TodoReturn updateMoveCommandPosX();
    TodoReturn updateMoveCommandPosY();
    TodoReturn updateValueXLabel();
    TodoReturn updateValueYLabel();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textChanged(CCTextInputNode* p0);
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
};

#endif /* __SETUPCAMERAOFFSETTRIGGER_H__ */