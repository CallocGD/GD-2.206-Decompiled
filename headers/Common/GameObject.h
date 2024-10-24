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
    std::string getColorKey(bool p0, bool p1);
    TodoReturn getCustomZLayer();
    TodoReturn getGlowFrame(std::string p0);
    TodoReturn getGroupDisabled();
    TodoReturn getGroupID(int p0);
    TodoReturn getGroupString();
    cocos2d::CCPoint getLastPosition();
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
    float getSlopeAngle();
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
    float slopeYPos(float p0);
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
    virtual std::string getSaveString(GJBaseGameLayer* p0);
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
    int getM_ID();

    bool getUpSlope(); // Seems to be in robtop's code (Somewhere)
    /* PAD */

    /* WARNING: Some names may not be accurate to the names Geode has in the bindings 
     * (Hence why I have not done a complete pull request yet)
     * and some items may have got lost due to decompiling problems on my end because of the long hours of trying 
     * to solve this one if you or anyone you know of has a class member that should be renamed removed or shifted
     * Don't be afraid to send me a pull request, I have not done the C++ Code yet for this one and
     * I enjoy people who get out of their seat and want to help me with this effort. - Calloc */

    int m_innerSectionIndex;
    int m_outerSectionIndex;
    int m_middleSectionIndex;
    bool m_hasExtendedCollision;
    cocos2d::ccColor3B m_color;
    bool m_usesBlackOpacity;
    bool m_useObjectGlowColor;
    float m_blackOpacity;
    bool m_maybeIsBlending;
    bool m_isEditor;
    bool m_groupDisabled;
    bool field23_0x227;
    bool m_notLinked;
    bool m_userCoinUpdated;
    /* PAD 2 bits */
    int m_colorMode;
    GameObject *m_previousObjectState;
    bool m_baseColorUsesHSV;
    bool m_detailColorUsesHSV;
    /* PAD 2 */
    float m_currentPositionX;
    float m_currentPositionY;
    float m_rotation1;
    float m_rotation2;
    float m_rotation3;
    float m_rotation4;
    float m_scaleXInc;
    float m_scaleYInc;
    float m_realPositionX;
    float m_realPositionY;
    bool m_shouldLockX;
    bool m_isFlipX;
    bool m_isFlipY;

    cocos2d::CCPoint m_obBoxOffset;
    bool m_isOriented; 
    cocos2d::CCPoint m_obBoxOffset2;
    OBB2D *m_OBB2D;
    bool m_oriented; // Unknown oriented Related somehow...

    // NOTE: int m_activeMainColorID; int m_activeDetailColorID; Unsure where these ones go...

    cocos2d::CCSprite* m_glow;
    cocos2d::CCSprite* m_glowSprite;
    float m_spriteSizeWidth;
    float m_spriteSizeHeight;
    bool m_hasDetailFrame;
    bool m_maybeActivated;
    bool m_invisible;
    cocos2d::CCParticleSystem *m_particles;
    std::string m_particleString;
    bool m_isParticle;
    bool m_particleUseObjectColor;
    bool m_isRingEffect;
    cocos2d::CCPoint m_obPortalPosition;
    bool m_particleDefaultScale;
    int m_unk;
    int m_linkedGroup;
    cocos2d::CCRect m_objectTextureRect;
    bool m_textureRectDirty;
    bool m_objectPosXDirty;
    bool m_unmodifiedPositionsDirty;
    float m_objectTextureRectHeight;
    cocos2d::CCRect m_transferedObjectRect;
    bool m_objectRectDirty;
    bool m_orientedBoxDirty;
    bool m_positionUpdated;
    bool m_isBlendable;
    bool m_isObjectRect2Dirty;
    bool m_isOrientedRectDirty;
    bool m_hasBeenActivatedP1;
    bool m_hasBeenActivatedP2;
    int m_linkedGroup;
    int field94_0x2e0;
    short m_mainColorMode;
    short m_mainChildColorMode;
    bool m_shouldBlendBaseColor;
    bool m_shouldBlendDetailColor;
    bool m_hasChildren;
    bool m_isAnimatedObject;
    cocos2d::CCSprite* m_colorSprite;
    int m_unk2;
    float m_objectRaidius;
    bool m_objectRectCanRotate;
    float m_OBB2DHeight;
    float m_unkHeight;
    int m_uniqueID;
    int m_type;
    GameObjectType m_previousType;
    GameObjectType m_objectType;
    float m_unmodifiedPositionX;
    float m_unmodifiedPositionY;
    int field119_0x31c;
    double m_realXPosition;
    double m_realYPosition;
    cocos2d::CCPoint m_startPosition;
    bool m_unkBoolean;
    bool m_hasNoAudioScale;
    bool m_disabled;
    /* PAD */
    float m_defaultRotationX;
    float m_defaultRotationY;
    float m_defaultScaleX;
    float m_defaultScaleY;
    float m_UnknownScaleX;
    float m_UnknownScaleY;
    bool m_defaultFlipX;
    bool m_defaultFlipY;
    bool m_shouldHide;
    bool m_isNotEditor;
    int m_unused1;
    bool m_unkBool;
    short field142_0x360;
    short field143_0x362;
    short m_enterChannel;
    short m_objectMaterial;
    short m_parentMode;
    bool m_disableGlow;
    int m_colorIdx;
    int m_objectID;
    bool m_dontTransfrom;
    bool m_defaultDontFade;
    bool m_ignoreEnter;
    bool m_ignoreFade;
    bool m_dontFadeTinted;
    bool m_isTintObject;
    bool m_isDetailOnly;
    short m_customColorType;
    bool m_isDontEnter;
    bool m_isDontFade;
    bool m_hideEffects;
    bool m_hasNoParticles;
    int m_defaultZOrder;
    bool m_isPortal;
    bool m_isShowing;
    bool m_isAudioScale;
    float m_minAudioScale;
    float m_maxAudioScale;
    bool m_noRotation;
    int m_property53;
    bool m_doesntFade;
    bool m_useGlowBGColor;
    bool m_useGlowColor;
    bool m_is1704;
    float m_glowOpacityMultiplier;
    bool m_upSlope;
    int m_slopeType;
    bool m_damaging;
    float m_maybeColorOpacity;
    GJSpriteColor *m_baseColor;
    GJSpriteColor *m_detailColor;
    bool m_isBlendingBatchNode;
    int m_defaultZLayer;
    ZLayer m_zLayer;
    int m_zOrder;
    int m_customZLayer;
    bool m_isSelected;

    /* No clue on what type m_textblock is... */
    void *m_textblock;
    cocos2d::CCPoint field212_0x3dc; // Unk Point
    bool m_zLayerWasSet;
    bool field214_0x3e5;
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


    bool m_isNoTouch;
    cocos2d::CCSize m_size; // Maybe LastDefaultScale?
    cocos2d::CCPoint m_lastPosition;
    cocos2d::ccColor3B m_color2;
    int m_classID;
    bool m_isTrigger;
    bool m_isTriggerGroup;
    bool field250_0x43a;
    bool m_ignoreEditorDuration;
    bool m_isStoppableTrigger;
    bool m_isEditorSpawnableTrigger;
    bool m_dontCountTowardsLimit;
    bool m_isHighDetail;
    cocos2d::CCNode *m_colorSprite1;
    cocos2d::CCNode *m_colorSprite2;
    GJEffectManager *m_effectManager;
    bool m_unkEffectObject;
    bool m_isNotDamaging;
    bool m_isStaticGroup;
    bool m_unkRotation;
    bool m_isPixelScaleObject;
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
    bool m_is749;
    bool field275_0x45c;
    float m_unkScaleMod;
    float m_scaleModX;
    float m_scaleModY;
    int m_property155;
    int m_property156;
    unsigned char m_opacity;
    int field288_0x478;
    int field289_0x47c;
    int field290_0x480;
    bool m_isUIObject;
    bool field293_0x486;
};

#endif /* __GAMEOBJECT_H__ */