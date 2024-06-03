#ifndef __ADVANCEDFOLLOWTRIGGEROBJECT_H__
#define __ADVANCEDFOLLOWTRIGGEROBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class AdvancedFollowTriggerObject: public EffectGameObject {
public:
    static AdvancedFollowTriggerObject* create(char const* p0);
    int getAdvancedFollowID();
    bool init(char const* p0);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __ADVANCEDFOLLOWTRIGGEROBJECT_H__ */