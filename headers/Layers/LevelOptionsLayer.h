#ifndef __LEVELOPTIONSLAYER_H__
#define __LEVELOPTIONSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJOptionsLayer;

class LevelOptionsLayer: public GJOptionsLayer {
public:
    static LevelOptionsLayer* create(LevelSettingsObject* p0);
    bool init(LevelSettingsObject* p0);
    void onSettings(cocos2d::CCObject* sender);
    virtual void valueDidChange(int p0, float p1);
    virtual TodoReturn getValue(int p0);
    virtual void setupOptions();
    virtual void didToggle(int p0);
};

#endif /* __LEVELOPTIONSLAYER_H__ */