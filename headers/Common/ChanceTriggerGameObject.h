#ifndef __CHANCETRIGGERGAMEOBJECT_H__
#define __CHANCETRIGGERGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class ChanceTriggerGameObject: public EffectGameObject {
public:
    TodoReturn editChanceObject(int p0, int p1);
    bool init(char const* p0);
    TodoReturn remapChanceObjects(std::unordered_map<int, int> const* p0);
    TodoReturn revertChanceRemap();
};

#endif /* __CHANCETRIGGERGAMEOBJECT_H__ */