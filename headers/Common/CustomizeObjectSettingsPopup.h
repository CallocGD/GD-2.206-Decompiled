#ifndef __CUSTOMIZEOBJECTSETTINGSPOPUP_H__
#define __CUSTOMIZEOBJECTSETTINGSPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class CustomizeObjectSettingsPopup: public SetupTriggerPopup {
public:
    static CustomizeObjectSettingsPopup* create(GameObject* p0, cocos2d::CCArray* p1, CustomizeObjectLayer* p2);
    bool init(GameObject* p0, cocos2d::CCArray* p1, CustomizeObjectLayer* p2);
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __CUSTOMIZEOBJECTSETTINGSPOPUP_H__ */