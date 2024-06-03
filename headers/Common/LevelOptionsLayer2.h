#ifndef __LEVELOPTIONSLAYER2_H__
#define __LEVELOPTIONSLAYER2_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class LevelOptionsLayer;

class LevelOptionsLayer2: public LevelOptionsLayer {
public:
    static LevelOptionsLayer2* create(LevelSettingsObject* p0);
    bool init(LevelSettingsObject* p0);
    virtual void setupOptions();
};

#endif /* __LEVELOPTIONSLAYER2_H__ */