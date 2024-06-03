#ifndef __SETUPROTATEGAMEPLAYPOPUP_H__
#define __SETUPROTATEGAMEPLAYPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupRotateGameplayPopup: public SetupTriggerPopup {
public:
    static SetupRotateGameplayPopup* create(RotateGameplayGameObject* p0, cocos2d::CCArray* p1);
    bool init(RotateGameplayGameObject* p0, cocos2d::CCArray* p1);
    virtual void onPlusButton(cocos2d::CCObject* sender);
    virtual void valueDidChange(int p0, float p1);
};

#endif /* __SETUPROTATEGAMEPLAYPOPUP_H__ */