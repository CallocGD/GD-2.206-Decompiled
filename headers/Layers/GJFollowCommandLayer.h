#ifndef __GJFOLLOWCOMMANDLAYER_H__
#define __GJFOLLOWCOMMANDLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class GJFollowCommandLayer: public SetupTriggerPopup {
public:
    static GJFollowCommandLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onUpdateGroupID(cocos2d::CCObject* sender);
    void onUpdateGroupID2(cocos2d::CCObject* sender);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn sliderXModChanged(cocos2d::CCObject* p0);
    TodoReturn sliderYModChanged(cocos2d::CCObject* p0);
    TodoReturn updateDuration();
    TodoReturn updateDurLabel(bool p0);
    TodoReturn updateTargetGroupID();
    TodoReturn updateTargetGroupID2();
    TodoReturn updateTextInputLabel();
    TodoReturn updateTextInputLabel2();
    TodoReturn updateXMod();
    TodoReturn updateXModLabel();
    TodoReturn updateYMod();
    TodoReturn updateYModLabel();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __GJFOLLOWCOMMANDLAYER_H__ */