#ifndef __SETUPSHAKEPOPUP_H__
#define __SETUPSHAKEPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupShakePopup: public SetupTriggerPopup {
public:
    static SetupShakePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn updateDuration();
    TodoReturn updateDurLabel(bool p0);
    TodoReturn updateInterval();
    TodoReturn updateIntervalLabel(bool p0);
    TodoReturn updateShake();
    TodoReturn updateShakeLabel(bool p0);
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __SETUPSHAKEPOPUP_H__ */