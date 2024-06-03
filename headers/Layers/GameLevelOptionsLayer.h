#ifndef __GAMELEVELOPTIONSLAYER_H__
#define __GAMELEVELOPTIONSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJOptionsLayer;

class GameLevelOptionsLayer: public GJOptionsLayer {
public:
    static GameLevelOptionsLayer* create(GJGameLevel* p0);
    bool init(GJGameLevel* p0);
    virtual void setupOptions();
    virtual void didToggle(int p0);
};

#endif /* __GAMELEVELOPTIONSLAYER_H__ */