#ifndef __STARTPOSOBJECT_H__
#define __STARTPOSOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class StartPosObject: public EffectGameObject {
public:
    static StartPosObject* create();
    TodoReturn loadSettingsFromString(std::string p0);
    void setSettings(LevelSettingsObject* p0);
    virtual bool init();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    LevelSettingsObject* m_startSettings;
};

#endif /* __STARTPOSOBJECT_H__ */