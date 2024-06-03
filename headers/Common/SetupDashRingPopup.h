#ifndef __SETUPDASHRINGPOPUP_H__
#define __SETUPDASHRINGPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupDashRingPopup: public SetupTriggerPopup {
public:
    static SetupDashRingPopup* create(DashRingObject* p0, cocos2d::CCArray* p1);
    bool init(DashRingObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPDASHRINGPOPUP_H__ */