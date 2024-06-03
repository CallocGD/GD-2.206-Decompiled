#ifndef __SETUPPLAYERCONTROLPOPUP_H__
#define __SETUPPLAYERCONTROLPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupPlayerControlPopup: public SetupTriggerPopup {
public:
    static SetupPlayerControlPopup* create(PlayerControlGameObject* p0, cocos2d::CCArray* p1);
    bool init(PlayerControlGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPPLAYERCONTROLPOPUP_H__ */