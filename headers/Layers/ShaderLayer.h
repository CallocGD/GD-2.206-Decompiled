#ifndef __SHADERLAYER_H__
#define __SHADERLAYER_H__


#include "../includes.h"

class ShaderLayer: public cocos2d::CCLayer {
public:
    static ShaderLayer* create();
    TodoReturn objectPosToShaderPos(cocos2d::CCPoint p0);
    void performCalculations();
    TodoReturn preBulgeShader();
    TodoReturn preChromaticGlitchShader();
    TodoReturn preChromaticShader();
    TodoReturn preColorChangeShader();
    TodoReturn preCommonShader();
    TodoReturn preGlitchShader();
    TodoReturn preGrayscaleShader();
    TodoReturn preHueShiftShader();
    TodoReturn preInvertColorShader();
    TodoReturn preLensCircleShader();
    TodoReturn preMotionBlurShader();
    TodoReturn prepareTargetContainer();
    TodoReturn prePinchShader();
    TodoReturn prePixelateShader();
    TodoReturn preRadialBlurShader();
    TodoReturn preSepiaShader();
    TodoReturn preShockLineShader();
    TodoReturn preShockWaveShader();
    TodoReturn preSplitScreenShader();
    bool resetAllShaders();
    TodoReturn resetTargetContainer();
    TodoReturn setupBulgeShader();
    TodoReturn setupChromaticGlitchUniforms();
    TodoReturn setupChromaticUniforms();
    TodoReturn setupColorChangeShader();
    TodoReturn setupCommonUniforms();
    TodoReturn setupGlitchUniforms();
    TodoReturn setupGrayscaleShader();
    TodoReturn setupHueShiftShader();
    TodoReturn setupInvertColorShader();
    TodoReturn setupLensCircleShader();
    TodoReturn setupMotionBlurShader();
    TodoReturn setupPinchShader();
    TodoReturn setupRadialBlurShader();
    TodoReturn setupSepiaShader();
    TodoReturn setupShader(bool p0);
    TodoReturn setupShockLineUniforms();
    TodoReturn setupShockWaveUniforms();
    TodoReturn setupSplitScreenShader();
    TodoReturn toggleAntiAlias(bool p0);
    bool triggerBulge(float p0, float p1, float p2, float p3, float p4, int p5, int p6, float p7, bool p8);
    TodoReturn triggerChromaticGlitch(bool p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, int p8, float p9, bool p10, bool p11);
    TodoReturn triggerChromaticX(float p0, float p1, int p2, float p3, bool p4);
    TodoReturn triggerChromaticY(float p0, float p1, int p2, float p3, bool p4);
    bool triggerColorChange(float p0, float p1, float p2, float p3, float p4, float p5, float p6, int p7, float p8);
    bool triggerGlitch(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7);
    bool triggerGrayscale(float p0, float p1, bool p2, int p3, int p4, float p5);
    bool triggerHueShift(float p0, float p1, int p2, float p3);
    bool triggerInvertColor(float p0, float p1, float p2, float p3, float p4, bool p5, bool p6, bool p7, int p8, float p9);
    bool triggerLensCircle(float p0, float p1, float p2, float p3, int p4, int p5, float p6, float p7, int p8, float p9, bool p10);
    bool triggerMotionBlurX(float p0, float p1, float p2, float p3, int p4, float p5, bool p6, int p7, int p8, float p9, bool p10, bool p11);
    bool triggerMotionBlurY(float p0, float p1, float p2, float p3, int p4, float p5, bool p6, int p7, int p8, float p9, bool p10, bool p11);
    bool triggerPinchX(float p0, float p1, float p2, float p3, float p4, bool p5, int p6, int p7, float p8, bool p9);
    bool triggerPinchY(float p0, float p1, float p2, float p3, float p4, bool p5, int p6, int p7, float p8, bool p9);
    bool triggerPixelateX(float p0, float p1, bool p2, bool p3, int p4, float p5, bool p6);
    bool triggerPixelateY(float p0, float p1, bool p2, bool p3, int p4, float p5, bool p6);
    bool triggerRadialBlur(float p0, float p1, float p2, float p3, int p4, float p5, float p6, bool p7, int p8, int p9, float p10, bool p11);
    bool triggerSepia(float p0, float p1, int p2, float p3);
    bool triggerShockLine(float p0, float p1, bool p2, bool p3, bool p4, bool p5, float p6, float p7, float p8, float p9, float p10, float p11, int p12, bool p13, bool p14, bool p15, float p16, bool p17, float p18, int p19, float p20);
    bool triggerShockWave(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, float p8, float p9, float p10, int p11, bool p12, bool p13, bool p14, float p15, float p16, bool p17, float p18, int p19, float p20);
    bool triggerSplitScreenCols(float p0, float p1, int p2, float p3);
    bool triggerSplitScreenRows(float p0, float p1, int p2, float p3);
    TodoReturn tweenValue(float p0, float p1, int p2, float p3, int p4, float p5);
    TodoReturn tweenValueAuto(float p0, int p1, float p2, int p3, float p4);
    TodoReturn updateEffectOffsets(cocos2d::CCPoint p0);
    TodoReturn updateMotionBlurSpeedX(float p0, float p1);
    TodoReturn updateMotionBlurSpeedY(float p0, float p1);
    TodoReturn updateShockLineCenter(cocos2d::CCPoint p0);
    TodoReturn updateShockWaveCenter(cocos2d::CCPoint p0);
    bool updateZLayer(int p0, int p1, bool p2);
    virtual void update(float p0);
    virtual bool init();
    virtual void visit();
};

#endif /* __SHADERLAYER_H__ */