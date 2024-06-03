#ifndef __RINGOBJECT_H__
#define __RINGOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class RingObject: public EffectGameObject {
public:
    static RingObject* create(char const* p0);
    bool init(char const* p0);
    TodoReturn spawnCircle();
    virtual void setScale(float p0);
    virtual void setRotation(float p0);
    virtual void resetObject();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    virtual void setRScale(float p0);
    virtual void triggerActivated(float p0);
    virtual TodoReturn shouldDrawEditorHitbox();
    virtual TodoReturn powerOnObject(int p0);
    bool m_claimTouch;
    bool m_isSpawnOnly;
};

#endif /* __RINGOBJECT_H__ */