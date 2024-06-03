#ifndef __SETUPTIMERCONTROLTRIGGERPOPUP_H__
#define __SETUPTIMERCONTROLTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupTimerControlTriggerPopup: public SetupTriggerPopup {
public:
    static SetupTimerControlTriggerPopup* create(TimerTriggerGameObject* p0, cocos2d::CCArray* p1);
    bool init(TimerTriggerGameObject* p0, cocos2d::CCArray* p1);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __SETUPTIMERCONTROLTRIGGERPOPUP_H__ */