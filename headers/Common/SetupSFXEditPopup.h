#ifndef __SETUPSFXEDITPOPUP_H__
#define __SETUPSFXEDITPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupAudioTriggerPopup;

class SetupSFXEditPopup: public SetupAudioTriggerPopup {
public:
    static SetupSFXEditPopup* create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1, bool p2);
    bool init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1, bool p2);
};

#endif /* __SETUPSFXEDITPOPUP_H__ */