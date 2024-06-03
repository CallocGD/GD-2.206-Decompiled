#ifndef __SETUPFORCEBLOCKPOPUP_H__
#define __SETUPFORCEBLOCKPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupForceBlockPopup: public SetupTriggerPopup {
public:
    static SetupForceBlockPopup* create(ForceBlockGameObject* p0, cocos2d::CCArray* p1);
    bool init(ForceBlockGameObject* p0, cocos2d::CCArray* p1);
    virtual void valueDidChange(int p0, float p1);
};

#endif /* __SETUPFORCEBLOCKPOPUP_H__ */