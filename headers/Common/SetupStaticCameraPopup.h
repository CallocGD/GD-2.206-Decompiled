#ifndef __SETUPSTATICCAMERAPOPUP_H__
#define __SETUPSTATICCAMERAPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupStaticCameraPopup: public SetupTriggerPopup {
public:
    static SetupStaticCameraPopup* create(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
    bool init(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn updateState();
    virtual void valueDidChange(int p0, float p1);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __SETUPSTATICCAMERAPOPUP_H__ */