#ifndef __UIOBJECTSETTINGSPOPUP_H__
#define __UIOBJECTSETTINGSPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class UIObjectSettingsPopup: public SetupTriggerPopup {
public:
    static UIObjectSettingsPopup* create(UISettingsGameObject* p0, cocos2d::CCArray* p1);
    bool init(UISettingsGameObject* p0, cocos2d::CCArray* p1);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __UIOBJECTSETTINGSPOPUP_H__ */