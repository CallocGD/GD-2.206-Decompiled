#ifndef __SETUPAREAFADETRIGGERPOPUP_H__
#define __SETUPAREAFADETRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupAreaMoveTriggerPopup;

class SetupAreaFadeTriggerPopup: public SetupAreaMoveTriggerPopup {
public:
    static SetupAreaFadeTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPAREAFADETRIGGERPOPUP_H__ */