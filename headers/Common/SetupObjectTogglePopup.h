#ifndef __SETUPOBJECTTOGGLEPOPUP_H__
#define __SETUPOBJECTTOGGLEPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupObjectTogglePopup: public SetupTriggerPopup {
public:
    static SetupObjectTogglePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void valueDidChange(int p0, float p1);
};

#endif /* __SETUPOBJECTTOGGLEPOPUP_H__ */