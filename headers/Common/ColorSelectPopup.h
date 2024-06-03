#ifndef __COLORSELECTPOPUP_H__
#define __COLORSELECTPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;
class GJSpecialColorSelectDelegate;

class ColorSelectPopup: public SetupTriggerPopup, public cocos2d::extension::ColorPickerDelegate, public GJSpecialColorSelectDelegate {
public:
    static ColorSelectPopup* create(cocos2d::ccColor3B p0);
    static ColorSelectPopup* create(ColorAction* p0);
    static ColorSelectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, ColorAction* p2);
    static ColorSelectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    void closeColorSelect(cocos2d::CCObject* p0);
    TodoReturn colorToHex(cocos2d::ccColor3B p0);
    TodoReturn getColorValue();
    TodoReturn hexToColor(std::string p0);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, ColorAction* p2);
    void onCopy(cocos2d::CCObject* sender);
    void onCopyOpacity(cocos2d::CCObject* sender);
    void onDefault(cocos2d::CCObject* sender);
    void onHSVLegacyMode(cocos2d::CCObject* sender);
    void onPaste(cocos2d::CCObject* sender);
    void onPlayerColor1(cocos2d::CCObject* sender);
    void onPlayerColor2(cocos2d::CCObject* sender);
    void onSelectSpecialColor(cocos2d::CCObject* sender);
    void onTintGround(cocos2d::CCObject* sender);
    void onToggleHSVMode(cocos2d::CCObject* sender);
    void onToggleTintMode(cocos2d::CCObject* sender);
    void onUpdateCopyColor(cocos2d::CCObject* sender);
    void onUpdateCustomColor(cocos2d::CCObject* sender);
    TodoReturn selectColor(cocos2d::ccColor3B p0);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn updateColorLabels();
    TodoReturn updateColorValue();
    TodoReturn updateCopyColor();
    TodoReturn updateCopyColorTextInputLabel();
    TodoReturn updateCustomColorIdx();
    TodoReturn updateDuration();
    TodoReturn updateDurLabel();
    TodoReturn updateHSVMode();
    TodoReturn updateHSVValue();
    void updateOpacity();
    void updateOpacityLabel();
    TodoReturn updateTextInputLabel();
    virtual void show();
    virtual TodoReturn determineStartValues();
    virtual void textChanged(CCTextInputNode* p0);
    virtual void colorValueChanged(cocos2d::ccColor3B p0);
    virtual void colorSelectClosed(GJSpecialColorSelect* p0, int p1);
    /* PAD */

    ColorAction* m_colorAction;
};

#endif /* __COLORSELECTPOPUP_H__ */