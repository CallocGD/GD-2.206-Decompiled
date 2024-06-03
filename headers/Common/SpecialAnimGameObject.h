#ifndef __SPECIALANIMGAMEOBJECT_H__
#define __SPECIALANIMGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EnhancedGameObject;

class SpecialAnimGameObject: public EnhancedGameObject {
public:
    static SpecialAnimGameObject* create(char const* p0);
    bool init(char const* p0);
    virtual void resetObject();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    virtual TodoReturn updateMainColor(cocos2d::ccColor3B const& p0);
    virtual TodoReturn updateSecondaryColor(cocos2d::ccColor3B const& p0);
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);
};

#endif /* __SPECIALANIMGAMEOBJECT_H__ */