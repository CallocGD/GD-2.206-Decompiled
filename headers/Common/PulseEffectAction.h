#ifndef __PULSEEFFECTACTION_H__
#define __PULSEEFFECTACTION_H__


#include "../includes.h"

class PulseEffectAction {
public:
    bool isFinished();
    TodoReturn step(float p0);
    TodoReturn valueForDelta(float p0, float p1, float p2, float p3);
    /* PAD */

};

#endif /* __PULSEEFFECTACTION_H__ */