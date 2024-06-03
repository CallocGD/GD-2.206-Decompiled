#ifndef __PLAYLAYER_H__
#define __PLAYLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJBaseGameLayer;
class CCCircleWaveDelegate;
class CurrencyRewardDelegate;
class DialogDelegate;

class PlayLayer: public GJBaseGameLayer, public CCCircleWaveDelegate, public CurrencyRewardDelegate, public DialogDelegate {
public:
    virtual  ~PlayLayer();
    static PlayLayer* create(GJGameLevel* level, bool useReplay, bool dontCreateObjects);
    static PlayLayer* get();
    void addCircle(CCCircleWave* cw);
    void addObject(GameObject* p0);
    void addToGroupOld(GameObject* p0);
    TodoReturn applyCustomEnterEffect(GameObject* p0, bool p1);
    TodoReturn applyEnterEffect(GameObject* p0, int p1, bool p2);
    bool canPauseGame();
    TodoReturn checkpointWithID(int p0);
    TodoReturn colorObject(int p0, cocos2d::ccColor3B p1);
    TodoReturn commitJumps();
    TodoReturn compareStateSnapshot();
    CheckpointObject* createCheckpoint();
    void createObjectsFromSetupFinished();
    void delayedFullReset();
    void delayedResetLevel();
    void fullReset();
    float getCurrentPercent();
    int getCurrentPercentInt();
    TodoReturn getEndPosition();
    TodoReturn getLastCheckpoint();
    TodoReturn getRelativeMod(cocos2d::CCPoint p0, float p1, float p2, float p3);
    TodoReturn getRelativeModNew(cocos2d::CCPoint p0, float p1, float p2, bool p3, bool p4);
    TodoReturn getTempMilliTime();
    TodoReturn gravityEffectFinished();
    void incrementJumps();
    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects);
    bool isGameplayActive();
    void levelComplete();
    TodoReturn loadActiveSaveObjects(std::vector<SavedActiveObjectState>& p0, std::vector<SavedSpecialObjectState>& p1);
    TodoReturn loadDefaultColors();
    TodoReturn loadDynamicSaveObjects(std::vector<SavedObjectStateRef>& p0);
    void loadFromCheckpoint(CheckpointObject* p0);
    TodoReturn loadLastCheckpoint();
    CheckpointObject * markCheckpoint();
    void onQuit();
    TodoReturn optimizeColorGroups();
    TodoReturn optimizeOpacityGroups();
    void pauseGame(bool p0);
    void playEndAnimationToPos(cocos2d::CCPoint p0);
    void playPlatformerEndAnimationToPos(cocos2d::CCPoint p0, bool p1);
    TodoReturn playReplay(std::string p0);
    void prepareCreateObjectsFromSetup(std::string& p0);
    void prepareMusic(bool p0);
    void processCreateObjectsFromSetup();
    TodoReturn processLoadedMoveActions();
    TodoReturn queueCheckpoint();
    void removeAllObjects();
    void removeCheckpoint(bool p0);
    void removeFromGroupOld(GameObject* p0);
    void resetLevel();
    void resetLevelFromStart();
    void resume();
    void resumeAndRestart(bool p0);
    TodoReturn saveActiveSaveObjects(std::vector<SavedActiveObjectState>& p0, std::vector<SavedSpecialObjectState>& p1);
    TodoReturn saveDynamicSaveObjects(std::vector<SavedObjectStateRef>& p0);
    TodoReturn scanActiveSaveObjects();
    TodoReturn scanDynamicSaveObjects();
    static cocos2d::CCScene* scene(GJGameLevel* level, bool useReplay, bool dontCreateObjects);
    TodoReturn screenFlipObject(GameObject* p0);
    void setDamageVerifiedIdx(int p0);
    void setupHasCompleted();
    TodoReturn shouldBlend(int p0);
    void showCompleteEffect();
    void showCompleteText();
    void showEndLayer();
    void showHint();
    void showNewBest(bool p0, int p1, int p2, bool p3, bool p4, bool p5);
    void showRetryLayer();
    void showTwoPlayerGuide();
    TodoReturn spawnCircle();
    TodoReturn spawnFirework();
    void startGame();
    void startGameDelayed();
    void startMusic();
    TodoReturn startRecording();
    TodoReturn startRecordingDelayed();
    TodoReturn stopRecording();
    void storeCheckpoint(CheckpointObject* p0);
    TodoReturn takeStateSnapshot();
    TodoReturn toggleBGEffectVisibility(bool p0);
    TodoReturn toggleGhostEffect(int p0);
    void togglePracticeMode(bool p0);
    TodoReturn tryStartRecord();
    void updateAttempts();
    void updateEffectPositions();
    void updateInfoLabel();
    TodoReturn updateInvisibleBlock(GameObject* p0, float p1, float p2, float p3, float p4, cocos2d::ccColor3B const& p5);
    void updateProgressbar();
    void updateScreenRotation(int p0, bool p1, bool p2, float p3, int p4, float p5, int p6, int p7);
    void updateTimeWarp(EffectGameObject* p0, float p1);
    virtual void onEnterTransitionDidFinish();
    virtual void onExit();
    virtual void postUpdate(float p0);
    virtual TodoReturn checkForEnd();
    virtual TodoReturn testTime();
    virtual void updateVerifyDamage();
    virtual void updateAttemptTime(float p0);
    virtual void updateVisibility(float p0);
    virtual TodoReturn opacityForObject(GameObject* p0);
    virtual void updateColor(cocos2d::ccColor3B& p0, float p1, int p2, bool p3, float p4, cocos2d::ccHSVValue& p5, int p6, bool p7, EffectGameObject* p8, int p9, int p10);
    virtual TodoReturn activateEndTrigger(int p0, bool p1, bool p2);
    virtual void activatePlatformerEndTrigger(EndTriggerGameObject* p0, std::vector<int> const& p1);
    virtual void toggleGlitter(bool p0);
    virtual void destroyPlayer(PlayerObject* p0, GameObject* p1);
    virtual TodoReturn toggleGroundVisibility(bool p0);
    virtual TodoReturn toggleMGVisibility(bool p0);
    virtual TodoReturn toggleHideAttempts(bool p0);
    virtual float timeForPos(cocos2d::CCPoint p0, int p1, int p2, bool p3, int p4);
    virtual float posForTime(float p0);
    virtual void resetSPTriggered();
    virtual TodoReturn updateTimeWarp(float p0);
    virtual TodoReturn playGravityEffect(bool p0);
    virtual TodoReturn manualUpdateObjectColors(GameObject* p0);
    virtual void checkpointActivated(CheckpointGameObject* p0);
    virtual TodoReturn flipArt(bool p0);
    virtual void updateTimeLabel(int p0, int p1, bool p2);
    virtual TodoReturn checkSnapshot();
    virtual void toggleProgressbar();
    virtual TodoReturn toggleInfoLabel();
    virtual void removeAllCheckpoints();
    virtual TodoReturn toggleMusicInPractice();
    virtual void currencyWillExit(CurrencyRewardLayer* p0);
    virtual void circleWaveWillBeRemoved(CCCircleWave* p0);
    virtual void dialogClosed(DialogLayer* p0);
    /* PAD */

    cocos2d::CCArray* m_coinArray;
    /* PAD */

    float m_unksomefloat;
    CheckpointObject* m_unkCheckpointObject;
    cocos2d::CCArray* m_checkpointArray;
    /* PAD */

    cocos2d::CCArray* m_circleWaveArray;
    /* PAD */

    cocos2d::CCLabelBMFont* m_attemptLabel;
    cocos2d::CCLabelBMFont* m_percentageLabel;
    /* PAD */

    cocos2d::CCSprite* m_progressBar;
    /* PAD */

    bool m_hasCompletedLevel;
    /* PAD */

    bool m_endLayerStars;
    /* PAD */

    /* PAD */

    bool m_isPaused;
    /* PAD */

    cocos2d::CCDictionary* m_colorKeyDict;
    std::vector<int> m_keyColors;
    std::vector<int> m_keyOpacities;
    std::vector<int> m_keyPulses;
    int m_nextColorKey;
    /* PAD */

};

#endif /* __PLAYLAYER_H__ */