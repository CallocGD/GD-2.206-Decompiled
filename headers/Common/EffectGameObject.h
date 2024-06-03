#ifndef __EFFECTGAMEOBJECT_H__
#define __EFFECTGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EnhancedGameObject;

class EffectGameObject: public EnhancedGameObject {
public:
    static EffectGameObject* create(char const* p0);
    TodoReturn getTargetColorIndex();
    bool init(char const* p0);
    TodoReturn playTriggerEffect();
    TodoReturn resetSpawnTrigger();
    void setTargetID(int p0);
    void setTargetID2(int p0);
    TodoReturn triggerEffectFinished();
    TodoReturn updateInteractiveHover(float p0);
    TodoReturn updateSpecialColor();
    TodoReturn updateSpeedModType();
    virtual void setOpacity(unsigned char p0);
    virtual void firstSetup();
    virtual void customSetup();
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, std::vector<int> const* p2);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    virtual void setRScaleX(float p0);
    virtual void setRScaleY(float p0);
    virtual void triggerActivated(float p0);
    virtual TodoReturn restoreObject();
    virtual TodoReturn spawnXPosition();
    virtual TodoReturn canReverse();
    virtual bool isSpecialSpawnObject();
    virtual TodoReturn canBeOrdered();
    virtual TodoReturn getObjectLabel();
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* p0);
    virtual TodoReturn stateSensitiveOff(GJBaseGameLayer* p0);
    bool m_unknownBool;
    cocos2d::ccColor3B m_triggerTargetColor;
    float m_duration;
    float m_opacity;
    /* PAD */

    int m_targetGroupID;
    int m_centerGroupID;
    bool m_isTouchTriggered;
    bool m_isSpawnTriggered;
    bool m_hasCenterEffect;
    float m_shakeStrength;
    float m_shakeInterval;
    bool m_tintGround;
    bool m_usesPlayerColor1;
    bool m_usesPlayerColor2;
    bool m_usesBlending;
    float m_moveOffsetX;
    float m_moveOffsetY;
    EasingType m_easingType;
    float m_easingRate;
    bool m_lockToPlayerX;
    bool m_lockToPlayerY;
    bool m_lockToCameraX;
    bool m_lockToCameraY;
    bool m_useMoveTarget;
    MoveTargetType m_moveTargetMode;
    float m_moveModX;
    float m_moveModY;
    bool m_property393;
    bool m_isDirectionFollowSnap360;
    int m_targetModCenterID;
    float m_directionModeDistance;
    bool m_isDynamicMode;
    bool m_isSilent;
    /* PAD */

    float m_rotationDegrees;
    int m_times360;
    bool m_lockObjectRotation;
    int m_rotationTargetID;
    float m_rotationOffset;
    EasingType m_dynamicModeEasing;
    float m_followXMod;
    float m_followYMod;
    float m_followYSpeed;
    float m_followYDelay;
    int m_followYOffset;
    float m_followYMaxSpeed;
    float m_fadeInDuration;
    float m_holdDuration;
    float m_fadeOutDuration;
    int m_pulseMode;
    int m_pulseTargetType;
    cocos2d::ccHSVValue m_hsvValue;
    int m_copyColorID;
    bool m_copyOpacity;
    bool m_pulseMainOnly;
    bool m_pulseDetailOnly;
    bool m_pulseExclusive;
    bool m_property210;
    bool m_activateGroup;
    bool m_touchHoldMode;
    TouchToggleMode m_touchToggleMode;
    int m_touchPlayerMode;
    bool m_isDualMode;
    int m_animationID;
    /* PAD */

    bool m_isMultiTriggered;
    /* PAD */

    bool m_triggerOnExit;
    int m_itemID2;
    int m_property534;
    /* PAD */

    bool m_isDynamicBlock;
    int m_itemID;
    bool m_targetPlayer1;
    bool m_targetPlayer2;
    bool m_followCPP;
    bool m_subtractCount;
    bool m_collectibleIsPickupItem;
    bool m_collectibleIsToggleTrigger;
    int m_collectibleParticleID;
    int m_collectiblePoints;
    bool m_hasNoAnimation;
    /* PAD */

    float m_gravityValue;
    bool m_isSinglePTouch;
    /* PAD */

    float m_zoomValue;
    bool m_cameraIsFreeMode;
    bool m_cameraEditCameraSettings;
    float m_cameraEasingValue;
    float m_cameraPaddingValue;
    bool m_cameraDisableGridSnap;
    bool m_property118;
    float m_timeWarpTimeMod;
    bool m_shouldPreview;
    int m_ordValue;
    int m_channelValue;
    bool m_isReverse;
    /* PAD */

    int m_secretCoinID;
    /* PAD */

    bool m_ignoreGroupParent;
    bool m_ignoreLinkedObjects;
    /* PAD */

};

#endif /* __EFFECTGAMEOBJECT_H__ */