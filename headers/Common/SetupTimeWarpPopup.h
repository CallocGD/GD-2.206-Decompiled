#ifndef __SETUPTIMEWARPPOPUP_H__
#define __SETUPTIMEWARPPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupTimeWarpPopup: public SetupTriggerPopup {
public:
    static SetupTimeWarpPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn updateTimeWarp();
    TodoReturn updateTimeWarpLabel();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
};

#endif /* __SETUPTIMEWARPPOPUP_H__ */