#ifndef __LEVELSETTINGSLAYER_H__
#define __LEVELSETTINGSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class ColorSelectDelegate;
class SelectArtDelegate;
class SelectSettingDelegate;
class FLAlertLayerProtocol;
class CustomSongLayerDelegate;
class TextInputDelegate;

class LevelSettingsLayer: public FLAlertLayer, public ColorSelectDelegate, public SelectArtDelegate, public SelectSettingDelegate, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public TextInputDelegate {
public:
    static LevelSettingsLayer* create(LevelSettingsObject* p0, LevelEditorLayer* p1);
    TodoReturn createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
    bool init(LevelSettingsObject* p0, LevelEditorLayer* p1);
    void onBGArt(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onCol(cocos2d::CCObject* sender);
    void onDisable(cocos2d::CCObject* sender);
    void onFGArt(cocos2d::CCObject* sender);
    void onGameplayMode(cocos2d::CCObject* sender);
    void onGArt(cocos2d::CCObject* sender);
    void onLiveEdit(cocos2d::CCObject* sender);
    void onMode(cocos2d::CCObject* sender);
    void onOptionToggle(cocos2d::CCObject* sender);
    void onSelectFont(cocos2d::CCObject* sender);
    void onSelectMode(cocos2d::CCObject* sender);
    void onSelectSpeed(cocos2d::CCObject* sender);
    void onSettings(cocos2d::CCObject* sender);
    void onShowPicker(cocos2d::CCObject* sender);
    void onSpeed(cocos2d::CCObject* sender);
    void showPicker(ColorAction* p0);
    TodoReturn updateColorSprite(ColorChannelSprite* p0);
    TodoReturn updateColorSprites();
    TodoReturn updateGameplayModeButtons();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void colorSelectClosed(cocos2d::CCNode* p0);
    virtual void selectArtClosed(SelectArtLayer* p0);
    virtual TodoReturn selectSettingClosed(SelectSettingLayer* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __LEVELSETTINGSLAYER_H__ */