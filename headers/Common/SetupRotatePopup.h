#ifndef __SETUPROTATEPOPUP_H__
#define __SETUPROTATEPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupRotatePopup: public SetupTriggerPopup {
public:
    static SetupRotatePopup* create(EnhancedGameObject* p0, cocos2d::CCArray* p1);
    bool init(EnhancedGameObject* p0, cocos2d::CCArray* p1);
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __SETUPROTATEPOPUP_H__ */