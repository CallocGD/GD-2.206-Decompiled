#ifndef __GAMEOBJECT_H__
#define __GAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCSpritePlus;

class GameObject: public CCSpritePlus {
public:
    TodoReturn addColorSprite(std::string p0);
    TodoReturn addColorSpriteToParent(bool p0);
    TodoReturn addColorSpriteToSelf();
    TodoReturn addCustomBlackChild(std::string p0, float p1, bool p2);
    TodoReturn addCustomChild(std::string p0, cocos2d::CCPoint p1, int p2);
    TodoReturn addCustomColorChild(std::string p0);
    TodoReturn addEmptyGlow();
    TodoReturn addGlow(std::string p0);
    TodoReturn addInternalChild(cocos2d::CCSprite* p0, std::string p1, cocos2d::CCPoint p2, int p3);
    TodoReturn addInternalCustomColorChild(std::string p0, cocos2d::CCPoint p1, int p2);
    TodoReturn addInternalGlowChild(std::string p0, cocos2d::CCPoint p1);
    TodoReturn addNewSlope01(bool p0);
    TodoReturn addNewSlope01Glow(bool p0);
    TodoReturn addNewSlope02(bool p0);
    TodoReturn addNewSlope02Glow(bool p0);
    TodoReturn addRotation(float p0, float p1);
    TodoReturn addRotation(float p0);
    TodoReturn addToColorGroup(int p0);
    TodoReturn addToCustomScaleX(float p0);
    TodoReturn addToCustomScaleY(float p0);
    TodoReturn addToOpacityGroup(int p0);
    TodoReturn addToTempOffset(double p0, double p1);
    TodoReturn assignUniqueID();
    TodoReturn belongsToGroup(int p0);
    TodoReturn calculateOrientedBox();
    TodoReturn canChangeCustomColor();
    TodoReturn canChangeMainColor();
    TodoReturn canChangeSecondaryColor();
    TodoReturn canRotateFree();
    TodoReturn colorForMode(int p0, bool p1);
    TodoReturn commonInteractiveSetup();
    void commonSetup();
    TodoReturn copyGroups(GameObject* p0);
    TodoReturn createAndAddParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);
    TodoReturn createColorGroupContainer(int p0);
    TodoReturn createGlow(std::string p0);
    void createGroupContainer(int p0);
    TodoReturn createOpacityGroupContainer(int p0);
    TodoReturn createSpriteColor(int p0);
    static GameObject* createWithFrame(char const* p0);
    static GameObject* createWithKey(int p0);
    void deselectObject();
    void determineSlopeDirection();
    TodoReturn didScaleXChange();
    TodoReturn didScaleYChange();
    TodoReturn dirtifyObjectPos();
    TodoReturn dirtifyObjectRect();
    TodoReturn disableObject();
    TodoReturn dontCountTowardsLimit();
    TodoReturn duplicateAttributes(GameObject* p0);
    TodoReturn duplicateColorMode(GameObject* p0);
    void duplicateValues(GameObject* p0);
    TodoReturn editorColorForCustomMode(int p0);
    TodoReturn editorColorForMode(int p0);
    TodoReturn fastRotateObject(float p0);
    TodoReturn getActiveColorForMode(int p0, bool p1);
    TodoReturn getBallFrame(int p0);
    TodoReturn getBoundingRect();
    TodoReturn getBoxOffset();
    TodoReturn getColorFrame(std::string p0);
    TodoReturn getColorIndex();
    gd::string getColorKey(bool p0, bool p1);
    TodoReturn getCustomZLayer();
    TodoReturn getGlowFrame(std::string p0);
    TodoReturn getGroupDisabled();
    TodoReturn getGroupID(int p0);
    TodoReturn getGroupString();
    TodoReturn getLastPosition();
    TodoReturn getMainColor();
    TodoReturn getMainColorMode();
    TodoReturn getObjectDirection();
    TodoReturn getObjectRadius();
    TodoReturn getObjectRectDirty();
    TodoReturn getObjectRectPointer();
    TodoReturn getObjectZLayer();
    TodoReturn getObjectZOrder();
    TodoReturn getOrientedRectDirty();
    TodoReturn getOuterObjectRect();
    TodoReturn getParentMode();
    TodoReturn getRelativeSpriteColor(int p0);
    TodoReturn getScalePosDelta();
    TodoReturn getSecondaryColor();
    TodoReturn getSecondaryColorMode();
    TodoReturn getSlopeAngle();
    cocos2d::CCPoint* getStartPos(cocos2d::CCPoint* p0);
    GameObjectType getType();
    TodoReturn getUnmodifiedPosition();
    TodoReturn groupColor(cocos2d::ccColor3B const& p0, bool p1);
    TodoReturn groupOpacityMod();
    TodoReturn groupWasDisabled();
    TodoReturn groupWasEnabled();
    TodoReturn hasSecondaryColor();
    bool ignoreEditorDuration();
    TodoReturn ignoreEnter();
    TodoReturn ignoreFade();
    bool init(char const* p0);
    bool isBasicEnterEffect(int p0);
    bool isBasicTrigger();
    bool isColorObject();
    bool isColorTrigger();
    bool isConfigurablePortal();
    bool isEditorSpawnableTrigger();
    bool isFacingDown();
    bool isFacingLeft();
    bool isSettingsObject();
    bool isSpawnableTrigger();
    bool isSpecialObject();
    bool isSpeedObject();
    bool isStoppableTrigger();
    bool isTrigger();
    void loadGroupsFromString(std::string p0);
    TodoReturn makeInvisible();
    static GameObject* objectFromVector(std::vector<std::string>& p0, std::vector<void*>& p1, GJBaseGameLayer* p2, bool p3);
    TodoReturn opacityModForMode(int p0, bool p1);
    TodoReturn parentForZLayer(int p0, bool p1, int p2);
    TodoReturn perspectiveColorFrame(char const* p0, int p1);
    TodoReturn perspectiveFrame(char const* p0, int p1);
    void playDestroyObjectAnim(GJBaseGameLayer* p0);
    TodoReturn playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, float p10, float p11);
    TodoReturn playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4);
    void playShineEffect();
    TodoReturn quickUpdatePosition();
    TodoReturn quickUpdatePosition2();
    TodoReturn removeColorSprite();
    TodoReturn removeGlow();
    TodoReturn reorderColorSprite();
    TodoReturn resetColorGroups();
    TodoReturn resetGroupDisabled();
    TodoReturn resetGroups();
    TodoReturn resetMainColorMode();
    TodoReturn resetMID();
    TodoReturn resetMoveOffset();
    TodoReturn resetRScaleForced();
    TodoReturn resetSecondaryColorMode();
    void setAreaOpacity(float p0, float p1, int p2);
    void setCustomZLayer(int p0);
    void setDefaultMainColorMode(int p0);
    void setDefaultSecondaryColorMode(int p0);
    void setGlowOpacity(unsigned char p0);
    void setLastPosition(cocos2d::CCPoint const& p0);
    void setMainColorMode(int p0);
    void setSecondaryColorMode(int p0);
    TodoReturn setupColorSprite(int p0, bool p1);
    TodoReturn setupPixelScale();
    TodoReturn setupSpriteSize();
    bool shouldBlendColor(GJSpriteColor* p0, bool p1);
    TodoReturn shouldLockX();
    TodoReturn shouldNotHideAnimFreeze();
    TodoReturn shouldShowPickupEffects();
    TodoReturn slopeFloorTop();
    TodoReturn slopeWallLeft();
    TodoReturn slopeYPos(cocos2d::CCRect p0);
    TodoReturn slopeYPos(float p0);
    TodoReturn slopeYPos(GameObject* p0);
    TodoReturn spawnDefaultPickupParticle(GJBaseGameLayer* p0);
    TodoReturn updateBlendMode();
    TodoReturn updateCustomColorType(short p0);
    void updateCustomScaleX(float p0);
    void updateCustomScaleY(float p0);
    TodoReturn updateHSVState();
    TodoReturn updateIsOriented();
    TodoReturn updateMainColorOnly();
    TodoReturn updateMainOpacity();
    void updateObjectEditorColor();
    TodoReturn updateSecondaryColorOnly();
    TodoReturn updateSecondaryOpacity();
    TodoReturn updateStartPos();
    TodoReturn updateUnmodifiedPositions();
    TodoReturn usesFreezeAnimation();
    TodoReturn usesSpecialAnimation();
    virtual void update(float p0);
    virtual void setScaleX(float p0);
    virtual void setScaleY(float p0);
    virtual void setScale(float p0);
    virtual void setPosition(cocos2d::CCPoint const& p0);
    virtual void setVisible(bool p0);
    virtual void setRotation(float p0);
    virtual void setRotationX(float p0);
    virtual void setRotationY(float p0);
    virtual void setOpacity(unsigned char p0);
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);
    virtual void setChildColor(cocos2d::ccColor3B const& p0);
    virtual void setFlipX(bool p0);
    virtual void setFlipY(bool p0);
    virtual void firstSetup();
    virtual void customSetup();
    virtual void setupCustomSprites(std::string p0);
    virtual TodoReturn addMainSpriteToParent(bool p0);
    virtual void resetObject();
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, std::vector<int> const* p2);
    virtual void activateObject();
    virtual void deactivateObject(bool p0);
    virtual TodoReturn transferObjectRect(cocos2d::CCRect& p0);
    virtual cocos2d::CCRect const& getObjectRect();
    virtual cocos2d::CCRect getObjectRect(float p0, float p1);
    virtual TodoReturn getObjectRect2(float p0, float p1);
    virtual TodoReturn getObjectTextureRect();
    virtual cocos2d::CCPoint getRealPosition();
    virtual void setStartPos(cocos2d::CCPoint p0);
    virtual void updateStartValues();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    virtual TodoReturn claimParticle();
    virtual TodoReturn unclaimParticle();
    virtual TodoReturn particleWasActivated();
    virtual bool isFlipX();
    virtual bool isFlipY();
    virtual void setRScaleX(float p0);
    virtual void setRScaleY(float p0);
    virtual void setRScale(float p0);
    virtual TodoReturn getRScaleX();
    virtual TodoReturn getRScaleY();
    virtual void setRRotation(float p0);
    virtual void triggerActivated(float p0);
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);
    virtual void setGlowColor(cocos2d::ccColor3B const& p0);
    virtual TodoReturn restoreObject();
    virtual TodoReturn animationTriggered();
    virtual void selectObject(cocos2d::ccColor3B p0);
    virtual TodoReturn activatedByPlayer(PlayerObject* p0);
    virtual TodoReturn hasBeenActivatedByPlayer(PlayerObject* p0);
    virtual TodoReturn hasBeenActivated();
    virtual TodoReturn getOrientedBox();
    virtual TodoReturn updateOrientedBox();
    virtual TodoReturn getObjectRotation();
    virtual TodoReturn updateMainColor(cocos2d::ccColor3B const& p0);
    virtual TodoReturn updateSecondaryColor(cocos2d::ccColor3B const& p0);
    virtual void addToGroup(int p0);
    virtual void removeFromGroup(int p0);
    virtual TodoReturn saveActiveColors();
    virtual TodoReturn spawnXPosition();
    virtual TodoReturn canAllowMultiActivate();
    virtual TodoReturn blendModeChanged();
    virtual TodoReturn updateParticleColor(cocos2d::ccColor3B const& p0);
    virtual TodoReturn updateParticleOpacity(unsigned char p0);
    virtual TodoReturn updateMainParticleOpacity(unsigned char p0);
    virtual TodoReturn updateSecondaryParticleOpacity(unsigned char p0);
    virtual TodoReturn canReverse();
    virtual bool isSpecialSpawnObject();
    virtual TodoReturn canBeOrdered();
    virtual TodoReturn getObjectLabel();
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* p0);
    virtual TodoReturn shouldDrawEditorHitbox();
    virtual TodoReturn getHasSyncedAnimation();
    virtual TodoReturn getHasRotateAction();
    virtual TodoReturn canMultiActivate(bool p0);
    virtual TodoReturn updateTextKerning(int p0);
    virtual TodoReturn getTextKerning();
    virtual void setObjectRectDirty(bool p0);
    virtual void setOrientedRectDirty(bool p0);
    virtual void setType(GameObjectType p0);
    /* PAD */

    int m_innerSectionIndex;
    int m_outerSectionIndex;
    int m_middleSectionIndex;
    bool m_hasExtendedCollision;
    /* PAD */

    int m_activeMainColorID;
    int m_activeDetailColorID;
    /* PAD */

    cocos2d::CCSprite* m_glowSprite;
    /* PAD */

    float m_unk288;
    float m_unk28c;
    short m_unk290;
    bool m_unk292;
    /* PAD */

    std::string m_particleString;
    /* PAD */

    bool m_particleUseObjectColor;
    /* PAD */

    int m_linkedGroup;
    /* PAD */

    cocos2d::CCSprite* m_colorSprite;
    /* PAD */

    int m_uniqueID;
    GameObjectType m_objectType;
    /* PAD */

    double m_realXPosition;
    double m_realYPosition;
    cocos2d::CCPoint m_startPosition;
    /* PAD */

    bool m_hasNoAudioScale;
    bool m_unk34a;
    /* PAD */

    float m_currentScaleX;
    float m_currentScaleY;
    /* PAD */

    short m_enterChannel;
    short m_objectMaterial;
    /* PAD */

    bool m_hasNoGlow;
    int m_targetColor;
    int m_objectID;
    /* PAD */

    short m_customColorType;
    bool m_isDontEnter;
    bool m_isDontFade;
    bool m_hasNoEffects;
    bool m_hasNoParticles;
    /* PAD */

    int m_property53;
    /* PAD */

    GJSpriteColor* m_baseColor;
    GJSpriteColor* m_detailColor;
    /* PAD */

    ZLayer m_zLayer;
    int m_zOrder;
    /* PAD */

    bool m_isSelected;
    /* PAD */

    bool m_shouldUpdateColorSprite;
    /* PAD */

    bool m_hasGroupParent;
    bool m_hasAreaParent;
    float m_scaleX;
    float m_scaleY;
    std::array<short, 10>* m_groups;
    short m_groupCount;
    bool m_hasGroupParentsString;
    std::array<short, 10>* m_colorGroups;
    short m_colorGroupCount;
    std::array<short, 10>* m_opacityGroups;
    short m_opacityGroupCount;
    short m_editorLayer;
    short m_editorLayer2;
    /* PAD */

    bool m_isNoTouch;
    /* PAD */

    cocos2d::CCPoint m_lastPosition;
    /* PAD */

    bool m_isHighDetail;
    /* PAD */

    bool m_isPassable;
    bool m_isHide;
    bool m_isNonStickX;
    bool m_isNonStickY;
    bool m_isIceBlock;
    bool m_isGripSlope;
    bool m_isScaleStick;
    bool m_isExtraSticky;
    bool m_isDontBoostY;
    bool m_isDontBoostX;
    /* PAD */

    int m_property155;
    int m_property156;
    /* PAD */

};

#endif /* __GAMEOBJECT_H__ */