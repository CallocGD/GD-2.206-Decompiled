#ifndef __CUSTOMIZEOBJECTLAYER_H__
#define __CUSTOMIZEOBJECTLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;
class HSVWidgetDelegate;
class ColorSelectDelegate;
class ColorSetupDelegate;

class CustomizeObjectLayer: public FLAlertLayer, public TextInputDelegate, public HSVWidgetDelegate, public ColorSelectDelegate, public ColorSetupDelegate {
public:
    static CustomizeObjectLayer* create(GameObject* p0, cocos2d::CCArray* p1);
    TodoReturn createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
    TodoReturn determineStartValues();
    int getActiveMode(bool p0);
    TodoReturn getButtonByTag(int p0);
    TodoReturn getHSV();
    void highlightSelected(ButtonSprite* p0);
    bool init(GameObject* p0, cocos2d::CCArray* p1);
    void onBreakApart(cocos2d::CCObject* sender);
    void onBrowse(cocos2d::CCObject* sender);
    void onClear(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onCopy(cocos2d::CCObject* sender);
    void onEditColor(cocos2d::CCObject* sender);
    void onHSV(cocos2d::CCObject* sender);
    void onLiveEdit(cocos2d::CCObject* sender);
    void onNextColorChannel(cocos2d::CCObject* sender);
    void onPaste(cocos2d::CCObject* sender);
    void onSelectColor(cocos2d::CCObject* sender);
    void onSelectMode(cocos2d::CCObject* sender);
    void onSettings(cocos2d::CCObject* sender);
    void onUpdateCustomColor(cocos2d::CCObject* sender);
    TodoReturn recreateLayer();
    void sliderChanged(cocos2d::CCObject* p0);
    void toggleVisible();
    void updateChannelLabel(int p0);
    void updateColorSprite();
    void updateCurrentSelection();
    void updateCustomColorLabels();
    void updateHSVButtons();
    void updateKerningLabel();
    void updateSelected(int p0);
    virtual void keyBackClicked();
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    virtual void hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::ccHSVValue p1);
    virtual void colorSelectClosed(cocos2d::CCNode* p0);
    virtual void colorSetupClosed(int p0);
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_colorButtons;
    cocos2d::CCArray* m_colorTabNodes;
    cocos2d::CCArray* m_textTabNodes;
    cocos2d::CCArray* m_unkArray;
    cocos2d::CCArray* m_detailTabNodes;
    int m_selectedMode;
    int m_customColorChannel;
    bool m_unk0x200;
    bool m_unk0x201;
    bool m_glowDisabled;
    CCMenuItemSpriteExtra* m_baseButton;
    CCMenuItemSpriteExtra* m_detailButton;
    CCMenuItemSpriteExtra* m_textButton;
    CCMenuItemSpriteExtra* m_baseColorHSV;
    CCMenuItemSpriteExtra* m_detailColorHSV;
    cocos2d::CCLabelBMFont* m_titleLabel;
    cocos2d::CCLabelBMFont* m_selectedColorLabel;
    CCTextInputNode* m_customColorInput;
    CCTextInputNode* m_textInput;
    int m_kerningAmount;
    cocos2d::CCLabelBMFont* m_kerningLabel;
    Slider* m_kerningSlider;
    ButtonSprite* m_customColorButtonSprite;
    CCMenuItemSpriteExtra* m_customColorButton;
    CCMenuItemSpriteExtra* m_arrowDown;
    CCMenuItemSpriteExtra* m_arrowUp;
    cocos2d::extension::CCScale9Sprite* m_customColorInputBG;
    ColorChannelSprite* m_colorSprite;
    CCMenuItemSpriteExtra* m_colorSpriteButton;
    CCMenuItemSpriteExtra* m_liveSelectButton;
    bool m_showTextInput;
    bool m_customColorSelected;
};

#endif /* __CUSTOMIZEOBJECTLAYER_H__ */