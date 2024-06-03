#ifndef __EDITTRIGGERSPOPUP_H__
#define __EDITTRIGGERSPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class EditTriggersPopup: public SetupTriggerPopup {
public:
    static EditTriggersPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
};

#endif /* __EDITTRIGGERSPOPUP_H__ */