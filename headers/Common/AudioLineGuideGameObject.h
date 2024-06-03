#ifndef __AUDIOLINEGUIDEGAMEOBJECT_H__
#define __AUDIOLINEGUIDEGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class AudioLineGuideGameObject: public EffectGameObject {
public:
    static AudioLineGuideGameObject* create();
    virtual bool init();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __AUDIOLINEGUIDEGAMEOBJECT_H__ */