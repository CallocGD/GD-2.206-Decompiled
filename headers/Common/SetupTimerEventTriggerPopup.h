#ifndef __SETUPTIMEREVENTTRIGGERPOPUP_H__
#define __SETUPTIMEREVENTTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupTimerEventTriggerPopup: public SetupTriggerPopup {
public:
    static SetupTimerEventTriggerPopup* create(TimerTriggerGameObject* p0, cocos2d::CCArray* p1);
    bool init(TimerTriggerGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPTIMEREVENTTRIGGERPOPUP_H__ */