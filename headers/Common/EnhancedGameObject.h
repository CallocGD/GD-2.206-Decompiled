#ifndef __ENHANCEDGAMEOBJECT_H__
#define __ENHANCEDGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GameObject;

class EnhancedGameObject: public GameObject {
public:
    static EnhancedGameObject* create(char const* p0);
    TodoReturn createRotateAction(float p0, int p1);
    bool init(char const* p0);
    TodoReturn previewAnimateOnTrigger();
    TodoReturn refreshRotateAction();
    TodoReturn resetSyncedAnimation();
    TodoReturn setupAnimationVariables();
    TodoReturn triggerAnimation();
    TodoReturn updateRotateAction(float p0);
    TodoReturn updateState(int p0);
    TodoReturn updateUserCoin();
    TodoReturn waitForAnimationTrigger();
    virtual void customSetup();
    virtual void resetObject();
    virtual void deactivateObject(bool p0);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    virtual void triggerActivated(float p0);
    virtual TodoReturn restoreObject();
    virtual TodoReturn animationTriggered();
    virtual TodoReturn activatedByPlayer(PlayerObject* p0);
    virtual TodoReturn hasBeenActivatedByPlayer(PlayerObject* p0);
    TodoReturn resumeAudio();
    TodoReturn resumeAudioDelayed();
    virtual TodoReturn hasBeenActivated();
    virtual TodoReturn saveActiveColors();
    virtual TodoReturn canAllowMultiActivate();
    virtual TodoReturn getHasSyncedAnimation();
    virtual TodoReturn getHasRotateAction();
    virtual TodoReturn canMultiActivate(bool p0);
    virtual TodoReturn powerOnObject(int p0);
    virtual TodoReturn powerOffObject();
    virtual TodoReturn stateSensitiveOff(GJBaseGameLayer* p0);
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);
    virtual TodoReturn updateAnimateOnTrigger(bool p0);
    /* PAD */

    bool m_hasCustomAnimation;
    bool m_hasCustomRotation;
    bool m_disableRotation;
    /* PAD */

    float m_rotationSpeed;
    /* PAD */

    bool m_animationRandomizedStart;
    float m_animationSpeed;
    bool m_animationShouldUseSpeed;
    bool m_animateOnTrigger;
    bool m_disableDelayedLoop;
    bool m_disableAnimShine;
    int m_singleFrame;
    bool m_animationOffset;
    /* PAD */

    bool m_animateOnlyWhenActive;
    bool m_isNoMultiActivate;
    bool m_isMultiActivate;
    /* PAD */

};

#endif /* __ENHANCEDGAMEOBJECT_H__ */