#ifndef __KEYFRAMEGAMEOBJECT_H__
#define __KEYFRAMEGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class KeyframeGameObject: public EffectGameObject {
public:
    static KeyframeGameObject* create();
    TodoReturn updateShadowObjects(GJBaseGameLayer* p0, EditorUI* p1);
    virtual bool init();
    virtual void setOpacity(unsigned char p0);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __KEYFRAMEGAMEOBJECT_H__ */