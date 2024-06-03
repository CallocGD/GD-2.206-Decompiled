#ifndef __PARTICLEGAMEOBJECT_H__
#define __PARTICLEGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EnhancedGameObject;

class ParticleGameObject: public EnhancedGameObject {
public:
    static ParticleGameObject* create();
    TodoReturn applyParticleSettings(cocos2d::CCParticleSystemQuad* p0);
    TodoReturn createAndAddCustomParticle();
    TodoReturn createParticlePreviewArt();
    void setParticleString(std::string p0);
    void updateParticle();
    TodoReturn updateParticleAngle(float p0, cocos2d::CCParticleSystemQuad* p1);
    TodoReturn updateParticlePreviewArtOpacity(float p0);
    TodoReturn updateParticleScale(float p0);
    TodoReturn updateParticleStruct();
    virtual bool init();
    virtual void setScaleX(float p0);
    virtual void setScaleY(float p0);
    virtual void setScale(float p0);
    virtual void setRotation(float p0);
    virtual void setRotationX(float p0);
    virtual void setRotationY(float p0);
    virtual void setChildColor(cocos2d::ccColor3B const& p0);
    virtual void customSetup();
    virtual TodoReturn addMainSpriteToParent(bool p0);
    virtual void resetObject();
    virtual void deactivateObject(bool p0);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    virtual TodoReturn claimParticle();
    virtual TodoReturn unclaimParticle();
    virtual TodoReturn particleWasActivated();
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);
    virtual TodoReturn blendModeChanged();
    virtual TodoReturn updateParticleColor(cocos2d::ccColor3B const& p0);
    virtual TodoReturn updateParticleOpacity(unsigned char p0);
    virtual TodoReturn updateMainParticleOpacity(unsigned char p0);
    virtual TodoReturn updateSecondaryParticleOpacity(unsigned char p0);
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);
    virtual TodoReturn updateAnimateOnTrigger(bool p0);
    std::string m_particleData;
    bool m_updatedParticleData;
    /* PAD */

    bool m_hasUniformObjectColor;
    /* PAD */

    bool m_shouldQuickStart;
    /* PAD */

};

#endif /* __PARTICLEGAMEOBJECT_H__ */