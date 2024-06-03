#ifndef __SETUPADVFOLLOWRETARGETPOPUP_H__
#define __SETUPADVFOLLOWRETARGETPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupAdvFollowRetargetPopup: public SetupTriggerPopup {
public:
    static SetupAdvFollowRetargetPopup* create(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);
    bool init(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);
    virtual void updateDefaultTriggerValues();
    virtual void valueDidChange(int p0, float p1);
};

#endif /* __SETUPADVFOLLOWRETARGETPOPUP_H__ */