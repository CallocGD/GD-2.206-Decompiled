#ifndef __GJEFFECTMANAGER_H__
#define __GJEFFECTMANAGER_H__


#include "../includes.h"

class GJEffectManager: public cocos2d::CCNode {
public:
    static GJEffectManager* create();
    TodoReturn activeColorForIndex(int p0);
    TodoReturn activeOpacityForIndex(int p0);
    TodoReturn addAllInheritedColorActions(cocos2d::CCArray* p0);
    void addCountToItem(int p0, int p1);
    TodoReturn addMoveCalculation(CCMoveCNode* p0, cocos2d::CCPoint p1, GameObject* p2);
    TodoReturn calculateBaseActiveColors();
    TodoReturn calculateInheritedColor(int p0, ColorAction* p1);
    TodoReturn calculateLightBGColor(cocos2d::ccColor3B p0);
    TodoReturn checkCollision(int const& p0, int const& p1);
    TodoReturn colorActionChanged(ColorAction* p0);
    TodoReturn colorExists(int p0);
    TodoReturn colorForEffect(cocos2d::ccColor3B p0, cocos2d::ccHSVValue p1);
    TodoReturn colorForGroupID(int p0, cocos2d::ccColor3B const& p1, bool p2);
    TodoReturn colorForIndex(int p0);
    TodoReturn colorForPulseEffect(cocos2d::ccColor3B const& p0, PulseEffectAction* p1);
    TodoReturn controlActionsForControlID(int p0, GJActionCommand p1);
    TodoReturn controlActionsForTrigger(EffectGameObject* p0, GJActionCommand p1);
    int countForItem(int p0);
    TodoReturn createFollowCommand(float p0, float p1, float p2, int p3, int p4, int p5, int p6);
    TodoReturn createKeyframeCommand(int p0, cocos2d::CCArray* p1, GameObject* p2, int p3, int p4, bool p5, float p6, float p7, float p8, float p9, float p10, float p11, std::vector<int> const& p12);
    TodoReturn createMoveCommand(cocos2d::CCPoint p0, int p1, float p2, int p3, float p4, bool p5, bool p6, bool p7, bool p8, float p9, float p10, int p11, int p12);
    TodoReturn createPlayerFollowCommand(float p0, float p1, int p2, float p3, float p4, int p5, int p6, int p7);
    TodoReturn createRotateCommand(float p0, float p1, int p2, int p3, int p4, float p5, bool p6, bool p7, bool p8, int p9, int p10);
    TodoReturn createTransformCommand(double p0, double p1, double p2, double p3, bool p4, float p5, int p6, int p7, int p8, float p9, bool p10, bool p11, int p12, int p13);
    TodoReturn getAllColorActions();
    TodoReturn getAllColorSprites();
    ColorAction* getColorAction(int p0);
    ColorActionSprite* getColorSprite(int p0);
    TodoReturn getLoadedMoveOffset(std::unordered_map<int, std::pair<double, double>>& p0);
    TodoReturn getMixedColor(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2);
    TodoReturn getMoveCommandNode(GroupCommandObject2* p0);
    TodoReturn getMoveCommandObject();
    TodoReturn getOpacityActionForGroup(int p0);
    TodoReturn getSaveString();
    TodoReturn getTempGroupCommand();
    TodoReturn handleObjectCollision(bool p0, int p1, int p2);
    TodoReturn hasActiveDualTouch();
    TodoReturn hasBeenTriggered(int p0, int p1);
    TodoReturn hasPulseEffectForGroupID(int p0);
    bool isGroupEnabled(int p0);
    TodoReturn keyForGroupIDColor(int p0, cocos2d::ccColor3B const& p1, bool p2);
    void loadFromState(EffectManagerState& p0);
    TodoReturn objectsCollided(int p0, int p1);
    TodoReturn opacityForIndex(int p0);
    TodoReturn opacityModForGroup(int p0);
    TodoReturn pauseTimer(int p0);
    TodoReturn playerButton(bool p0, bool p1);
    TodoReturn playerDied();
    TodoReturn postCollisionCheck();
    TodoReturn postMoveActions();
    TodoReturn preCollisionCheck();
    TodoReturn prepareMoveActions(float p0, bool p1);
    TodoReturn processColors();
    TodoReturn processCopyColorPulseActions();
    TodoReturn processInheritedColors();
    TodoReturn processMoveCalculations();
    TodoReturn processPulseActions();
    TodoReturn registerCollisionTrigger(int p0, int p1, int p2, bool p3, bool p4, std::vector<int> const& p5, int p6, int p7);
    TodoReturn registerRotationCommand(GroupCommandObject2* p0, bool p1);
    TodoReturn removeAllPulseActions();
    TodoReturn removeColorAction(int p0);
    TodoReturn removePersistentFromAllItems();
    TodoReturn removePersistentFromAllTimers();
    TodoReturn removeTriggeredID(int p0, int p1);
    TodoReturn reset();
    TodoReturn resetEffects();
    TodoReturn resetMoveActions();
    TodoReturn resetTempGroupCommands(bool p0);
    TodoReturn resetToggledGroups();
    TodoReturn resetTriggeredIDs();
    void onRewardedVideo(cocos2d::CCObject* sender);
    TodoReturn resumeTimer(int p0);
    TodoReturn runCountTrigger(int p0, int p1, bool p2, int p3, bool p4, std::vector<int> const& p5, int p6, int p7);
    TodoReturn runDeathTrigger(int p0, bool p1, std::vector<int> const& p2, int p3, int p4);
    TodoReturn runOpacityActionOnGroup(int p0, float p1, float p2, int p3, int p4);
    TodoReturn runPulseEffect(int p0, bool p1, float p2, float p3, float p4, PulseEffectType p5, cocos2d::ccColor3B p6, cocos2d::ccHSVValue p7, int p8, bool p9, bool p10, bool p11, bool p12, int p13, int p14);
    TodoReturn runTimerTrigger(int p0, double p1, bool p2, int p3, std::vector<int> const& p4, int p5, int p6);
    TodoReturn runTouchTriggerCommand(int p0, bool p1, TouchTriggerType p2, TouchTriggerControl p3, bool p4, std::vector<int> const& p5, int p6, int p7);
    TodoReturn saveCompletedMove(int p0, double p1, double p2);
    void saveToState(EffectManagerState& p0);
    void setColorAction(ColorAction* p0, int p1);
    void setFollowing(int p0, int p1, bool p2);
    void setupFromString(std::string p0);
    TodoReturn shouldBlend(int p0);
    TodoReturn spawnGroup(int p0, float p1, bool p2, std::vector<int> const& p3, int p4, int p5);
    TodoReturn spawnObject(GameObject* p0, float p1, std::vector<int> const& p2, int p3, int p4);
    TodoReturn startTimer(int p0, double p1, double p2, bool p3, bool p4, bool p5, float p6, bool p7, int p8, std::vector<int> const& p9, int p10, int p11);
    TodoReturn storeTriggeredID(int p0, int p1);
    TodoReturn timeForItem(int p0);
    TodoReturn timerExists(int p0);
    TodoReturn toggleGroup(int p0, bool p1);
    TodoReturn toggleItemPersistent(int p0, bool p1);
    TodoReturn toggleTimerPersistent(int p0, bool p1);
    TodoReturn transferPersistentItems();
    TodoReturn traverseInheritanceChain(InheritanceNode* p0);
    TodoReturn tryGetMoveCommandNode(int p0);
    TodoReturn updateActiveOpacityEffects();
    TodoReturn updateColorAction(ColorAction* p0);
    TodoReturn updateColorEffects(float p0);
    TodoReturn updateColors(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1);
    void updateCountForItem(int p0, int p1);
    virtual void rewardedVideoFinished();
    TodoReturn updateEffects(float p0);
    void updateOpacityAction(OpacityEffectAction* p0);
    void updateOpacityEffects(float p0);
    TodoReturn updatePulseEffects(float p0);
    TodoReturn updateSpawnTriggers(float p0);
    TodoReturn updateTimer(int p0, double p1);
    TodoReturn updateTimers(float p0, float p1);
    TodoReturn wasFollowing(int p0, int p1);
    TodoReturn wouldCreateLoop(InheritanceNode* p0, int p1);
    virtual bool init();
    /* PAD */

    cocos2d::CCDictionary* m_colorActionDict;
};

#endif /* __GJEFFECTMANAGER_H__ */