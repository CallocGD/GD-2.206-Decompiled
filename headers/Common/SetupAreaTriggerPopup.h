#ifndef __SETUPAREATRIGGERPOPUP_H__
#define __SETUPAREATRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupAreaMoveTriggerPopup;

class SetupAreaTriggerPopup: public SetupAreaMoveTriggerPopup {
public:
    static SetupAreaTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPAREATRIGGERPOPUP_H__ */