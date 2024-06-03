#ifndef __SETUPPULSEPOPUP_H__
#define __SETUPPULSEPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;
class GJSpecialColorSelectDelegate;

class SetupPulsePopup: public SetupTriggerPopup, public cocos2d::extension::ColorPickerDelegate, public GJSpecialColorSelectDelegate {
public:
    static SetupPulsePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn getColorValue();
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onCopy(cocos2d::CCObject* sender);
    void onExclusive(cocos2d::CCObject* sender);
    void onGroupMainOnly(cocos2d::CCObject* sender);
    void onGroupSecondaryOnly(cocos2d::CCObject* sender);
    void onHSVLegacyMode(cocos2d::CCObject* sender);
    void onPaste(cocos2d::CCObject* sender);
    void onSelectPulseMode(cocos2d::CCObject* sender);
    void onSelectSpecialColor(cocos2d::CCObject* sender);
    void onSelectSpecialTargetID(cocos2d::CCObject* sender);
    void onSelectTargetMode(cocos2d::CCObject* sender);
    void onUpdateCopyColor(cocos2d::CCObject* sender);
    void onUpdateCustomColor(cocos2d::CCObject* sender);
    TodoReturn selectColor(cocos2d::ccColor3B p0);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn updateColorLabels();
    TodoReturn updateColorValue();
    TodoReturn updateCopyColor();
    TodoReturn updateCopyColorTextInputLabel();
    TodoReturn updateFadeInLabel(bool p0);
    TodoReturn updateFadeInTime();
    TodoReturn updateFadeOutLabel(bool p0);
    TodoReturn updateFadeOutTime();
    TodoReturn updateGroupMainOnly();
    TodoReturn updateGroupSecondaryOnly();
    TodoReturn updateHoldLabel(bool p0);
    TodoReturn updateHoldTime();
    TodoReturn updateHSVValue();
    TodoReturn updatePulseMode();
    TodoReturn updatePulseTargetType();
    TodoReturn updateTargetID();
    TodoReturn updateTextInputLabel();
    virtual void show();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textChanged(CCTextInputNode* p0);
    virtual void colorValueChanged(cocos2d::ccColor3B p0);
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void colorSelectClosed(GJSpecialColorSelect* p0, int p1);
};

#endif /* __SETUPPULSEPOPUP_H__ */