#ifndef __SELECTEVENTLAYER_H__
#define __SELECTEVENTLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SelectEventLayer: public SetupTriggerPopup {
public:
    static SelectEventLayer* create(SetupEventLinkPopup* p0, std::set<int>& p1);
    TodoReturn addToggle(int p0, std::string p1);
    bool init(SetupEventLinkPopup* p0, std::set<int>& p1);
    TodoReturn nextPosition();
    void onInfo(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __SELECTEVENTLAYER_H__ */