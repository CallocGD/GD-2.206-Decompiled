#ifndef __SETUPOPACITYPOPUP_H__
#define __SETUPOPACITYPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupOpacityPopup: public SetupTriggerPopup {
public:
    static SetupOpacityPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onTargetIDArrow(cocos2d::CCObject* sender);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn updateDuration();
    TodoReturn updateDurLabel(bool p0);
    void updateOpacity();
    void updateOpacityLabel();
    TodoReturn updateTargetID();
    TodoReturn updateTextInputLabel();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __SETUPOPACITYPOPUP_H__ */