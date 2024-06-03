#ifndef __GRADIENTTRIGGEROBJECT_H__
#define __GRADIENTTRIGGEROBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class GradientTriggerObject: public EffectGameObject {
public:
    static GradientTriggerObject* create();
    virtual bool init();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __GRADIENTTRIGGEROBJECT_H__ */