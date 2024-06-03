#ifndef __CREATEPARTICLEPOPUP_H__
#define __CREATEPARTICLEPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;
class ColorSelectDelegate;
class SliderDelegate;

class CreateParticlePopup: public FLAlertLayer, public TextInputDelegate, public ColorSelectDelegate, public SliderDelegate {
public:
    static CreateParticlePopup* create(std::string p0);
    static CreateParticlePopup* create(ParticleGameObject* p0, cocos2d::CCArray* p1, std::string p2);
    static CreateParticlePopup* create(ParticleGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn centerAlignParticle(cocos2d::CCObject* p0);
    TodoReturn createParticleSlider(gjParticleValue p0, int p1, bool p2, cocos2d::CCPoint p3, cocos2d::CCArray* p4);
    TodoReturn getPage(int p0);
    TodoReturn getPageButton(int p0);
    TodoReturn getPageContainer(int p0);
    TodoReturn getPageInputNodes(int p0);
    TodoReturn getPageMenu(int p0);
    TodoReturn getPageSliders(int p0);
    bool init(ParticleGameObject* p0, cocos2d::CCArray* p1, std::string p2);
    TodoReturn maxSliderValueForType(gjParticleValue p0);
    TodoReturn minSliderValueForType(gjParticleValue p0);
    void onAnimateActiveOnly(cocos2d::CCObject* sender);
    void onAnimateOnTrigger(cocos2d::CCObject* sender);
    void onCalcEmission(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onCopySettings(cocos2d::CCObject* sender);
    void onDuplicateColor(cocos2d::CCObject* sender);
    void onDurationForever(cocos2d::CCObject* sender);
    void onDynamicColor(cocos2d::CCObject* sender);
    void onDynamicRotation(cocos2d::CCObject* sender);
    void onEmitterMode(cocos2d::CCObject* sender);
    void onEndRGBVarSync(cocos2d::CCObject* sender);
    void onMaxEmission(cocos2d::CCObject* sender);
    void onMode(cocos2d::CCObject* sender);
    void onOrderSensitive(cocos2d::CCObject* sender);
    void onPage(cocos2d::CCObject* sender);
    void onPasteSettings(cocos2d::CCObject* sender);
    void onPosType(cocos2d::CCObject* sender);
    void onQuickStart(cocos2d::CCObject* sender);
    void onSelectColor(cocos2d::CCObject* sender);
    void onSelectParticleTexture(cocos2d::CCObject* sender);
    void onStartRGBVarSync(cocos2d::CCObject* sender);
    void onToggleBlending(cocos2d::CCObject* sender);
    void onToggleStartRadiusEqualToEnd(cocos2d::CCObject* sender);
    void onToggleStartRotationIsDir(cocos2d::CCObject* sender);
    void onToggleStartSizeEqualToEnd(cocos2d::CCObject* sender);
    void onToggleStartSpinEqualToEnd(cocos2d::CCObject* sender);
    void onUniformColor(cocos2d::CCObject* sender);
    TodoReturn particleValueIsInt(gjParticleValue p0);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn titleForParticleValue(gjParticleValue p0);
    TodoReturn toggleGravityMode(bool p0);
    TodoReturn updateColorSprite(int p0);
    TodoReturn updateInputNodeStringForType(gjParticleValue p0);
    TodoReturn updateParticleValueForType(float p0, gjParticleValue p1, cocos2d::CCParticleSystemQuad* p2);
    TodoReturn updateSliderForType(gjParticleValue p0);
    TodoReturn valueForParticleValue(gjParticleValue p0);
    void willClose();
    virtual void update(float p0);
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void keyBackClicked();
    virtual void sliderBegan(Slider* p0);
    virtual TodoReturn sliderEnded(Slider* p0);
    virtual void colorSelectClosed(cocos2d::CCNode* p0);
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
    virtual void textInputReturn(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __CREATEPARTICLEPOPUP_H__ */