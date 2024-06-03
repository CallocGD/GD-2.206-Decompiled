#ifndef __SETUPKEYFRAMEANIMPOPUP_H__
#define __SETUPKEYFRAMEANIMPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupKeyframeAnimPopup: public SetupTriggerPopup {
public:
    static SetupKeyframeAnimPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPKEYFRAMEANIMPOPUP_H__ */