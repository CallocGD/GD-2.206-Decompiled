#ifndef __SETUPADVFOLLOWEDITPHYSICSPOPUP_H__
#define __SETUPADVFOLLOWEDITPHYSICSPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupAdvFollowEditPhysicsPopup: public SetupTriggerPopup {
public:
    static SetupAdvFollowEditPhysicsPopup* create(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);
    bool init(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);
    virtual void valueDidChange(int p0, float p1);
};

#endif /* __SETUPADVFOLLOWEDITPHYSICSPOPUP_H__ */