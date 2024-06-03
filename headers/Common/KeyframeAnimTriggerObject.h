#ifndef __KEYFRAMEANIMTRIGGEROBJECT_H__
#define __KEYFRAMEANIMTRIGGEROBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class KeyframeAnimTriggerObject: public EffectGameObject {
public:
    static KeyframeAnimTriggerObject* create();
    virtual bool init();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __KEYFRAMEANIMTRIGGEROBJECT_H__ */