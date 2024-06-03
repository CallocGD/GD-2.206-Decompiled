#ifndef __ENTEREFFECTOBJECT_H__
#define __ENTEREFFECTOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class EnterEffectObject: public EffectGameObject {
public:
    static EnterEffectObject* create(char const* p0);
    bool init(char const* p0);
    TodoReturn resetEnterAnimValues();
    virtual void customSetup();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __ENTEREFFECTOBJECT_H__ */