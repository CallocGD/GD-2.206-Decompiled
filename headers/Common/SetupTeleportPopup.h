#ifndef __SETUPTELEPORTPOPUP_H__
#define __SETUPTELEPORTPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupTeleportPopup: public SetupTriggerPopup {
public:
    static SetupTeleportPopup* create(TeleportPortalObject* p0, cocos2d::CCArray* p1, int p2, bool p3);
    bool init(TeleportPortalObject* p0, cocos2d::CCArray* p1, int p2, bool p3);
    void onTeleportGravity(cocos2d::CCObject* sender);
    TodoReturn updateTeleportGravityState(int p0);
    virtual TodoReturn determineStartValues();
    virtual void updateDefaultTriggerValues();
    virtual void valueDidChange(int p0, float p1);
};

#endif /* __SETUPTELEPORTPOPUP_H__ */