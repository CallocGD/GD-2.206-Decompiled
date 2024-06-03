#ifndef __SETUPSPAWNPOPUP_H__
#define __SETUPSPAWNPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupSpawnPopup: public SetupTriggerPopup {
public:
    static SetupSpawnPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onAddRemap(cocos2d::CCObject* sender);
    void onDeleteRemap(cocos2d::CCObject* sender);
    void onSelectRemap(cocos2d::CCObject* sender);
    TodoReturn queueUpdateButtons();
    TodoReturn updateRemapButtons(float p0);
    virtual void onClose(cocos2d::CCObject* sender);
};

#endif /* __SETUPSPAWNPOPUP_H__ */