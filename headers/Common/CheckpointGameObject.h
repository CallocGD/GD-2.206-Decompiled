#ifndef __CHECKPOINTGAMEOBJECT_H__
#define __CHECKPOINTGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class CheckpointGameObject: public EffectGameObject {
public:
    static CheckpointGameObject* create();
    TodoReturn resetCheckpoint();
    TodoReturn updateCheckpointSpriteVisibility();
    virtual bool init();
    virtual void setupCustomSprites(std::string p0);
    virtual void resetObject();
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, std::vector<int> const* p2);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    virtual void triggerActivated(float p0);
    virtual TodoReturn restoreObject();
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);
};

#endif /* __CHECKPOINTGAMEOBJECT_H__ */