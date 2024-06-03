#ifndef __UISAVELOADLAYER_H__
#define __UISAVELOADLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class UISaveLoadLayer: public SetupTriggerPopup {
public:
    static UISaveLoadLayer* create(UIOptionsLayer* p0);
    bool init(UIOptionsLayer* p0);
    void onLoad(cocos2d::CCObject* sender);
    void onSave(cocos2d::CCObject* sender);
};

#endif /* __UISAVELOADLAYER_H__ */