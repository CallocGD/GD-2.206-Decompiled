#ifndef __SETITEMIDLAYER_H__
#define __SETITEMIDLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetItemIDLayer: public SetupTriggerPopup {
public:
    static SetItemIDLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn updateEditorLabel();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void valueDidChange(int p0, float p1);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __SETITEMIDLAYER_H__ */