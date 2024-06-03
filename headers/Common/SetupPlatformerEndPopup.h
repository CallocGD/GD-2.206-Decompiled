#ifndef __SETUPPLATFORMERENDPOPUP_H__
#define __SETUPPLATFORMERENDPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupPlatformerEndPopup: public SetupTriggerPopup {
public:
    static SetupPlatformerEndPopup* create(EndTriggerGameObject* p0, cocos2d::CCArray* p1);
    bool init(EndTriggerGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPPLATFORMERENDPOPUP_H__ */