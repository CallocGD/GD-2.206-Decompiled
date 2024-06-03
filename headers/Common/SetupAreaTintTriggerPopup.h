#ifndef __SETUPAREATINTTRIGGERPOPUP_H__
#define __SETUPAREATINTTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupAreaMoveTriggerPopup;
class HSVWidgetDelegate;

class SetupAreaTintTriggerPopup: public SetupAreaMoveTriggerPopup, public HSVWidgetDelegate {
public:
    static SetupAreaTintTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
    void onHSV(cocos2d::CCObject* sender);
    TodoReturn updateHSVButton();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void valueDidChange(int p0, float p1);
    virtual void hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::ccHSVValue p1);
};

#endif /* __SETUPAREATINTTRIGGERPOPUP_H__ */