#ifndef __ADVANCEDFOLLOWEDITOBJECT_H__
#define __ADVANCEDFOLLOWEDITOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class AdvancedFollowTriggerObject;

class AdvancedFollowEditObject: public AdvancedFollowTriggerObject {
public:
    static AdvancedFollowEditObject* create(char const* p0);
    bool init(char const* p0);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __ADVANCEDFOLLOWEDITOBJECT_H__ */