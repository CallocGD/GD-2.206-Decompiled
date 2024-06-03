#ifndef __ENDTRIGGERGAMEOBJECT_H__
#define __ENDTRIGGERGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class EndTriggerGameObject: public EffectGameObject {
public:
    static EndTriggerGameObject* create();
    virtual bool init();
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, std::vector<int> const* p2);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __ENDTRIGGERGAMEOBJECT_H__ */