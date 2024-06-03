#ifndef __SETUPENTEREFFECTPOPUP_H__
#define __SETUPENTEREFFECTPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;
class HSVWidgetDelegate;

class SetupEnterEffectPopup: public SetupTriggerPopup, public HSVWidgetDelegate {
public:
    static SetupEnterEffectPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);
    void onEnterType(cocos2d::CCObject* sender);
    void onHSV(cocos2d::CCObject* sender);
    void onNextFreeEnterChannel(cocos2d::CCObject* sender);
    void onNextFreeEnterEffectID(cocos2d::CCObject* sender);
    TodoReturn updateHSVButton();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void updateInputValue(int p0, float& p1);
    virtual TodoReturn updateInputNode(int p0, float p1);
    virtual void valueDidChange(int p0, float p1);
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
    virtual void hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::ccHSVValue p1);
};

#endif /* __SETUPENTEREFFECTPOPUP_H__ */