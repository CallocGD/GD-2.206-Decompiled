#ifndef __SETUPANIMATIONPOPUP_H__
#define __SETUPANIMATIONPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupAnimationPopup: public SetupTriggerPopup {
public:
    static SetupAnimationPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onAnimationIDArrow(cocos2d::CCObject* sender);
    void onTargetIDArrow(cocos2d::CCObject* sender);
    TodoReturn updateAnimationID();
    TodoReturn updateAnimationTextInputLabel();
    TodoReturn updateTargetID();
    TodoReturn updateTextInputLabel();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __SETUPANIMATIONPOPUP_H__ */