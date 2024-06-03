#ifndef __SETUPADVFOLLOWPOPUP_H__
#define __SETUPADVFOLLOWPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;
class SelectPremadeDelegate;

class SetupAdvFollowPopup: public SetupTriggerPopup, public SelectPremadeDelegate {
public:
    static SetupAdvFollowPopup* create(AdvancedFollowTriggerObject* p0, cocos2d::CCArray* p1);
    bool init(AdvancedFollowTriggerObject* p0, cocos2d::CCArray* p1);
    void onMode(cocos2d::CCObject* sender);
    void onPremade(cocos2d::CCObject* sender);
    void updateMode(int p0);
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void updateDefaultTriggerValues();
    virtual void valueDidChange(int p0, float p1);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
    virtual void selectPremadeClosed(SelectPremadeLayer* p0, int p1);
};

#endif /* __SETUPADVFOLLOWPOPUP_H__ */