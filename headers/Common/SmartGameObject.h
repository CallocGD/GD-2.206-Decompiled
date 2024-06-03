#ifndef __SMARTGAMEOBJECT_H__
#define __SMARTGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GameObject;

class SmartGameObject: public GameObject {
public:
    static SmartGameObject* create(char const* p0);
    bool init(char const* p0);
    TodoReturn updateSmartFrame();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    bool m_property157;
    /* PAD */

};

#endif /* __SMARTGAMEOBJECT_H__ */