#ifndef __SETUPGAMEPLAYOFFSETPOPUP_H__
#define __SETUPGAMEPLAYOFFSETPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupGameplayOffsetPopup: public SetupTriggerPopup {
public:
    static SetupGameplayOffsetPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onDefaultValues(cocos2d::CCObject* sender);
    virtual void updateInputValue(int p0, float& p1);
    virtual TodoReturn updateInputNode(int p0, float p1);
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __SETUPGAMEPLAYOFFSETPOPUP_H__ */