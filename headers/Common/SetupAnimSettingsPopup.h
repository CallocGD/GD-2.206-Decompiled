#ifndef __SETUPANIMSETTINGSPOPUP_H__
#define __SETUPANIMSETTINGSPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupAnimSettingsPopup: public SetupTriggerPopup {
public:
    static SetupAnimSettingsPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn updateAnimSettings();
    virtual void onClose(cocos2d::CCObject* sender);
};

#endif /* __SETUPANIMSETTINGSPOPUP_H__ */