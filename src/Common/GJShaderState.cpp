
#include "includes.h"


GJShaderState* GJShaderState::operator=(GJShaderState const& state){
    m_someIntToDoubleMap = state.m_someIntToDoubleMap;
    
    m_time = state.m_time;
    m_prevTime = state.m_prevTime;
    m_startTime = state.m_startTime;
    
    m_textureScaleX = state.m_textureScaleX;
    m_textureScaleY = state.m_textureScaleY;
    
    m_blurRefColor = state.m_blurRefColor;
    m_blurIntensity = state.m_blurIntensity;
    m_blurUnk60 = state.m_blurUnk60;
    m_blurOnlyEmpty = state.m_blurOnlyEmpty;
    
    m_shockWaveUnk68 = state.m_shockWaveUnk68;
    m_shockWaveUnk6c = state.m_shockWaveUnk6c;
    m_shockWaveUnk70 = state.m_shockWaveUnk70;
    m_shockWaveUnk74 = state.m_shockWaveUnk74;
    m_shockWaveUnk78 = state.m_shockWaveUnk78;
    m_shockWaveUnk7c = state.m_shockWaveUnk7c;
    m_shockWaveUnk80 = state.m_shockWaveUnk80;
    m_shockWaveUnk84 = state.m_shockWaveUnk84;
    m_shockWaveUnk88 = state.m_shockWaveUnk88;
    m_shockWaveInvert = state.m_shockWaveInvert;
    m_shockWaveUnk90 = state.m_shockWaveUnk90;
    m_shockWaveUnk94 = state.m_shockWaveUnk94;
    m_shockWaveUnk98 = state.m_shockWaveUnk98;
    m_shockWaveUnk9c = state.m_shockWaveUnk9c;
    m_shockWaveCenterMoving = state.m_shockWaveCenterMoving;
    m_shockWaveUnk9e = state.m_shockWaveUnk9e;
    m_shockWaveUnka0 = state.m_shockWaveUnka0;
    m_shockWaveUnka4 = state.m_shockWaveUnka4;
    m_shockWaveCenterDirty = state.m_shockWaveCenterDirty;
    m_shockWaveCenter = state.m_shockWaveCenter;
    
    m_shockLineUnkb8 = state.m_shockLineUnkb8;
    m_shockLineUnkc0 = state.m_shockLineUnkc0;
    m_shockLineUnkc4 = state.m_shockLineUnkc4;
    m_shockLineUnkc8 = state.m_shockLineUnkc8;
    m_shockLineAxis = state.m_shockLineAxis;
    m_shockLineDirection = state.m_shockLineDirection;
    m_shockLineDual = state.m_shockLineDual;
    m_shockLineUnkcf = state.m_shockLineUnkcf;
    m_shockLineUnkd0 = state.m_shockLineUnkd0;
    m_shockLineUnkd4 = state.m_shockLineUnkd4;
    m_shockLineUnkd8 = state.m_shockLineUnkd8;
    m_shockLineUnkdc = state.m_shockLineUnkdc;
    m_shockLineUnke0 = state.m_shockLineUnke0;
    m_shockLineUnke4 = state.m_shockLineUnke4;
    m_shockLineUnke8 = state.m_shockLineUnke8;
    m_shockLineUnkec = state.m_shockLineUnkec;
    m_shockLineCenterMoving = state.m_shockLineCenterMoving;
    m_shockLineUnkee = state.m_shockLineUnkee;
    m_shockLineUnkf0 = state.m_shockLineUnkf0;
    m_shockLineUnkf4 = state.m_shockLineUnkf4;   
    m_shockLineCenterDirty = state.m_shockLineCenterDirty;
    m_shockLineCenter = state.m_shockLineCenter;
    
    m_glitchUnk108 = state.m_glitchUnk108;
    m_glitchUnk10c = state.m_glitchUnk10c;
    m_glitchUnk110 = state.m_glitchUnk110;
    m_glitchUnk114 = state.m_glitchUnk114;
    m_glitchUnk118 = state.m_glitchUnk118;
    m_glitchUnk11c = state.m_glitchUnk11c;
    m_glitchUnk120 = state.m_glitchUnk120;

    m_chromaticUnk124 = state.m_chromaticUnk124;
    m_chromaticUnk128 = state.m_chromaticUnk128;
    m_chromaticUnk12c = state.m_chromaticUnk12c;

    m_cGUnk130 = state.m_cGUnk130;
    m_cGUnk134 = state.m_cGUnk134;
    m_cGUnk138 = state.m_cGUnk138;
    m_cGUnk13c = state.m_cGUnk13c;
    m_cGUnk140 = state.m_cGUnk140;
    m_cGUnk144 = state.m_cGUnk144;
    m_cGUnk148 = state.m_cGUnk148;
    m_cGUnk14c = state.m_cGUnk14c;
    m_cGUnk150 = state.m_cGUnk150;
    m_cGUnk151 = state.m_cGUnk151;
    m_cGUnk152 = state.m_cGUnk152;
    m_cGUnk153 = state.m_cGUnk153;

    m_pixelateTargetX = state.m_pixelateTargetX;
    m_pixelateTargetY = state.m_pixelateTargetY;
    m_pixelateSnapGrid = state.m_pixelateSnapGrid;
    m_pixelatePixelating = state.m_pixelatePixelating;
    m_pixelateRelative = state.m_pixelateRelative;
    m_pixelateHardEdges = state.m_pixelateHardEdges;

    m_lensCircleUnk160 = state.m_lensCircleUnk160;
    m_lensCircleUnk164 = state.m_lensCircleUnk164;
    m_lensCircleStrength = state.m_lensCircleStrength;
    m_lensCircleUnk16c = state.m_lensCircleUnk16c;
    m_lensCircleUnk170 = state.m_lensCircleUnk170;
    m_lensCircleUnk174 = state.m_lensCircleUnk174;
    m_lensCircleTintR = state.m_lensCircleTintR;
    m_lensCircleTintG = state.m_lensCircleTintG;
    m_lensCircleAdditive =  state.m_lensCircleAdditive;
    m_lensCircleTintB = state.m_lensCircleTintB;
    m_lensCircleUnk17c = state.m_lensCircleUnk17c;
    m_lensCircleUnk184 = state.m_lensCircleUnk184;

    m_radialBlurUnk18c = state.m_radialBlurUnk18c;
    m_radialBlurUnk190 = state.m_radialBlurUnk190;
    m_radialBlurUnk194 = state.m_radialBlurUnk194;
    m_radialBlurUnk198 = state.m_radialBlurUnk198;
    m_radialBlurUnk19c = state.m_radialBlurUnk19c;
    m_radialBlurUnk1a4 = state.m_radialBlurUnk1a4;
    m_motionBlurUnk1ac = state.m_motionBlurUnk1ac;
    m_motionBlurUnk1b0 = state.m_motionBlurUnk1b0;
    m_motionBlurSpeedX = state.m_motionBlurSpeedX;
    m_motionBlurSpeedY = state.m_motionBlurSpeedY;
    m_motionBlurUnk1bc = state.m_motionBlurUnk1bc;
    m_motionBlurUnk1c0 = state.m_motionBlurUnk1c0;
    m_motionBlurUnk1c4 = state.m_motionBlurUnk1c4;
    m_motionBlurUnk1c8 = state.m_motionBlurUnk1c8;
    m_motionBlurDual = state.m_motionBlurDual;
    m_motionBlurUnk1cd = state.m_motionBlurUnk1cd;
    m_bulgeValue = state.m_bulgeValue;
    m_bulgeUnk1d4 = state.m_bulgeUnk1d4;
    m_bulgeUnk1d8 = state.m_bulgeUnk1d8;
    m_bulgeRadius = state.m_bulgeRadius;
    m_bulgeUnk1e0 = state.m_bulgeUnk1e0;
    m_bulgeUnk1e8 = state.m_bulgeUnk1e8;
    m_pinchUnk1f0 = state.m_pinchUnk1f0;
    m_pinchUnk1f4 = state.m_pinchUnk1f4;
    m_pinchUnk1f8 = state.m_pinchUnk1f8;
    m_pinchUnk1f9 = state.m_pinchUnk1f9;
    m_pinchUnk1fc = state.m_pinchUnk1fc;
    m_pinchUnk200 = state.m_pinchUnk200;
    m_pinchUnk204 = state.m_pinchUnk204;
    m_pinchUnk20c = state.m_pinchUnk20c;
    m_pinchUnk214 = state.m_pinchUnk214;
    m_pinchUnk218 = state.m_pinchUnk218;
    m_pinchUnk21c = state.m_pinchUnk21c;
    m_grayscaleValue = state.m_grayscaleValue;
    m_grayscaleUseLum = state.m_grayscaleUseLum;
    m_grayscaleUnk22c = state.m_grayscaleUnk22c;
    m_grayscaleTint = state.m_grayscaleTint;
    m_sepiaValue = state.m_sepiaValue;
    m_invertColorEditRGB = state.m_invertColorEditRGB;
    m_invertColorR = state.m_invertColorR;
    m_invertColorG = state.m_invertColorG;
    m_invertColorB = state.m_invertColorB;
    m_invertColorClampRGB = state.m_invertColorClampRGB;
    m_hueShiftDegrees = state.m_hueShiftDegrees;
    m_colorChangeCR = state.m_colorChangeCR;
    m_colorChangeCG = state.m_colorChangeCG;
    m_colorChangeCB = state.m_colorChangeCB;
    m_colorChangeBR = state.m_colorChangeBR;
    m_colorChangeBG = state.m_colorChangeBG;
    m_colorChangeBB = state.m_colorChangeBB;
    m_splitUnk268 = state.m_splitUnk268;
    m_splitUnk26c = state.m_splitUnk26c;
    m_splitUnk270 = state.m_splitUnk270;
    m_blurRefChannel = state.m_blurRefChannel;
    m_somethingZLayerUnk278 = state.m_somethingZLayerUnk278;
    m_zLayerDirty = state.m_zLayerDirty;
    m_somethingZLayerUnk27d = state.m_somethingZLayerUnk27d;
    m_usesShaders = state.m_usesShaders;

        return this;
}


void GJShaderState::reset(){
    m_someIntToValueTweenMap.clear();
    m_someIntToDoubleMap.clear();
    m_shockLineUnkb8 = 0;
    m_shockWaveUnk68 = 0.0;
    m_glitchUnk108 = 0.0;
    m_chromaticUnk124 = 0.0;
    m_chromaticUnk128 = 0.0;
    m_blurIntensity = 0.0;
    m_cGUnk150 = false;
    m_cGUnk138 = 0.0;
    m_cGUnk144 = 1.0;
    m_cGUnk140 = 0.0;
    m_cGUnk148 = 0.0;
    m_cGUnk14c = 0.0;
    m_cGUnk13c = 0.0;
    m_pixelateTargetX = 0.0;
    m_pixelateTargetY = 0.0;
    m_pixelateSnapGrid = false;
    m_textureScaleX = 1.0;
    m_textureScaleY = 1.0;
    m_lensCircleUnk160 = 1.0;
    m_lensCircleUnk164 = 0.0;
    m_lensCircleStrength = 0.0;
    m_lensCircleUnk16c = 0;
    m_lensCircleUnk170 = 0;
    m_radialBlurUnk18c = 0.0;
    m_motionBlurUnk1ac = 0.0;
    m_motionBlurUnk1b0 = 0.0;
    m_motionBlurUnk1c4 = 0;
    m_motionBlurUnk1c8 = 0;
    m_motionBlurSpeedX = 0.0;
    m_motionBlurSpeedY = 0.0;
    m_radialBlurUnk19c = cocos2d::CCPointZero;
    m_bulgeValue = 0.0;
    m_pinchUnk1f0 = 0.0;
    m_pinchUnk1f4 = 0.0;
    m_pinchUnk1fc = 0;
    m_pinchUnk200 = 0;
    m_pinchUnk1f8 = false;
    m_pinchUnk1f9 = false;
    m_pinchUnk20c = cocos2d::CCPointZero;
    m_grayscaleValue = 0.0;
    m_sepiaValue = 0.0;
    m_invertColorEditRGB = 0.0;
    m_hueShiftDegrees = 0.0;
    m_invertColorR = 1.0;
    m_invertColorG = 1.0;
    m_invertColorB = 1.0;
    m_colorChangeCR = 1.0;
    m_colorChangeCG = 1.0;
    m_colorChangeCB = 1.0;
    m_colorChangeBR = 0.0;
    m_colorChangeBG = 0.0;
    m_colorChangeBB = 0.0;
    m_invertColorClampRGB = false;
    m_splitUnk268 = 0.0;
    m_splitUnk26c = 0.0;
    m_somethingZLayerUnk27d = false;
    m_prevTime = -1.875;
    m_blurRefChannel = 0;
    m_somethingZLayerUnk278 = 0;
    m_zLayerDirty = false;
};


void GJShaderState::stopTweenAction(int action){
    m_someIntToValueTweenMap.erase(action);
};


void GJShaderState::timesyncShaderAction(int action){
    for (int i = 0; i < m_someIntToValueTweenMap.size(); i++){
        double dvalue = m_someIntToDoubleMap[action];
        auto tween = m_someIntToValueTweenMap[i];
        tween.step((float)(m_time - dvalue));
        updateTweenAction(tween.m_easingRate, action);
    }
};


void GJShaderState::timesyncShaderActions(){
    for (auto i : m_someIntToDoubleMap){
        timesyncShaderAction(i.first);
    }
};


void GJShaderState::tweenValue(
    float fromValue, 
    float toValue,
    int action, 
    float duration, 
    int easingType,
    float easingRate)
{

    stopTweenAction(action);
    if (toValue <= 0.0) {
      updateTweenAction(toValue, action);
    }
    else {
        /* In the Ghidra decomp I'm using, there's a hashnode being created who's offsets 
        are moved over by 4 (because one of them is the integer key) making this part very tricky to solve */
        
        // There's likely to be an inlined GJValueTween::GJValueTween() function 
        // somewhere in the code but it doesn't show up even on the android release.
        GJValueTween tween;
        tween.m_duration = duration;
        tween.m_easingType = easingType;
        tween.m_toValue = toValue;
        tween.m_finished = false;
        tween.m_easingRate = easingRate;
        tween.m_disabled = false;
        tween.m_fromValue = fromValue;
        tween.m_deltaTime = 0.0f;
        tween.m_currentValue = 0;
        // There's likely two more class members that are apart of GJTweenValue That we just don't know about
        // Blame Ghidra for not letting me edit _Hash_node, I'm leaving this here to show what 
        // may or may not be possibly missing...
        // *(undefined4 *)(p_Var2 + 0x28) = 0xffffffff;
        // *(undefined4 *)(p_Var2 + 0x2c) = 0xffffffff;
        m_someIntToValueTweenMap[action] = tween;
    }
}



void GJShaderState::updateTweenAction(float value, int actionID)
{
    switch(actionID) {
        case 1:
            m_chromaticUnk124 = value;
            return;
        case 2:
            m_chromaticUnk128 = value;
            return;
        case 3:
            m_cGUnk13c = value;
            return;
        case 4:
            m_cGUnk140 = value;
            return;
        case 5:
            m_cGUnk148 = value;
            return;
        case 6:
            m_cGUnk14c = value;
            return;
        case 7:
            m_cGUnk144 = value;
            return;
        case 8:
            m_cGUnk138 = value;
            return;
        case 9:
            m_pixelateTargetX = value;
            return;
        case 10:
            m_pixelateTargetY = value;
            return;
        case 0xb:
            m_lensCircleUnk160 = value;
            return;
        case 0xc:
            m_lensCircleUnk164 = value;
            return;
        case 0xd:
            m_lensCircleStrength = value;
            return;
        case 0xe:
            m_lensCircleUnk184.x = value;
            return;
        case 0xf:
            m_lensCircleUnk184.y = value;
            return;
        case 0x10:
            m_radialBlurUnk18c = value;
            return;
        case 0x11:
            m_radialBlurUnk1a4.x = value;
            return;
        case 0x12:
            m_radialBlurUnk1a4.y = value;
            return;
        case 0x13:
            m_motionBlurUnk1ac = value;
            return;
        case 0x14:
            m_motionBlurUnk1b0 = value;
            return;
        case 0x15:
            m_bulgeValue = value;
            return;
        case 0x16:
            m_bulgeUnk1e8.x = value;
            return;
        case 0x17:
            m_bulgeUnk1e8.y = value;
            return;
        case 0x18:
            m_bulgeRadius = value;
            return;
        case 0x19:
            m_pinchUnk1f0 = value;
            return;
        case 0x1a:
            m_pinchUnk1f4 = value;
            return;
        case 0x1b:
            m_pinchUnk20c.x = value;
            return;
        case 0x1c:
            m_pinchUnk20c.y = value;
            return;
        case 0x1d:
            m_pinchUnk218 = value;
            return;
        case 0x1e:
            m_pinchUnk21c.x = value;
            return;
        case 0x1f:
            m_pinchUnk21c.y = value;
            return;
        case 0x20:
            m_grayscaleValue = value;
            return;
        case 0x21:
            m_sepiaValue = value;
            return;
        case 0x22:
            m_invertColorEditRGB = value;
            return;
        case 0x23:
            m_invertColorR = value;
            return;
        case 0x24:
            m_invertColorG = value;
            return;
        case 0x25:
            m_invertColorB = value;
            return;
        case 0x26:
            m_hueShiftDegrees = value;
            return;
        case 0x27:
            m_colorChangeCR = value;
            return;
        case 0x28:
            m_colorChangeCG = value;
            return;
        case 0x29:
            m_colorChangeCB = value;
            return;
        case 0x2a:
            m_colorChangeBR = value;
            return;
        case 0x2b:
            m_colorChangeBG = value;
            return;
        case 0x2c:
            m_colorChangeBB = value;
            return;
        case 0x2d:
            m_splitUnk268 = value;
            return;
        case 0x2e:
            m_splitUnk26c = value;
            return;
        case 0x2f:
            m_blurIntensity = value;
            return;
        case 0x30:
            m_radialBlurUnk190 = value;
            return;
        case 0x31:
            m_glitchUnk108 = value;
            return;
        case 0x32:
            m_shockWaveUnk74 = value;
            return;
        case 0x33:
            m_shockWaveUnk78 = value;
            return;
        case 0x34:
            m_shockWaveUnk7c = value;
            return;
        case 0x35:
            m_shockWaveUnk80 = value;
            return;
        case 0x36:
            m_shockWaveUnk84 = value;
            return;
        case 0x37:
            m_shockWaveUnk88 = value;
            return;
        case 0x38:
            m_shockWaveUnk90 = value;
            return;
        case 0x39:
            m_shockWaveUnka4.x = value;
            return;
        case 0x3a:
            m_shockWaveUnka4.y = value;
            return;
        case 0x3b:
            m_shockWaveUnk94 = value;
            return;
        case 0x3c:
            m_shockWaveUnka0 = value;
            return;
        case 0x3d:
            m_shockWaveUnk70 = value;
            return;
        case 0x3e:
            m_shockLineUnkc8 = value;
            return;
        case 0x3f:
            m_shockLineUnke4 = value;
            return;
        case 0x40:
            m_shockLineUnkd4 = value;
            return;
        case 0x41:
            m_shockLineUnkd8 = value;
            return;
        case 0x42:
            m_shockLineUnkdc = value;
            return;
        case 0x43:
            m_shockLineUnke0 = value;
            return;
        case 0x44:
            m_shockLineUnkd0 = value;
            return;
        case 0x45:
            m_shockLineUnkf0 = value;
            return;
        case 0x46:
            m_shockLineUnkc4 = value;
            return;
        default: 
            return;
    }
}


void GJShaderState::updateTweenActions(float tweenValue){
    for (auto tweenPair: m_someIntToValueTweenMap){
        tweenPair.second.step(tweenValue);
        updateTweenAction(tweenPair.second.m_currentValue, tweenPair.first);
        m_someIntToValueTweenMap.erase(tweenPair.first);
    }
};
