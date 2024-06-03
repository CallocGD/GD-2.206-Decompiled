#ifndef __PLAYERCONTROLGAMEOBJECT_H__
#define __PLAYERCONTROLGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class PlayerControlGameObject: public EffectGameObject {
public:
    static PlayerControlGameObject* create();
    virtual bool init();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __PLAYERCONTROLGAMEOBJECT_H__ */