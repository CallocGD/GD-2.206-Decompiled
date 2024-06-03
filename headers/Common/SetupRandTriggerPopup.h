#ifndef __SETUPRANDTRIGGERPOPUP_H__
#define __SETUPRANDTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupRandTriggerPopup: public SetupTriggerPopup {
public:
    static SetupRandTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onTargetID2Arrow(cocos2d::CCObject* sender);
    void onTargetIDArrow(cocos2d::CCObject* sender);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn updateChance();
    TodoReturn updateChanceLabel(bool p0);
    TodoReturn updateTargetID();
    TodoReturn updateTargetID2();
    TodoReturn updateTextInputLabel();
    TodoReturn updateTextInputLabel2();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __SETUPRANDTRIGGERPOPUP_H__ */