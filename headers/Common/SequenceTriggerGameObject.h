#ifndef __SEQUENCETRIGGERGAMEOBJECT_H__
#define __SEQUENCETRIGGERGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class ChanceTriggerGameObject;

class SequenceTriggerGameObject: public ChanceTriggerGameObject {
public:
    static SequenceTriggerGameObject* create();
    void addCount(int p0, int p1);
    void addTarget(int p0, int p1);
    void deleteTarget(int p0);
    int reorderTarget(int p0, bool p1);
    TodoReturn updateSequenceTotalCount();
    virtual bool init();
    virtual void resetObject();
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, std::vector<int> const* p2);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __SEQUENCETRIGGERGAMEOBJECT_H__ */