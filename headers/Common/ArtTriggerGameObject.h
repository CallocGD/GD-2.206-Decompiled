#ifndef __ARTTRIGGERGAMEOBJECT_H__
#define __ARTTRIGGERGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class ArtTriggerGameObject: public EffectGameObject {
public:
    static ArtTriggerGameObject* create(char const* p0);
    bool init(char const* p0);
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, std::vector<int> const* p2);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __ARTTRIGGERGAMEOBJECT_H__ */