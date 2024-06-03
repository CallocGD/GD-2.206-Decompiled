#ifndef __SPAWNTRIGGERGAMEOBJECT_H__
#define __SPAWNTRIGGERGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class SpawnTriggerGameObject: public EffectGameObject {
public:
    static SpawnTriggerGameObject* create();
    TodoReturn addRemap(int p0, int p1);
    TodoReturn changeRemap(int p0, int p1, bool p2);
    TodoReturn removeRemap(int p0, int p1);
    TodoReturn updateRemapKeys(std::vector<int> const& p0);
    virtual bool init();
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, std::vector<int> const* p2);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __SPAWNTRIGGERGAMEOBJECT_H__ */