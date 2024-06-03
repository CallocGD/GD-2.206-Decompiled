#ifndef __EDITGAMEOBJECTPOPUP_H__
#define __EDITGAMEOBJECTPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class EditGameObjectPopup: public SetupTriggerPopup {
public:
    static EditGameObjectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);
};

#endif /* __EDITGAMEOBJECTPOPUP_H__ */