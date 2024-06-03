#ifndef __GAMEOPTIONSTRIGGER_H__
#define __GAMEOPTIONSTRIGGER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class GameOptionsTrigger: public EffectGameObject {
public:
    static GameOptionsTrigger* create(char const* p0);
    bool init(char const* p0);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __GAMEOPTIONSTRIGGER_H__ */