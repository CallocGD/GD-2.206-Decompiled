#ifndef __SETUPAREAROTATETRIGGERPOPUP_H__
#define __SETUPAREAROTATETRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupAreaMoveTriggerPopup;

class SetupAreaRotateTriggerPopup: public SetupAreaMoveTriggerPopup {
public:
    static SetupAreaRotateTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPAREAROTATETRIGGERPOPUP_H__ */