#ifndef __SETUPENDPOPUP_H__
#define __SETUPENDPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupEndPopup: public SetupTriggerPopup {
public:
    static SetupEndPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onLockY(cocos2d::CCObject* sender);
    void onMultiActivate(cocos2d::CCObject* sender);
    void onReversed(cocos2d::CCObject* sender);
    void onTargetIDArrow(cocos2d::CCObject* sender);
    TodoReturn updateTargetID();
    TodoReturn updateTextInputLabel();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __SETUPENDPOPUP_H__ */