#ifndef __UISETTINGSGAMEOBJECT_H__
#define __UISETTINGSGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class UISettingsGameObject: public EffectGameObject {
public:
    static UISettingsGameObject* create();
    virtual bool init();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __UISETTINGSGAMEOBJECT_H__ */