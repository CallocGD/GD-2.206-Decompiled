#ifndef __ENTEREFFECTINSTANCE_H__
#define __ENTEREFFECTINSTANCE_H__


#include "../includes.h"

class EnterEffectInstance {
public:
     EnterEffectInstance(EnterEffectObject* p0, int p1, int p2, int p3, int p4, int p5, int p6);
    TodoReturn animateValue(int p0, float p1, float p2, float p3, int p4, float p5, int p6);
    TodoReturn getValue(int p0);
    TodoReturn loadTransitions(EnterEffectObject* p0, float p1);
    TodoReturn loadValuesFromObject(EnterEffectObject* p0);
    void setValue(int p0, float p1);
    TodoReturn updateTransitions(float p0, GJBaseGameLayer* p1);
    std::map<int,EnterEffectAnimValue> m_enterEffectAnimMap;
    /* PAD */

    GameObject* m_gameObject;
    /* PAD */

    std::vector<int> m_unkVecInt;
    /* PAD */

};

#endif /* __ENTEREFFECTINSTANCE_H__ */