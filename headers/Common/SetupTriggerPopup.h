#ifndef __SETUPTRIGGERPOPUP_H__
#define __SETUPTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;
class ConfigureValuePopupDelegate;
class SliderDelegate;

class SetupTriggerPopup: public FLAlertLayer, public TextInputDelegate, public ConfigureValuePopupDelegate, public SliderDelegate {
public:
    static SetupTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, float p2, float p3, int p4);
    static SetupTriggerPopup* create(float p0, float p1);
    void addCloseButton(std::string p0);
    void addHelpButton(std::string p0, std::string p1, float p2);
    void addInfoLabel(std::string p0, float p1, cocos2d::CCPoint p2, int p3, int p4);
    TodoReturn addObjectsToGroup(cocos2d::CCArray* p0, int p1);
    TodoReturn addObjectsToPage(cocos2d::CCArray* p0, int p1);
    TodoReturn addObjectToGroup(cocos2d::CCObject* p0, int p1);
    TodoReturn addObjectToPage(cocos2d::CCObject* p0, int p1);
    void addTitle(std::string p0);
    void closeInputNodes();
    void createCustomButton(int p0, std::string p1, std::string p2, cocos2d::CCPoint p3, float p4, float p5, bool p6, int p7, int p8);
    void createCustomEasingControls(std::string p0, cocos2d::CCPoint p1, float p2, int p3, int p4, int p5, int p6);
    void createCustomToggleValueControl(int p0, bool p1, bool p2, std::string p3, cocos2d::CCPoint p4, bool p5, int p6, int p7);
    void createEasingControls(cocos2d::CCPoint p0, float p1, int p2, int p3);
    void createMultiTriggerItems(cocos2d::CCPoint p0, cocos2d::CCPoint p1, cocos2d::CCPoint p2);
    void createMultiTriggerItemsCorner();
    void createMultiTriggerItemsDefault();
    void createMultiTriggerItemsDefaultHorizontal();
    void createMultiTriggerItemsDefaultVertical();
    void createPageButtons(float p0, int p1);
    void createPlusButton(int p0, cocos2d::CCPoint p1, float p2, std::string p3, int p4, int p5);
    void createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCPoint p3);
    void createToggleValueControl(int p0, std::string p1, cocos2d::CCPoint p2, bool p3, int p4, int p5, float p6);
    void createToggleValueControlAdvanced(int p0, std::string p1, cocos2d::CCPoint p2, bool p3, int p4, int p5, float p6, float p7, float p8, cocos2d::CCPoint p9);
    void createValueControl(int p0, std::string p1, cocos2d::CCPoint p2, float p3, float p4, float p5);
    void createValueControlAdvanced(int p0, std::string p1, cocos2d::CCPoint p2, float p3, bool p4, InputValueType p5, int p6, bool p7, float p8, float p9, int p10, int p11, GJInputStyle p12, int p13, bool p14);
    void createValueControlWArrows(int p0, std::string p1, cocos2d::CCPoint p2, float p3);
    cocos2d::CCArray* getGroupContainer(int p0);
    TodoReturn getMaxSliderValue(int p0);
    TodoReturn getMinSliderValue(int p0);
    TodoReturn getObjects();
    cocos2d::CCArray* getPageContainer(int p0);
    float getTriggerValue(int p0, GameObject* p1);
    TodoReturn getTruncatedValue(float p0, int p1);
    TodoReturn getTruncatedValueByTag(int p0, float p1);
    void goToPage(int p0, bool p1);
    TodoReturn hideAll();
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, float p2, float p3, int p4);
    void onCustomEaseArrow(int p0, bool p1);
    void onCustomEaseArrowDown(cocos2d::CCObject* sender);
    void onCustomEaseArrowUp(cocos2d::CCObject* sender);
    void onCustomEaseRate(cocos2d::CCObject* sender);
    void onDisableValue(cocos2d::CCObject* sender);
    void onEase(cocos2d::CCObject* sender);
    void onEaseRate(cocos2d::CCObject* sender);
    void onMultiTrigger(cocos2d::CCObject* sender);
    void onPage(cocos2d::CCObject* sender);
    void onSpawnedByTrigger(cocos2d::CCObject* sender);
    void onToggleTriggerValue(cocos2d::CCObject* sender);
    void onTouchTriggered(cocos2d::CCObject* sender);
    TodoReturn postSetup();
    TodoReturn preSetup();
    void refreshGroupVisibility();
    TodoReturn removeObjectFromGroup(cocos2d::CCObject* p0, int p1);
    TodoReturn removeObjectFromPage(cocos2d::CCObject* p0, int p1);
    void resetDisabledValues();
    TodoReturn setMaxSliderValue(float p0, int p1);
    TodoReturn setMinSliderValue(float p0, int p1);
    TodoReturn shouldLimitValue(int p0);
    void toggleBG(bool p0);
    void toggleCustomEaseRateVisibility(int p0, int p1);
    void toggleDisableButtons(bool p0);
    void toggleEaseRateVisibility();
    void toggleLimitValue(int p0, bool p1);
    void togglePageArrows(bool p0);
    void triggerArrowChanged(int p0, bool p1);
    void triggerArrowLeft(cocos2d::CCObject* p0);
    void triggerArrowRight(cocos2d::CCObject* p0);
    void triggerSliderChanged(cocos2d::CCObject* p0);
    void updateCustomEaseLabel(int p0, int p1);
    void updateCustomEaseRateLabel(int p0, float p1);
    void updateCustomToggleTrigger(int p0, bool p1);
    void updateEaseLabel();
    void updateEaseRateLabel();
    void updateEditorLabel();
    void updateInputNodeLabel(int p0, std::string p1);
    void updateLabel(int p0, std::string p1);
    void updateMultiTriggerBtn();
    void updateSlider(int p0, float p1);
    void updateSlider(int p0);
    void updateSpawnedByTrigger();
    void updateTouchTriggered();
    void updateValue(int p0, float p1);
    void updateValueControls(int p0, float p1);
    void valueChanged(int p0, float p1);
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void keyBackClicked();
    virtual void show();
    virtual void pageChanged();
    virtual TodoReturn toggleGroup(int p0, bool p1);
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
    virtual void textInputReturn(CCTextInputNode* p0);
    virtual void updateInputValue(int p0, float& p1);
    virtual void sliderBegan(Slider* p0);
    virtual TodoReturn sliderEnded(Slider* p0);
    virtual void onPlusButton(cocos2d::CCObject* sender);
    virtual void onCustomButton(cocos2d::CCObject* sender);
    virtual void updateDefaultTriggerValues();
    virtual TodoReturn updateInputNode(int p0, float p1);
    virtual TodoReturn updateToggleItem(int p0, bool p1);
    virtual void valueDidChange(int p0, float p1);
    virtual TodoReturn getValue(int p0);
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
    /* PAD */

};

#endif /* __SETUPTRIGGERPOPUP_H__ */