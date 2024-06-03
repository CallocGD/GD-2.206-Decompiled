#ifndef __PLAYEROBJECT_H__
#define __PLAYEROBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GameObject;
class AnimatedSpriteDelegate;

class PlayerObject: public GameObject, public AnimatedSpriteDelegate {
public:
    static PlayerObject* create(int p0, int p1, GJBaseGameLayer* p2, cocos2d::CCLayer* p3, bool p4);
    void activateStreak();
    TodoReturn addAllParticles();
    TodoReturn addToTouchedRings(RingObject* p0);
    TodoReturn addToYVelocity(double p0, int p1);
    void animatePlatformerJump(float p0);
    void boostPlayer(float p0);
    void bumpPlayer(float p0, int p1, bool p2, GameObject* p3);
    TodoReturn buttonDown(PlayerButton p0);
    TodoReturn canStickToGround();
    TodoReturn checkSnapJumpToObject(GameObject* p0);
    void collidedWithObject(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
    void collidedWithObject(float p0, GameObject* p1);
    void collidedWithObjectInternal(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
    void collidedWithSlope(float dt, GameObject* object, bool forced);
    void collidedWithSlopeInternal(float dt, GameObject* object, bool forced);
    TodoReturn convertToClosestRotation(float p0);
    TodoReturn copyAttributes(PlayerObject* p0);
    void createFadeOutDartStreak();
    void createRobot(int p0);
    void createSpider(int p0);
    void deactivateParticle();
    void deactivateStreak(bool p0);
    TodoReturn destroyFromHitHead();
    TodoReturn didHitHead();
    void disableCustomGlowColor();
    TodoReturn disablePlayerControls();
    void disableSwingFire();
    void doReversePlayer(bool p0);
    void enableCustomGlowColor(cocos2d::_ccColor3B const& color);
    void enablePlayerControls();
    void exitPlatformerAnimateJump();
    void fadeOutStreak2(float p0);
    void flashPlayer(float p0, float p1, cocos2d::ccColor3B mainColor, cocos2d::ccColor3B secondColor);
    void flipGravity(bool p0, bool p1);
    TodoReturn flipMod();
    TodoReturn gameEventTriggered(int p0, int p1);
    bool getActiveMode();
    TodoReturn getCurrentXVelocity();
    TodoReturn getModifiedSlopeYVel();
    TodoReturn getOldPosition(float p0);
    cocos2d::ccColor3B getSecondColor();
    TodoReturn getYVelocity();
    TodoReturn gravityDown();
    TodoReturn gravityUp();
    TodoReturn handlePlayerCommand(int p0);
    TodoReturn handleRotatedCollisionInternal(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3, bool p4, bool p5);
    TodoReturn handleRotatedObjectCollision(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
    TodoReturn handleRotatedSlopeCollision(float p0, GameObject* p1, bool p2);
    TodoReturn hardFlipGravity();
    TodoReturn hitGround(GameObject* p0, bool p1);
    TodoReturn hitGroundNoJump(GameObject* p0, bool p1);
    void incrementJumps();
    bool init(int p0, int p1, GJBaseGameLayer* p2, cocos2d::CCLayer* p3, bool p4);
    bool isBoostValid(float p0);
    bool isFlying();
    bool isInBasicMode();
    bool isInNormalMode();
    bool isSafeFlip(float p0);
    bool isSafeHeadTest();
    bool isSafeMode(float p0);
    bool isSafeSpiderFlip(float p0);
    TodoReturn levelFlipFinished();
    bool levelFlipping();
    TodoReturn levelWillFlip();
    void loadFromCheckpoint(PlayerCheckpoint* p0);
    TodoReturn lockPlayer();
    TodoReturn logValues();
    TodoReturn modeDidChange();
    TodoReturn performSlideCheck();
    void placeStreakPoint();
    TodoReturn playBumpEffect(int p0, GameObject* p1);
    TodoReturn playBurstEffect();
    TodoReturn playCompleteEffect(bool p0, bool p1);
    void playDeathEffect();
    void playDynamicSpiderRun();
    void playerDestroyed(bool p0);
    bool playerIsFalling(float p0);
    TodoReturn playerIsFallingBugged();
    TodoReturn playerIsMovingUp();
    TodoReturn playerTeleported();
    TodoReturn playingEndEffect();
    TodoReturn playSpawnEffect();
    void playSpiderDashEffect(cocos2d::CCPoint from, cocos2d::CCPoint to);
    void postCollision(float p0);
    void preCollision();
    bool preSlopeCollision(float p0, GameObject* p1);
    void propellPlayer(float p0, bool p1, int p2);
    void pushButton(PlayerButton p0);
    TodoReturn pushDown();
    void pushPlayer(float p0);
    TodoReturn redirectDash(float p0);
    TodoReturn redirectPlayerForce(float p0, float p1, float p2, float p3);
    TodoReturn releaseAllButtons();
    void releaseButton(PlayerButton p0);
    TodoReturn removeAllParticles();
    void removePendingCheckpoint();
    TodoReturn removePlacedCheckpoint();
    TodoReturn resetAllParticles();
    TodoReturn resetCollisionLog(bool p0);
    TodoReturn resetCollisionValues();
    void resetPlayerIcon();
    TodoReturn resetStateVariables();
    void resetStreak();
    TodoReturn resetTouchedRings();
    TodoReturn reverseMod();
    void reversePlayer(EffectGameObject* p0);
    void ringJump(RingObject* p0, bool p1);
    void rotateGameplay(int p0, int p1, bool p2, float p3, float p4, bool p5, bool p6);
    TodoReturn rotateGameplayObject(GameObject* p0);
    TodoReturn rotateGameplayOnly(bool p0);
    TodoReturn rotatePreSlopeObjects();
    void runBallRotation(float p0);
    void runBallRotation2();
    void runNormalRotation();
    void runNormalRotation(bool p0, float p1);
    void runRotateAction(bool p0, int p1);
    TodoReturn saveToCheckpoint(PlayerCheckpoint* p0);
    void setSecondColor(cocos2d::ccColor3B const& p0);
    void setupStreak();
    void setYVelocity(double p0, int p1);
    TodoReturn spawnCircle();
    TodoReturn spawnCircle2();
    TodoReturn spawnDualCircle();
    TodoReturn spawnFromPlayer(PlayerObject* p0, bool p1);
    TodoReturn spawnPortalCircle(cocos2d::ccColor3B p0, float p1);
    TodoReturn spawnScaleCircle();
    TodoReturn specialGroundHit();
    TodoReturn speedDown();
    TodoReturn speedUp();
    void spiderTestJump(bool p0);
    void spiderTestJumpInternal(bool p0);
    void spiderTestJumpX(bool p0);
    void spiderTestJumpY(bool p0);
    void startDashing(DashRingObject* p0);
    TodoReturn stopBurstEffect();
    void stopDashing();
    TodoReturn stopParticles();
    void stopPlatformerJumpAnimation();
    TodoReturn stopRotation(bool p0, int p1);
    TodoReturn stopStreak2();
    void storeCollision(PlayerCollisionDirection p0, int p1);
    TodoReturn switchedDirTo(PlayerButton p0);
    void switchedToMode(GameObjectType p0);
    TodoReturn testForMoving(float p0, GameObject* p1);
    void toggleBirdMode(bool p0, bool p1);
    void toggleDartMode(bool p0, bool p1);
    void toggleFlyMode(bool p0, bool p1);
    void toggleGhostEffect(GhostType p0);
    void togglePlatformerMode(bool val);
    void togglePlayerScale(bool p0, bool p1);
    void toggleRobotMode(bool p0, bool p1);
    void toggleRollMode(bool p0, bool p1);
    void toggleSpiderMode(bool p0, bool p1);
    void toggleSwingMode(bool p0, bool p1);
    void toggleVisibility(bool p0);
    TodoReturn touchedObject(GameObject* p0);
    void tryPlaceCheckpoint();
    TodoReturn unrotateGameplayObject(GameObject* p0);
    TodoReturn unrotatePreSlopeObjects();
    TodoReturn updateCheckpointMode(bool p0);
    TodoReturn updateCheckpointTest();
    void updateCollide(PlayerCollisionDirection p0, GameObject* p1);
    void updateCollideBottom(float p0, GameObject* p1);
    void updateCollideLeft(float p0, GameObject* p1);
    void updateCollideRight(float p0, GameObject* p1);
    void updateCollideTop(float p0, GameObject* p1);
    void updateDashAnimation();
    void updateDashArt();
    TodoReturn updateEffects(float p0);
    void updateGlowColor();
    TodoReturn updateInternalActions(float p0);
    void updateJump(float p0);
    TodoReturn updateJumpVariables();
    TodoReturn updateLastGroundObject(GameObject* p0);
    TodoReturn updateMove(float p0);
    void updatePlayerArt();
    void updatePlayerBirdFrame(int p0);
    void updatePlayerDartFrame(int p0);
    void updatePlayerForce(cocos2d::CCPoint p0, bool p1);
    void updatePlayerFrame(int p0);
    void updatePlayerGlow();
    void updatePlayerJetpackFrame(int p0);
    void updatePlayerRobotFrame(int id);
    void updatePlayerRollFrame(int p0);
    void updatePlayerScale();
    void updatePlayerShipFrame(int p0);
    void updatePlayerSpiderFrame(int id);
    void updatePlayerSpriteExtra(std::string p0);
    void updatePlayerSwingFrame(int p0);
    void updateRobotAnimationSpeed();
    TodoReturn updateRotation(float p0, float p1);
    TodoReturn updateRotation(float p0);
    void updateShipRotation(float p0);
    void updateShipSpriteExtra(std::string p0);
    TodoReturn updateSlopeRotation(float p0);
    TodoReturn updateSlopeYVelocity(float p0);
    void updateSpecial(float p0);
    TodoReturn updateStateVariables();
    TodoReturn updateStaticForce(float p0, float p1, bool p2);
    void updateStreakBlend(bool p0);
    TodoReturn updateStreaks(float p0);
    void updateSwingFire();
    void updateTimeMod(float p0, bool p1);
    TodoReturn usingWallLimitedMode();
    TodoReturn yStartDown();
    TodoReturn yStartUp();
    virtual void update(float p0);
    virtual void setScaleX(float p0);
    virtual void setScaleY(float p0);
    virtual void setScale(float p0);
    virtual void setPosition(cocos2d::CCPoint const& p0);
    virtual void setVisible(bool p0);
    virtual void setRotation(float p0);
    virtual void setOpacity(unsigned char p0);
    virtual void setColor(cocos2d::ccColor3B const& p0);
    virtual void setFlipX(bool p0);
    virtual void setFlipY(bool p0);
    virtual void resetObject();
    virtual cocos2d::CCPoint getRealPosition();
    virtual TodoReturn getOrientedBox();
    virtual TodoReturn getObjectRotation();
    virtual void animationFinished(char const* p0);
    cocos2d::CCNode* m_mainLayer;
    /* PAD */

    cocos2d::CCNode* m_unk4e4;
    cocos2d::CCDictionary* m_unk4e8;
    cocos2d::CCDictionary* m_unk4ec;
    cocos2d::CCDictionary* m_unk4f0;
    cocos2d::CCDictionary* m_unk4f4;
    /* PAD */

    float m_unk518;
    bool m_unk51c;
    bool m_unk51d;
    bool m_unk51e;
    bool m_unk51f;
    /* PAD */

    GameObject* m_collidedObject;
    /* PAD */

    float m_unk568;
    cocos2d::CCSprite* m_unk56c;
    /* PAD */

    GameObject* m_unk574;
    GameObject* m_unk578;
    /* PAD */

    float unk_584;
    int unk_588;
    /* PAD */

    cocos2d::CCArray* m_particleSystems;
    std::unordered_map<int, GJPointDouble> m_unk594;
    std::unordered_map<int, GameObject*> m_unk5b4;
    void* m_unk5d4;
    float m_rotationSpeed;
    float m_unk5dc;
    bool m_isRotating;
    bool m_unk5e1;
    bool m_hasGlow;
    bool m_isHidden;
    int m_hasGhostTrail;
    GhostTrailEffect* m_ghostTrail;
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCSprite* m_iconSpriteSecondary;
    cocos2d::CCSprite* m_iconSpriteWhitener;
    cocos2d::CCSprite* m_iconGlow;
    cocos2d::CCSprite* m_vehicleSprite;
    cocos2d::CCSprite* m_vehicleSpriteSecondary;
    cocos2d::CCSprite* m_unk604;
    cocos2d::CCSprite* m_vehicleSpriteWhitener;
    cocos2d::CCSprite* m_vehicleGlow;
    PlayerFireBoostSprite* m_swingFireMiddle;
    PlayerFireBoostSprite* m_swingFireBottom;
    PlayerFireBoostSprite* m_swingFireTop;
    cocos2d::CCSprite* m_unk61c;
    cocos2d::CCMotionStreak* m_regularTrail;
    cocos2d::CCMotionStreak* m_shipStreak;
    HardStreak* m_waveTrail;
    float m_unk62c;
    /* PAD */

    float m_unk644;
    float m_unk648;
    /* PAD */

    bool m_unk658;
    bool m_unk659;
    bool m_unk65a;
    bool m_unk65b;
    bool m_playEffects;
    bool m_unk65d;
    bool m_unk65e;
    bool m_unk65f;
    /* PAD */

    float m_unk688;
    float m_unk68c;
    /* PAD */

    bool m_unk6a2;
    bool m_unk6a3;
    /* PAD */

    std::unordered_set<int> m_unk6a4;
    GameObject* m_objectSnappedTo;
    int m_unk6c0;
    /* PAD */

    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    /* PAD */

    cocos2d::CCParticleSystemQuad* m_playerGroundParticles;
    cocos2d::CCParticleSystemQuad* m_trailingParticles;
    cocos2d::CCParticleSystemQuad* m_shipClickParticles;
    cocos2d::CCParticleSystemQuad* m_vehicleGroundParticles;
    cocos2d::CCParticleSystemQuad* m_ufoClickParticles;
    cocos2d::CCParticleSystemQuad* m_robotBurstParticles;
    cocos2d::CCParticleSystemQuad* m_dashParticles;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles1;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles2;
    /* PAD */

    cocos2d::CCParticleSystemQuad* m_landParticles0;
    cocos2d::CCParticleSystemQuad* m_landParticles1;
    float m_unk70c;
    float m_unk710;
    /* PAD */

    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    /* PAD */

    double m_yVelocity;
    bool m_isOnSlope;
    bool m_wasOnSlope;
    /* PAD */

    bool m_isShip;
    bool m_isBird;
    bool m_isBall;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isUpsideDown;
    bool m_isDead;
    bool m_isOnGround;
    bool m_isGoingLeft;
    bool m_isSideways;
    bool m_isSwing;
    /* PAD */

    float m_unk7c8;
    float m_unk7cc;
    float m_unk7d0;
    bool m_isDashing;
    /* PAD */

    float m_vehicleSize;
    float m_playerSpeed;
    float m_unk7e0;
    float m_unk7e4;
    cocos2d::CCPoint m_unk7e8;
    cocos2d::CCPoint m_unk7f0;
    bool m_unk7f8;
    /* PAD */

    cocos2d::CCPoint m_lastGroundedPos;
    cocos2d::CCArray* m_touchingRings;
    std::unordered_set<int> m_unk828;
    GameObject* m_lastActivatedPortal;
    bool m_unk814;
    bool m_unk815;
    cocos2d::ccColor3B m_playerColor1;
    cocos2d::ccColor3B m_playerColor2;
    cocos2d::CCPoint m_position;
    /* PAD */

    bool m_gamevar0060;
    bool m_gamevar0061;
    bool m_gamevar0062;
    /* PAD */

    std::vector<float> m_unk880;
    float m_unk838;
    /* PAD */

    double m_platformerXVelocity;
    /* PAD */

    bool m_isPlatformer;
    int m_unk8ec;
    int m_unk8f0;
    int m_unk8f4;
    int m_unk8f8;
    float m_gravityMod;
    /* PAD */

    cocos2d::CCPoint m_unk904;
    /* PAD */

    std::map<int, bool> m_unk910;
    float m_unk918;
    float m_unk91c;
    /* PAD */

    std::map<int, bool> m_unk924;
    /* PAD */

    std::string m_unk930;
    bool m_unk948;
    /* PAD */

    int m_iconRequestID;
    cocos2d::CCSpriteBatchNode* m_unk950;
    cocos2d::CCSpriteBatchNode* m_unk954;
    cocos2d::CCArray* m_unk958;
    PlayerFireBoostSprite* m_robotFire;
    /* PAD */

    GJBaseGameLayer* m_gameLayer;
    cocos2d::CCLayer* m_parentLayer;
    GJActionManager* m_actionManager;
    /* PAD */

    float m_unk974;
    bool m_unk978;
    bool m_unk979;
    bool m_unk97a;
    bool m_unk97b;
    /* PAD */

};

#endif /* __PLAYEROBJECT_H__ */