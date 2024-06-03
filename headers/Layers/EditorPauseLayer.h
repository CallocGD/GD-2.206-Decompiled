#ifndef __EDITORPAUSELAYER_H__
#define __EDITORPAUSELAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCBlockLayer;
class FLAlertLayerProtocol;

class EditorPauseLayer: public CCBlockLayer, public FLAlertLayerProtocol {
public:
    static EditorPauseLayer* create(LevelEditorLayer* p0);
    TodoReturn doResetUnused();
    bool init(LevelEditorLayer* p0);
    void onAlignX(cocos2d::CCObject* sender);
    void onAlignY(cocos2d::CCObject* sender);
    void onBuildHelper(cocos2d::CCObject* sender);
    void onCopyWColor(cocos2d::CCObject* sender);
    void onCreateExtras(cocos2d::CCObject* sender);
    void onCreateLoop(cocos2d::CCObject* sender);
    void onCreateTemplate(cocos2d::CCObject* sender);
    void onExitEditor(cocos2d::CCObject* sender);
    void onExitNoSave(cocos2d::CCObject* sender);
    void onHelp(cocos2d::CCObject* sender);
    void onKeybindings(cocos2d::CCObject* sender);
    void onNewGroupX(cocos2d::CCObject* sender);
    void onNewGroupY(cocos2d::CCObject* sender);
    void onOptions(cocos2d::CCObject* sender);
    void onPasteWColor(cocos2d::CCObject* sender);
    void onReGroup(cocos2d::CCObject* sender);
    void onResetUnusedColors(cocos2d::CCObject* sender);
    void onResume(cocos2d::CCObject* sender);
    void onSave(cocos2d::CCObject* sender);
    void onSaveAndExit(cocos2d::CCObject* sender);
    void onSaveAndPlay(cocos2d::CCObject* sender);
    void onSelectAll(cocos2d::CCObject* sender);
    void onSelectAllLeft(cocos2d::CCObject* sender);
    void onSelectAllRight(cocos2d::CCObject* sender);
    void onSong(cocos2d::CCObject* sender);
    void onUnlockAllLayers(cocos2d::CCObject* sender);
    TodoReturn playStep2();
    TodoReturn playStep3();
    void saveLevel();
    TodoReturn toggleDebugDraw(cocos2d::CCObject* p0);
    TodoReturn toggleEditorBackground(cocos2d::CCObject* p0);
    TodoReturn toggleEditorColorMode(cocos2d::CCObject* p0);
    TodoReturn toggleEditorGrid(cocos2d::CCObject* p0);
    TodoReturn toggleEditorGround(cocos2d::CCObject* p0);
    TodoReturn toggleEffectDuration(cocos2d::CCObject* p0);
    TodoReturn toggleEffectLines(cocos2d::CCObject* p0);
    TodoReturn toggleFollowPlayer(cocos2d::CCObject* p0);
    TodoReturn toggleGridOnTop(cocos2d::CCObject* p0);
    TodoReturn toggleHideInvisible(cocos2d::CCObject* p0);
    TodoReturn toggleIgnoreDamage(cocos2d::CCObject* p0);
    TodoReturn togglePlaytestMusic(cocos2d::CCObject* p0);
    TodoReturn togglePreviewAnim(cocos2d::CCObject* p0);
    TodoReturn togglePreviewParticles(cocos2d::CCObject* p0);
    TodoReturn togglePreviewShaders(cocos2d::CCObject* p0);
    TodoReturn toggleRecordOrder(cocos2d::CCObject* p0);
    TodoReturn toggleSelectFilter(cocos2d::CCObject* p0);
    TodoReturn toggleShowObjectInfo(cocos2d::CCObject* p0);
    TodoReturn uncheckAllPortals(cocos2d::CCObject* p0);
    TodoReturn updateSongButton();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual void customSetup();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    bool m_saved;
    CCMenuItemSpriteExtra* m_guidelinesOffButton;
    CCMenuItemSpriteExtra* m_guidelinesOnButton;
    LevelEditorLayer* m_editorLayer;
};

#endif /* __EDITORPAUSELAYER_H__ */