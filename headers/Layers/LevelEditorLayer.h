#ifndef __LEVELEDITORLAYER_H__
#define __LEVELEDITORLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJBaseGameLayer;
class LevelSettingsDelegate;

class LevelEditorLayer: public GJBaseGameLayer, public LevelSettingsDelegate {
public:
    static LevelEditorLayer* get();
    static LevelEditorLayer* create(GJGameLevel* p0, bool p1);
    TodoReturn activateTriggerEffect(EffectGameObject* p0, float p1, float p2, float p3, bool p4);
    TodoReturn addDelayedSpawn(EffectGameObject* p0, float p1);
    TodoReturn addExclusionList(cocos2d::CCArray* p0, cocos2d::CCDictionary* p1);
    TodoReturn addObjectFromVector(std::vector<std::string>& p0, std::vector<void*>& p1);
    TodoReturn addObjectsAtPosition(cocos2d::CCPoint p0, cocos2d::CCArray* p1, cocos2d::CCArray* p2);
    TodoReturn addObjectsInRect(cocos2d::CCRect p0, bool p1, cocos2d::CCArray* p2, cocos2d::CCArray* p3);
    TodoReturn addObjectToGroup(GameObject* p0, int p1);
    TodoReturn addPlayer2Point(cocos2d::CCPoint p0, bool p1);
    TodoReturn addPlayerCollisionBlock();
    TodoReturn addPlayerPoint(cocos2d::CCPoint p0);
    void addSpecial(GameObject* p0);
    TodoReturn addToRedoList(UndoObject* p0);
    TodoReturn addTouchPoint(cocos2d::CCPoint p0);
    TodoReturn addToUndoList(UndoObject* p0, bool p1);
    TodoReturn applyAttributeState(GameObject* p0, GameObject* p1);
    TodoReturn applyGroupState(GameObject* p0, GameObject* p1);
    TodoReturn breakApartTextObject(TextGameObject* p0);
    TodoReturn canPasteState();
    TodoReturn clearPlayerPoints();
    TodoReturn clearTouchPoints();
    TodoReturn copyObjectState(GameObject* p0);
    TodoReturn copyParticleState(ParticleGameObject* p0);
    GameObject* createObject(int p0, cocos2d::CCPoint p1, bool p2);
    void createObjectsFromSetup(std::string& p0);
    cocos2d::CCArray* createObjectsFromString(std::string const& p0, bool p1, bool p2);
    TodoReturn dirtifyTriggers();
    TodoReturn duplicateKeyframeAnimation(int p0);
    TodoReturn fastUpdateDisabledGroups();
    int findGameObject(int p0);
    TodoReturn findStartPosObject();
    TodoReturn forceShowSelectedObjects(bool p0);
    TodoReturn fullUpdateDisabledGroups();
    TodoReturn getAllObjects();
    TodoReturn getDelayedSpawnNode();
    TodoReturn getGridPos(cocos2d::CCPoint p0);
    TodoReturn getLastObjectX();
    gd::string getLevelString();
    TodoReturn getLockedLayers();
    TodoReturn getNextColorChannel();
    TodoReturn getNextFreeAreaEffectID(cocos2d::CCArray* p0);
    TodoReturn getNextFreeBlockID(cocos2d::CCArray* p0);
    int getNextFreeEditorLayer(cocos2d::CCArray* p0);
    TodoReturn getNextFreeEnterChannel(cocos2d::CCArray* p0);
    TodoReturn getNextFreeGradientID(cocos2d::CCArray* p0);
    int getNextFreeGroupID(cocos2d::CCArray* p0);
    TodoReturn getNextFreeItemID(cocos2d::CCArray* p0);
    TodoReturn getNextFreeOrderChannel(cocos2d::CCArray* p0);
    TodoReturn getNextFreeSFXGroupID(cocos2d::CCArray* p0);
    TodoReturn getNextFreeSFXID(cocos2d::CCArray* p0);
    TodoReturn getObjectRect(GameObject* p0, bool p1, bool p2);
    TodoReturn getRelativeOffset(GameObject* p0);
    TodoReturn getSavedEditorPosition(int p0);
    TodoReturn getSavedEditorPositions();
    TodoReturn getSectionCount();
    TodoReturn getSelectedEditorOrder();
    TodoReturn getSelectedEffectPos();
    TodoReturn getSelectedOrderChannel();
    TodoReturn getSFXIDs();
    TodoReturn getSongIDs(bool& p0);
    TodoReturn getTriggerGroup(int p0);
    void handleAction(bool p0, cocos2d::CCArray* p1);
    TodoReturn hasAction(bool p0);
    bool init(GJGameLevel* p0, bool p1);
    bool isLayerLocked(int layer);
    TodoReturn objectAtPosition(cocos2d::CCPoint p0);
    TodoReturn objectMoved(GameObject* p0);
    TodoReturn objectsAtPosition(cocos2d::CCPoint p0);
    cocos2d::CCArray * objectsInRect(cocos2d::CCRect p0, bool p1);
    void onPausePlaytest();
    void onPlaytest();
    void onResumePlaytest();
    void onStopPlaytest();
    TodoReturn pasteAttributeState(GameObject* p0, cocos2d::CCArray* p1);
    TodoReturn pasteColorState(GameObject* p0, cocos2d::CCArray* p1);
    TodoReturn pasteGroupState(GameObject* p0, cocos2d::CCArray* p1);
    TodoReturn pasteParticleState(ParticleGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn processLoadedMoveActions();
    TodoReturn quickUpdateAllPositions();
    TodoReturn recreateGroups();
    TodoReturn redoLastAction();
    TodoReturn refreshSpecial(GameObject* p0);
    TodoReturn removeAllObjects();
    TodoReturn removeAllObjectsOfType(int p0);
    TodoReturn removeObject(GameObject* p0, bool p1);
    TodoReturn removePlayerCollisionBlock();
    void removeSpecial(GameObject* p0);
    TodoReturn resetDelayedSpawnNodes();
    TodoReturn resetEffectTriggerOptim(GameObject* p0, cocos2d::CCArray* p1);
    void resetMovingObjects();
    void resetObjectVector();
    TodoReturn resetPlayback();
    TodoReturn resetToggledGroups();
    TodoReturn resetToggledGroupsAndObjects();
    TodoReturn resetUnusedColorChannels();
    TodoReturn reverseKeyframeAnimationOrder(int p0);
    TodoReturn reverseObjectChanged(EffectGameObject* p0);
    TodoReturn rotationForSlopeNearObject(GameObject* p0);
    TodoReturn runColorEffect(EffectGameObject* p0, int p1, float p2, float p3, bool p4);
    TodoReturn saveEditorPosition(cocos2d::CCPoint& p0, int p1);
    static cocos2d::CCScene* scene(GJGameLevel* p0, bool p1);
    void setObjectCount(int p0);
    TodoReturn shouldBlend(int p0);
    TodoReturn sortBatchnodeChildren(float p0);
    TodoReturn spawnGroupPreview(int p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7);
    TodoReturn stopPlayback();
    TodoReturn stopTriggersInGroup(int p0, float p1);
    TodoReturn timeObjectChanged();
    TodoReturn toggleBackground(bool p0);
    TodoReturn toggleGrid(bool p0);
    TodoReturn toggleGround(bool p0);
    TodoReturn toggleGroupPreview(int p0, bool p1);
    TodoReturn toggleLockActiveLayer();
    TodoReturn transferDefaultColors(GJEffectManager* p0, GJEffectManager* p1);
    TodoReturn triggerFollowCommand(EffectGameObject* p0);
    TodoReturn triggerPlayerFollowCommand(EffectGameObject* p0);
    TodoReturn triggerRotateCommand(EffectGameObject* p0);
    bool tryUpdateSpeedObject(EffectGameObject* p0, bool p1);
    bool typeExistsAtPosition(int p0, cocos2d::CCPoint p1, bool p2, bool p3, float p4);
    TodoReturn undoLastAction();
    TodoReturn unlockAllLayers();
    TodoReturn updateAnimateOnTriggerObjects(bool p0);
    TodoReturn updateArt(float p0);
    TodoReturn updateBlendValues();
    TodoReturn updateEditor(float p0);
    void updateEditorMode();
    TodoReturn updateGameObjects();
    TodoReturn updateGridLayer();
    TodoReturn updateGridLayerParent();
    TodoReturn updateKeyframeObjects();
    TodoReturn updateKeyframeVisibility(bool p0);
    void updateLevelFont(int p0);
    TodoReturn updateObjectColors(cocos2d::CCArray* p0);
    static void updateObjectLabel(GameObject* p0);
    void updateOptions();
    void updatePreviewAnim();
    void updatePreviewParticle(ParticleGameObject* p0);
    void updatePreviewParticles();
    TodoReturn updateToggledGroups();
    TodoReturn validGroup(GameObject* p0, bool p1);
    virtual void draw();
    virtual void postUpdate(float p0);
    virtual void updateVisibility(float p0);
    virtual TodoReturn playerTookDamage(PlayerObject* p0);
    virtual void updateColor(cocos2d::ccColor3B& p0, float p1, int p2, bool p3, float p4, cocos2d::ccHSVValue& p5, int p6, bool p7, EffectGameObject* p8, int p9, int p10);
    virtual void updateDebugDraw();
    virtual void addToGroup(GameObject* p0, int p1, bool p2);
    virtual void removeFromGroup(GameObject* p0, int p1);
    virtual TodoReturn updateObjectSection(GameObject* p0);
    virtual TodoReturn updateDisabledObjectsLastPos(cocos2d::CCArray* p0);
    virtual float timeForPos(cocos2d::CCPoint p0, int p1, int p2, bool p3, int p4);
    virtual float posForTime(float p0);
    virtual void resetSPTriggered();
    virtual TodoReturn didRotateGameplay();
    virtual TodoReturn manualUpdateObjectColors(GameObject* p0);
    virtual TodoReturn claimCustomParticle(std::string const& p0, cocos2d::ParticleStruct const& p1, int p2, int p3, int p4, bool p5);
    virtual TodoReturn unclaimCustomParticle(std::string const& p0, cocos2d::CCParticleSystemQuad* p1);
    virtual TodoReturn activatedAudioTrigger(SFXTriggerGameObject* p0);
    virtual void checkpointActivated(CheckpointGameObject* p0);
    virtual TodoReturn addKeyframe(KeyframeGameObject* p0);
    virtual void levelSettingsUpdated();
    bool m_drawTriggerBoxes;
    bool m_showGrid;
    bool m_hideGridOnPlay;
    bool m_drawEffectLines;
    bool m_showGround;
    bool m_showDurationLines;
    bool m_increaseMaxUndoRedo;
    bool m_hideBackground;
    bool m_gv0120;
    bool m_layerLockingEnabled;
    bool m_unkBool4;
    bool m_previewParticles;
    bool m_previewAnimations;
    bool m_previewShaders;
    bool m_hideParticleIcons;
    bool m_unkBool5;
    bool m_playTestSmoothFix;
    /* PAD */

    cocos2d::CCArray* m_unkArr0;
    cocos2d::CCArray* m_unkArr1;
    cocos2d::CCArray* m_unkArr2;
    cocos2d::CCArray* m_unkArr3;
    cocos2d::CCArray* m_unkArr4;
    cocos2d::CCArray* m_unkArr8;
    cocos2d::CCArray* m_unkArr11;
    cocos2d::CCArray* m_unkArr12;
    cocos2d::CCArray* m_unkArr13;
    cocos2d::CCDictionary* m_unkDict3;
    cocos2d::CCArray* m_unkArr5;
    /* PAD */

    cocos2d::CCDictionary* m_unkDict4;
    cocos2d::CCArray* m_unkArr7;
    bool m_unkBool3;
    bool m_unkBool2;
    geode::SeedValueRSV m_coinCount;
    /* PAD */

    cocos2d::CCArray* m_unkArr6;
    /* PAD */

    cocos2d::CCDictionary* m_unkDict1;
    cocos2d::CCDictionary* m_unkDict2;
    bool m_unkBool0;
    bool m_unkBool1;
    short m_currentLayer;
    /* PAD */

    EditorUI* m_editorUI;
    cocos2d::CCArray* m_undoObjects;
    cocos2d::CCArray* m_redoObjects;
    geode::SeedValueRSV m_objectCount;
    DrawGridLayer* m_drawGridLayer;
    bool m_unkBool;
    bool m_previewMode;
    /* PAD */

    std::vector<bool> m_lockedLayers;
};

#endif /* __LEVELEDITORLAYER_H__ */