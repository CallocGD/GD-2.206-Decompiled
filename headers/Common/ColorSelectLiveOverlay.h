#ifndef __COLORSELECTLIVEOVERLAY_H__
#define __COLORSELECTLIVEOVERLAY_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class ColorSelectLiveOverlay: public FLAlertLayer {
public:
    static ColorSelectLiveOverlay* create(ColorAction* p0, ColorAction* p1, EffectGameObject* p2);
    void closeColorSelect(cocos2d::CCObject* p0);
    void colorValueChanged(cocos2d::ccColor3B p0);
    TodoReturn createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
    TodoReturn createWithActions(ColorAction* p0, ColorAction* p1);
    TodoReturn createWithObject(EffectGameObject* p0);
    TodoReturn determineStartValues();
    TodoReturn getColorValue();
    bool init(ColorAction* p0, ColorAction* p1, EffectGameObject* p2);
    void onSelectTab(cocos2d::CCObject* sender);
    TodoReturn selectColor(cocos2d::ccColor3B p0);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn textChanged(CCTextInputNode* p0);
    void textInputClosed(CCTextInputNode* p0);
    TodoReturn toggleControls(bool p0);
    TodoReturn updateColorLabel();
    TodoReturn updateColorValue();
    void updateOpacity();
    virtual void keyBackClicked();
    virtual void show();
    EffectGameObject* m_effectGameObject;
    cocos2d::CCArray* m_barSprites;
    cocos2d::CCArray* m_12buttons;
    ColorAction* m_baseColorAction;
    ColorAction* m_detailColorAction;
};

#endif /* __COLORSELECTLIVEOVERLAY_H__ */