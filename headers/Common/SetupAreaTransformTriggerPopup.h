#ifndef __SETUPAREATRANSFORMTRIGGERPOPUP_H__
#define __SETUPAREATRANSFORMTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupAreaMoveTriggerPopup;

class SetupAreaTransformTriggerPopup: public SetupAreaMoveTriggerPopup {
public:
    static SetupAreaTransformTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPAREATRANSFORMTRIGGERPOPUP_H__ */