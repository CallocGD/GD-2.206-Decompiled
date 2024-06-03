#ifndef __OBJECTCONTROLGAMEOBJECT_H__
#define __OBJECTCONTROLGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class ObjectControlGameObject: public EffectGameObject {
public:
    static ObjectControlGameObject* create();
    virtual bool init();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __OBJECTCONTROLGAMEOBJECT_H__ */