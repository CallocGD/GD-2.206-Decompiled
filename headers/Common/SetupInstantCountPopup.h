#ifndef __SETUPINSTANTCOUNTPOPUP_H__
#define __SETUPINSTANTCOUNTPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupInstantCountPopup: public SetupTriggerPopup {
public:
    static SetupInstantCountPopup* create(CountTriggerGameObject* p0, cocos2d::CCArray* p1);
    bool init(CountTriggerGameObject* p0, cocos2d::CCArray* p1);
    void onCountType(cocos2d::CCObject* sender);
    void onEnableGroup(cocos2d::CCObject* sender);
    void onTargetCountArrow(cocos2d::CCObject* sender);
    void onTargetID2Arrow(cocos2d::CCObject* sender);
    void onTargetIDArrow(cocos2d::CCObject* sender);
    TodoReturn updateCountTextInputLabel();
    TodoReturn updateItemID();
    TodoReturn updateItemIDInputLabel();
    TodoReturn updateTargetCount();
    TodoReturn updateTargetID();
    TodoReturn updateTargetIDInputLabel();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __SETUPINSTANTCOUNTPOPUP_H__ */