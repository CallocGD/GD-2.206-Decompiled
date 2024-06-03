#ifndef __SETUPMOVECOMMANDPOPUP_H__
#define __SETUPMOVECOMMANDPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupMoveCommandPopup: public SetupTriggerPopup {
public:
    static SetupMoveCommandPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn updateControlVisibility();
    virtual void updateInputValue(int p0, float& p1);
    virtual TodoReturn updateInputNode(int p0, float p1);
    virtual void valueDidChange(int p0, float p1);
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __SETUPMOVECOMMANDPOPUP_H__ */