#ifndef __GJPFOLLOWCOMMANDLAYER_H__
#define __GJPFOLLOWCOMMANDLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class GJPFollowCommandLayer: public SetupTriggerPopup {
public:
    static GJPFollowCommandLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onUpdateGroupID(cocos2d::CCObject* sender);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn sliderXModChanged(cocos2d::CCObject* p0);
    TodoReturn sliderYModChanged(cocos2d::CCObject* p0);
    TodoReturn updateDuration();
    TodoReturn updateDurLabel(bool p0);
    TodoReturn updateMaxSpeed();
    TodoReturn updateMaxSpeedLabel();
    TodoReturn updateOffsetLabel();
    TodoReturn updatePlayerOffset();
    TodoReturn updateTargetGroupID();
    TodoReturn updateTextInputLabel();
    TodoReturn updateXMod();
    TodoReturn updateXModLabel();
    TodoReturn updateYMod();
    TodoReturn updateYModLabel();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __GJPFOLLOWCOMMANDLAYER_H__ */