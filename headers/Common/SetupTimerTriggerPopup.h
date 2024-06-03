#ifndef __SETUPTIMERTRIGGERPOPUP_H__
#define __SETUPTIMERTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupTimerTriggerPopup: public SetupTriggerPopup {
public:
    static SetupTimerTriggerPopup* create(TimerTriggerGameObject* p0, cocos2d::CCArray* p1);
    bool init(TimerTriggerGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPTIMERTRIGGERPOPUP_H__ */