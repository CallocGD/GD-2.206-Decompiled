#ifndef __SETUPOBJECTCONTROLPOPUP_H__
#define __SETUPOBJECTCONTROLPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupObjectControlPopup: public SetupTriggerPopup {
public:
    static SetupObjectControlPopup* create(ObjectControlGameObject* p0, cocos2d::CCArray* p1);
    bool init(ObjectControlGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPOBJECTCONTROLPOPUP_H__ */