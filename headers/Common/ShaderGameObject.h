#ifndef __SHADERGAMEOBJECT_H__
#define __SHADERGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class ShaderGameObject: public EffectGameObject {
public:
    static ShaderGameObject* create(char const* p0);
    bool init(char const* p0);
    virtual void customSetup();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __SHADERGAMEOBJECT_H__ */