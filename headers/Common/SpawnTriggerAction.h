#ifndef __SPAWNTRIGGERACTION_H__
#define __SPAWNTRIGGERACTION_H__


#include "../includes.h"

class SpawnTriggerAction {
public:
    bool isFinished();
    TodoReturn step(float p0);
    /* PAD */

    GameObject* m_gameObject;
    std::vector<int> m_unkVecInt;
};

#endif /* __SPAWNTRIGGERACTION_H__ */