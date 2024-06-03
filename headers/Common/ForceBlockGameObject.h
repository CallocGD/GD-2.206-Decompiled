#ifndef __FORCEBLOCKGAMEOBJECT_H__
#define __FORCEBLOCKGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class ForceBlockGameObject: public EffectGameObject {
public:
    static ForceBlockGameObject* create(char const* p0);
    TodoReturn calculateForceToTarget(GameObject* p0);
    bool init(char const* p0);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __FORCEBLOCKGAMEOBJECT_H__ */