#ifndef __SETUPAREAMOVETRIGGERPOPUP_H__
#define __SETUPAREAMOVETRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupAreaMoveTriggerPopup: public SetupTriggerPopup {
public:
    static SetupAreaMoveTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);
    TodoReturn addAreaDefaultControls(int p0);
    TodoReturn getModeValues(int p0, int& p1, bool& p2, bool& p3);
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
    void onMode(cocos2d::CCObject* sender);
    void onNextFreeEffectID(cocos2d::CCObject* sender);
    void onSpecialTarget(cocos2d::CCObject* sender);
    TodoReturn updateEnterTargetIDState();
    virtual void updateInputValue(int p0, float& p1);
    virtual void updateDefaultTriggerValues();
    virtual TodoReturn updateInputNode(int p0, float p1);
    virtual void valueDidChange(int p0, float p1);
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
};

#endif /* __SETUPAREAMOVETRIGGERPOPUP_H__ */