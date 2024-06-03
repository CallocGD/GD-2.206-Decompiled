#ifndef __SETUPOPTIONSTRIGGERPOPUP_H__
#define __SETUPOPTIONSTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupOptionsTriggerPopup: public SetupTriggerPopup {
public:
    static SetupOptionsTriggerPopup* create(GameOptionsTrigger* p0, cocos2d::CCArray* p1);
    TodoReturn addOption(int p0, std::string p1);
    bool init(GameOptionsTrigger* p0, cocos2d::CCArray* p1);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __SETUPOPTIONSTRIGGERPOPUP_H__ */