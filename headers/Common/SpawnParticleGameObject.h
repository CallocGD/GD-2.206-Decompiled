#ifndef __SPAWNPARTICLEGAMEOBJECT_H__
#define __SPAWNPARTICLEGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class SpawnParticleGameObject: public EffectGameObject {
public:
    static SpawnParticleGameObject* create();
    virtual bool init();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __SPAWNPARTICLEGAMEOBJECT_H__ */