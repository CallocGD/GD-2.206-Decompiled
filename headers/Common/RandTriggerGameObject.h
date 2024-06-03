#ifndef __RANDTRIGGERGAMEOBJECT_H__
#define __RANDTRIGGERGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class ChanceTriggerGameObject;

class RandTriggerGameObject: public ChanceTriggerGameObject {
public:
    static RandTriggerGameObject* create();
    int getRandomGroupID();
    int getTotalChance();
    virtual bool init();
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, std::vector<int> const* p2);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __RANDTRIGGERGAMEOBJECT_H__ */