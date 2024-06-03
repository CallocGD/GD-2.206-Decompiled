#ifndef __SONGTRIGGERGAMEOBJECT_H__
#define __SONGTRIGGERGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SFXTriggerGameObject;

class SongTriggerGameObject: public SFXTriggerGameObject {
public:
    static SongTriggerGameObject* create(char const* p0);
    bool init(char const* p0);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};

#endif /* __SONGTRIGGERGAMEOBJECT_H__ */