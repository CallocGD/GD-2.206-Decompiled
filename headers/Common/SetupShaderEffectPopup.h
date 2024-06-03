#ifndef __SETUPSHADEREFFECTPOPUP_H__
#define __SETUPSHADEREFFECTPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupShaderEffectPopup: public SetupTriggerPopup {
public:
    static SetupShaderEffectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, int p2);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, int p2);
    void onResetColors(cocos2d::CCObject* sender);
    void onZLayer(cocos2d::CCObject* sender);
    TodoReturn setupBulge();
    TodoReturn setupChromatic();
    TodoReturn setupChromaticGlitch();
    TodoReturn setupColorChange();
    TodoReturn setupGlitch();
    TodoReturn setupGrayscale();
    TodoReturn setupHueShift();
    TodoReturn setupInvertColor();
    TodoReturn setupLensCircle();
    TodoReturn setupMotionBlur();
    TodoReturn setupPinch();
    TodoReturn setupPixelate();
    TodoReturn setupRadialBlur();
    TodoReturn setupSepia();
    TodoReturn setupShaderTrigger();
    TodoReturn setupShockLine();
    TodoReturn setupShockWave();
    TodoReturn setupSplitScreen();
    TodoReturn updateZLayerButtons();
    TodoReturn zLayerToString(int p0);
    virtual TodoReturn toggleGroup(int p0, bool p1);
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void updateDefaultTriggerValues();
    virtual void valueDidChange(int p0, float p1);
};

#endif /* __SETUPSHADEREFFECTPOPUP_H__ */