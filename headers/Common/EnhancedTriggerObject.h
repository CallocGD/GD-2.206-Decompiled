#ifndef __ENHANCEDTRIGGEROBJECT_H__
#define __ENHANCEDTRIGGEROBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class EnhancedTriggerObject: public EffectGameObject {
public:
    static EnhancedTriggerObject* create(char const* p0);
    bool init(char const* p0);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __ENHANCEDTRIGGEROBJECT_H__ */