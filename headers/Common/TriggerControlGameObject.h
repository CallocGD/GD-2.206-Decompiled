#ifndef __TRIGGERCONTROLGAMEOBJECT_H__
#define __TRIGGERCONTROLGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class TriggerControlGameObject: public EffectGameObject {
public:
    static TriggerControlGameObject* create(char const* p0);
    bool init(char const* p0);
    TodoReturn updateTriggerControlFrame();
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, std::vector<int> const* p2);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __TRIGGERCONTROLGAMEOBJECT_H__ */