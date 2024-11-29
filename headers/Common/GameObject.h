#ifndef __GAMEOBJECT_H__
#define __GAMEOBJECT_H__


#include "../includes.h"

/* -- Predefined Subclasses -- */

class CCSpritePlus;

class GameObject: public CCSpritePlus {
public:
    // virtual ~GameObject();
    GameObject();
    static GameObject* createWithFrame(char const* name);
    static GameObject* createWithKey(int key);
    static GameObject* objectFromVector(std::vector<std::string>& strVect, std::vector<void*>& objects, GJBaseGameLayer* base, bool unk);

    virtual void update(float);
    virtual void setScaleX(float);
    virtual void setScaleY(float);
    virtual void setScale(float);
    virtual void setPosition(cocos2d::CCPoint const&);
    virtual void setVisible(bool);
    virtual void setRotation(float);
    virtual void setRotationX(float);
    virtual void setRotationY(float);
    virtual void setOpacity(unsigned char);
    virtual bool initWithTexture(cocos2d::CCTexture2D*);
    virtual void setChildColor(cocos2d::ccColor3B const&);
    virtual void setFlipX(bool);
    virtual void setFlipY(bool);
    virtual void firstSetup();
    virtual void customSetup();
    virtual void setupCustomSprites(std::string);
    virtual void addMainSpriteToParent(bool) ;
    virtual void resetObject();
    virtual void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    virtual void activateObject();
    virtual void deactivateObject(bool);
    virtual void transferObjectRect(cocos2d::CCRect&);
    virtual cocos2d::CCRect const& getObjectRect();
    virtual cocos2d::CCRect getObjectRect(float, float) ;
    virtual cocos2d::CCRect getObjectRect2(float, float);
    virtual cocos2d::CCRect getObjectTextureRect();
    virtual cocos2d::CCPoint getRealPosition();
    virtual void setStartPos(cocos2d::CCPoint);
    virtual void updateStartValues();
    virtual void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    virtual std::string getSaveString(GJBaseGameLayer*);
    virtual void claimParticle();
    virtual void unclaimParticle();
    virtual void particleWasActivated();
    virtual bool isFlipX();
    virtual bool isFlipY();
    virtual void setRScaleX(float);
    virtual void setRScaleY(float);
    virtual void setRScale(float);
    virtual float getRScaleX();
    virtual float getRScaleY();
    virtual void setRRotation(float);
    virtual void triggerActivated(float);
    virtual void setObjectColor(cocos2d::ccColor3B const&);
    virtual void setGlowColor(cocos2d::ccColor3B const&);
    virtual void restoreObject();
    virtual void animationTriggered();
    virtual void selectObject(cocos2d::ccColor3B);
    virtual void activatedByPlayer(PlayerObject*);
    virtual bool hasBeenActivatedByPlayer(PlayerObject*);
    virtual bool hasBeenActivated();
    virtual OBB2D* getOrientedBox();
    virtual void updateOrientedBox();
    virtual float getObjectRotation();
    virtual void updateMainColor(cocos2d::ccColor3B const&);
    virtual void updateSecondaryColor(cocos2d::ccColor3B const&);
    virtual int addToGroup(int);
    virtual void removeFromGroup(int);
    virtual void saveActiveColors();
    virtual float spawnXPosition();
    virtual bool canAllowMultiActivate();
    virtual void blendModeChanged();
    virtual void updateParticleColor(cocos2d::ccColor3B const&);
    virtual void updateParticleOpacity(unsigned char);
    virtual void updateMainParticleOpacity(unsigned char);
    virtual void updateSecondaryParticleOpacity(unsigned char);
    virtual bool canReverse();
    virtual bool isSpecialSpawnObject();
    virtual bool canBeOrdered();
    virtual cocos2d::CCLabelBMFont* getObjectLabel();
    virtual void setObjectLabel(cocos2d::CCLabelBMFont*);
    virtual bool shouldDrawEditorHitbox();
    virtual bool getHasSyncedAnimation();
    virtual bool getHasRotateAction();
    virtual bool canMultiActivate(bool);
    virtual void updateTextKerning(int);
    virtual int getTextKerning();
    virtual bool getObjectRectDirty();
    virtual void setObjectRectDirty(bool);
    virtual bool getOrientedRectDirty();
    virtual void setOrientedRectDirty(bool);
    virtual GameObjectType getType();
    virtual void setType(GameObjectType);
    virtual cocos2d::CCPoint getStartPos();

    void addColorSprite(std::string);
    void addColorSpriteToParent(bool);
    void addColorSpriteToSelf();
    cocos2d::CCSprite* addCustomBlackChild(std::string, float, bool);
    cocos2d::CCSprite* addCustomChild(std::string, cocos2d::CCPoint, int);
    cocos2d::CCSprite* addCustomColorChild(std::string);
    void addEmptyGlow();
    void addGlow(std::string);
    cocos2d::CCSprite* addInternalChild(cocos2d::CCSprite*, std::string, cocos2d::CCPoint, int);
    cocos2d::CCSprite* addInternalCustomColorChild(std::string, cocos2d::CCPoint, int);
    cocos2d::CCSprite* addInternalGlowChild(std::string, cocos2d::CCPoint);
    void addNewSlope01(bool);
    void addNewSlope01Glow(bool);
    void addNewSlope02(bool);
    void addNewSlope02Glow(bool);
    void addRotation(float, float);
    void addRotation(float);
    void addToColorGroup(int);
    void addToCustomScaleX(float);
    void addToCustomScaleY(float);
    void addToOpacityGroup(int);
    void addToTempOffset(double, double);
    void assignUniqueID();
    bool belongsToGroup(int);

    /* This should not be void */
    cocos2d::CCRect calculateOrientedBox();
    
    bool canChangeCustomColor();
    bool canChangeMainColor();
    bool canChangeSecondaryColor();
    bool canRotateFree();
    cocos2d::ccColor3B colorForMode(int, bool);
    void commonInteractiveSetup();
    void commonSetup();
    void copyGroups(GameObject*);
    cocos2d::CCParticleSystemQuad* createAndAddParticle(int p0, char const* plistName, int p2, cocos2d::tCCPositionType positionType);
    void createColorGroupContainer(int);
    void createGlow(std::string);

    void createGroupContainer(int size){
        if (!m_groups) {
            auto groups = new short[size];
            memset(groups, 0, size * sizeof(short));
            m_groups = reinterpret_cast<decltype(m_groups)>(groups);
        }
    }
    void createOpacityGroupContainer(int);
    void createSpriteColor(int);
    void deselectObject();
    inline void destroyObject() {
        m_isDisabled = true;
        /* I had a better name than m_isDisabled2... */
        m_previewIsDisabled = true;
        setOpacity(0);
    }
    void determineSlopeDirection();
    bool didScaleXChange();
    bool didScaleYChange();
    void dirtifyObjectPos();
    void dirtifyObjectRect();
    void disableObject();
    bool dontCountTowardsLimit();
    void duplicateAttributes(GameObject*);
    void duplicateColorMode(GameObject*);
    void duplicateValues(GameObject*);
    cocos2d::ccColor3B editorColorForCustomMode(int);
    cocos2d::ccColor3B editorColorForMode(int);
    void fastRotateObject(float);
    cocos2d::ccColor3B getActiveColorForMode(int, bool);
    char* getBallFrame(int);
    cocos2d::CCRect getBoundingRect();
    cocos2d::CCPoint getBoxOffset();
    std::string getColorFrame(std::string);
    int getColorIndex();
    std::string getColorKey(bool, bool);
    ZLayer getCustomZLayer();
    
    std::string getGlowFrame(std::string frame);
    bool getGroupDisabled();
    int getGroupID(int);
    std::string getGroupString();
    cocos2d::CCPoint const& getLastPosition();
    GJSpriteColor* getMainColor();
    int getMainColorMode();
    int getObjectDirection();
    float getObjectRadius();
    cocos2d::CCRect* getObjectRectPointer();
    ZLayer getObjectZLayer();
    int getObjectZOrder();
    cocos2d::CCRect getOuterObjectRect();
    int getParentMode();
    GJSpriteColor* getRelativeSpriteColor(int);
    cocos2d::CCPoint getScalePosDelta();
    GJSpriteColor* getSecondaryColor();
    int getSecondaryColorMode();
    float getSlopeAngle();
    cocos2d::CCPoint getUnmodifiedPosition();
    cocos2d::ccColor3B groupColor(cocos2d::ccColor3B const&, bool);
    float groupOpacityMod();
    void groupWasDisabled();
    void groupWasEnabled();
    bool hasSecondaryColor();
    bool ignoreEditorDuration();
    bool ignoreEnter();
    bool ignoreFade();
    bool init(char const*);
    bool isBasicEnterEffect(int);
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
    void loadGroupsFromString(std::string);
    TodoReturn makeInvisible();
    TodoReturn makeVisible();
    float opacityModForMode(int, bool);
    // Someone made an Oopsies with CCSpriteBatchNode on this function in the GeodeBindings...
    cocos2d::CCNode* parentForZLayer(int, bool, int);
    std::string perspectiveColorFrame(char const*, int);
    std::string perspectiveFrame(char const*, int);
    void playDestroyObjectAnim(GJBaseGameLayer*);
    void playPickupAnimation(cocos2d::CCSprite*, float, float, float, float, float, float, float, float, bool, float, float);
    void playPickupAnimation(cocos2d::CCSprite*, float, float, float, float);
    void playShineEffect();
    void quickUpdatePosition();
    void quickUpdatePosition2();
    void removeColorSprite();
    void removeGlow();
    void reorderColorSprite();
    void resetColorGroups();
    void resetGroupDisabled();
    void resetGroups();
    void resetMainColorMode();
    void resetMID();
    void resetMoveOffset();
    void resetRScaleForced();
    void resetSecondaryColorMode();
    void setAreaOpacity(float, float, int);
    void setCustomZLayer(int);
    void setDefaultMainColorMode(int);
    void setDefaultSecondaryColorMode(int);
    void setGlowOpacity(unsigned char);
    void setLastPosition(cocos2d::CCPoint const&);
    void setMainColorMode(int);
    void setSecondaryColorMode(int);
    void setupColorSprite(int, bool);
    void setupPixelScale();
    void setupSpriteSize();
    bool shouldBlendColor(GJSpriteColor*, bool);
    bool shouldLockX();
    bool shouldNotHideAnimFreeze();
    bool shouldShowPickupEffects();
    bool slopeFloorTop();
    bool slopeWallLeft();
    double slopeYPos(cocos2d::CCRect);
    double slopeYPos(float);
    double slopeYPos(GameObject*);
    void spawnDefaultPickupParticle(GJBaseGameLayer*) ;
    void updateBlendMode();
    void updateCustomColorType(short);
    void updateCustomScaleX(float);
    void updateCustomScaleY(float);
    void updateHSVState();
    void updateIsOriented();
    void updateMainColor();
    void updateMainColorOnly();
    void updateMainOpacity();
    void updateObjectEditorColor();
    void updateSecondaryColor();
    void updateSecondaryColorOnly();
    void updateSecondaryOpacity();
    void updateStartPos();
    void updateUnmodifiedPositions();
    void usesFreezeAnimation();
    void usesSpecialAnimation();
    int getM_ID();

    bool getUpSlope(); // Seems to be in robtop's code (Somewhere)
    /* PAD */

    /* At long last this shit has been solved for 2.2074 (I'll rename this repo when I get to it) - Calloc */
    int m_someOtherIndex;
    int m_innerSectionIndex;
    int m_outerSectionIndex;
    bool m_hasExtendedCollision;
    cocos2d::ccColor3B m_groupColor;
    bool m_hasExtendedCollision2;
    /* I have a feeling this is the pulse color */
    cocos2d::ccColor3B m_maybeGroupColor;
    bool m_useBlackOpacity;
    bool m_maybeBlackChildIsBlendable;
    cocos2d::ccColor3B m_blackChildOpacity;
    bool m_inLevelEditor;
    bool m_groupEnabled;
    bool m_editorEnabled;
    bool m_isGroupDisabled;
    bool m_unkBooleanFlag;
    bool m_notLinked;
  
    int m_activeMainColorID;
    int m_activeDetailColorID;
    bool m_baseColorUsesHSV;
    bool m_detailColorUsesHSV;
    short m_unkShort;
    float m_positionXOffset;
    float m_postionYOffset;
    float m_rotationXOffset;
    float m_endRotationX;
    float m_rotationYOffset;
    float m_endRotationY;
    float m_scaleXOffset;
    float m_scaleYOffset;
    float m_realPositionX;
    float m_realPositionY;
    bool m_shouldLockX;
    bool m_isFlipX;
    bool m_isFlipY;

    cocos2d::CCPoint m_customBoxOffset;
    bool m_boxOffsetCalculated;

    cocos2d::CCPoint m_boxOffset;
    struct OBB2D *m_OBB2D;
    bool m_shouldUseOuterOb;

    cocos2d::CCSprite *m_glowSpriteMain;
    cocos2d::CCSprite *m_glowSpriteDetail;
    float m_width;
    float m_height;
    bool m_hasSepcialChild;
    bool m_isActivated;
    bool m_previewIsDisabled;

    cocos2d::CCParticleSystemQuad *m_particles;
    std::string m_particleString;
    bool m_hasParticles;
    bool m_particleUseObjectColor;
    bool m_hasColorSprite;
    
    cocos2d::CCPoint m_ParticlePostion;
    float m_particleScale;
    cocos2d::CCRect m_textureRect;
    bool m_isDirty;
    bool m_isObjectPosDirty;
    bool m_isUnmodifiedPositionsDirty;

    float m_objectTextureRectHeight;
    cocos2d::CCRect m_objectRect;
    bool m_isObjectRectDirty;
    bool m_isOrientedBoxDirty;
    bool m_colorSpriteLocked;
    bool m_isBlendable; /* m_unk353 */
    bool m_canRoateFree;
    bool m_isMirroredByScale;
    bool m_hasBeenActivatedP1;
    bool m_hasBeenActivatedP2;
    int m_linkedGroup;
    cocos2d::CCObject *m_unkObject;
    short m_mainColorMode;
    short m_mainChildColorMode;
    bool m_shouldBlendBaseColor;
    bool m_shouldBlendDetailColor;
    bool m_hasCustomChild;
    bool m_isAnimatedObject;
    cocos2d::CCSprite *m_colorSprite;
    bool m_isParticleObject;

    float m_objectRadius;
    bool m_isRotationAligned;

    float m_spriteWidthScale;
    float m_spriteHeightScale;
    int m_uniqueID;
    int m_objectType; /* GameObjectType */
    int m_savedObjectType; /* GameObjectType */
    int m_unkObjectType; /* Another Object Type */
    float m_unmodifiedPositionX;
    float m_unmodifiedPositionY;
    // m_110 was named that becasue I have it setup as GameObject_data in ghidra and it doesn't seem to be used for anything at the moment... 
    // (Maybe it's used in multiplayer?)
    void *m_110;
    double m_lastPositionX;
    double m_lastPositionY;
    cocos2d::CCPoint m_startPosition;
    bool m_hasAudioScale;
    bool m_hasNoAudioScale;
    bool m_isDisabled;

    float m_startRotationX;
    float m_startRotationY;
    float m_startScaleX;
    float m_startScaleY;
    float m_customScaleX;
    float m_customScaleY;
    bool m_startFlipX;
    bool m_startFlipY;
    bool m_isHidden;
    bool m_isInvisible;
    float m_someAngleValue;
    /* has to do with some level-RNG */
    short m_random;
    /* Maybe another Random type Variable? I'm ignoring this one because I cannot find it anywhere in the code... */
    bool m_unkBool;

    short m_enterValueX;
    short m_enterValueY;
    short m_enterChannel;
    short m_objectMaterial;
    bool m_enterReset;

    short m_maybeAnimationScaleValue;
    bool m_disableGlow;

    int m_colorIdx;
    int m_objectID;
    bool m_dontTransfrom;
    bool m_isSolid;
    bool m_ignoreEnter;
    bool m_ignoreFade;
    bool m_dontFadeTinted;
    bool m_isTintObject;
    bool m_isDetailOnly;

    short m_customColorType;
    bool m_isDontEnter;
    bool m_isDontFade;
    bool m_hasNoEffects;
    bool m_hasNoParticles;

    int m_defaultZOrder;
    bool m_isPortalObject;
    bool m_colorZLayerRelated;
    bool m_isAudioScale;

    float m_minAudioScale;
    float m_maxAudioScale;
    bool m_particleLocked;

    int m_property53;
    bool m_doesntFade;
    bool m_useGlowBGColor;
    bool m_useGlowColor;
    bool m_cantColorGlow;
    float m_opacityMod;
    bool m_upSlope;

    int m_slopeDirection;
    bool m_maybeShouldFixSlopes;

    float m_colorOpacityMod2;
    GJSpriteColor *m_baseColor;
    GJSpriteColor *m_detailColor;
    bool m_isBlendingBatchNode;

    int m_defaultZLayer;
    bool m_zFixedZLayer;

    int m_zLayer;
    int m_zOrder;
    bool m_selected;
    bool m_isSelected;

    int m_unk460;
    cocos2d::CCPoint m_unk46d;
    bool m_shouldUpdateColorSprite;
    bool m_maybeToggleColorParent;
    bool m_toggleGroupParent; /* property 34 */
    bool m_toggleAreaParent; /* property 279 */
    float m_scaleX; /* property 128 */
    float m_scaleY; /* property 129 */


    // I hate these arrays with a 10 foot pole...

    std::array<short, 10>* m_groups;
    short m_groupCount;
    bool m_hasGroupParentsString;


    std::array<short, 10>* m_colorGroups;
    short m_colorgroupCount;

    std::array<short, 10>* m_opacityGroups;
    short m_opacityGroupSize;

    short m_editorLayer; /* property 20 */
    short m_editorLayer2; /* property 61 */

    int m_enabledGroupsCounter;
    bool m_updateCustomContentSize;
    bool m_hasContentSize;
    bool m_isNoTouch;

    cocos2d::CCSize m_lastSize;
    cocos2d::CCPoint m_lastPosition;
    int m_unkState1;
    int m_followActionState;
    int m_unkState2;
    bool m_someGameStateValue;
    cocos2d::ccColor3B m_color2;
    int m_classID;
    bool m_isTrigger;
    bool m_isTriggerGroup;
    bool m_isTriggerObject;
    bool m_ignoreEditorDuration;
    bool m_isStoppableTrigger;
    bool m_isEditorSpawnableTrigger;
    bool m_dontCountTowardsLimit;
    bool m_isHighDetail;
    cocos2d::CCNode *m_colorSprite1;
    cocos2d::CCNode *m_colorSprite2;
    GJEffectManager *m_goEffectManager;
    bool m_maybeIsGoEffectObject;
    bool m_isMainDecoration;
    bool m_isDetailDecoration;
    bool m_isNotDamaging;
    bool m_maybeNotColorable;
    bool m_isPassable; /* 134 */
    bool m_isHide; /* 135 */
    bool m_isNonStickX; /* 136 */
    bool m_isNonStickY; /* 289 */
    bool m_iceBlock;
    bool m_isGripSlope; /* 193 */
    bool m_isScaleStick; /* 356 */
    bool m_isExtraSticky; /* 495 */
    bool m_isDontBoostY; /* 496 */
    bool m_isDontBoostX;
    bool m_isTeleportObject;
    bool m_objectRotated;
 
    float m_pixelScaleXY;
    float m_pixelScaleX;
    float m_pixelScaleY;
    int m_property155;
    int m_property156;
    /* Lazy, don't want to go out and find what to name the opengl shit rn... */
    unsigned char m_areaOpacityGlu;
    
    float m_areaOpacityFloat;
    int m_areaOpacityInt;
    int m_maybeSavedPositionState;
    bool m_maybeIgnoreTempOffset;
    bool m_isUIObject;
    bool m_isSpecialObject;
};

#endif /* __GAMEOBJECT_H__ */
