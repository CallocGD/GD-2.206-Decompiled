#ifndef __ROTATEGAMEPLAYGAMEOBJECT_H__
#define __ROTATEGAMEPLAYGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class RotateGameplayGameObject: public EffectGameObject {
public:
    static RotateGameplayGameObject* create();
    TodoReturn updateGameplayRotation();
    virtual bool init();
    virtual void updateStartValues();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __ROTATEGAMEPLAYGAMEOBJECT_H__ */