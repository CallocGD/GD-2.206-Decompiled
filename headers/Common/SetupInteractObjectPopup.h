#ifndef __SETUPINTERACTOBJECTPOPUP_H__
#define __SETUPINTERACTOBJECTPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupInteractObjectPopup: public SetupTriggerPopup {
public:
    static SetupInteractObjectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn updateItems();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void onPlusButton(cocos2d::CCObject* sender);
    virtual void valueDidChange(int p0, float p1);
};

#endif /* __SETUPINTERACTOBJECTPOPUP_H__ */