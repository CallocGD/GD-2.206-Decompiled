#ifndef __SETUPROTATECOMMANDPOPUP_H__
#define __SETUPROTATECOMMANDPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupRotateCommandPopup: public SetupTriggerPopup {
public:
    static SetupRotateCommandPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onInfiniteDuration(cocos2d::CCObject* sender);
    TodoReturn updateControlVisibility();
    virtual TodoReturn updateInputNode(int p0, float p1);
    virtual void valueDidChange(int p0, float p1);
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __SETUPROTATECOMMANDPOPUP_H__ */