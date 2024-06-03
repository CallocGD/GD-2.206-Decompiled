#ifndef __SFXTRIGGERGAMEOBJECT_H__
#define __SFXTRIGGERGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class SFXTriggerGameObject: public EffectGameObject {
public:
    static SFXTriggerGameObject* create(char const* p0);
    TodoReturn getSFXRefID();
    TodoReturn getUniqueSFXID();
    bool init(char const* p0);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __SFXTRIGGERGAMEOBJECT_H__ */