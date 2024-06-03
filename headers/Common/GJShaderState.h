#ifndef __GJSHADERSTATE_H__
#define __GJSHADERSTATE_H__


#include "../includes.h"

class GJShaderState {
public:
    TodoReturn reset();
    TodoReturn stopTweenAction(int p0);
    TodoReturn timesyncShaderAction(int p0);
    TodoReturn timesyncShaderActions();
    TodoReturn tweenValue(float p0, float p1, int p2, float p3, int p4, float p5);
    TodoReturn updateTweenAction(float p0, int p1);
    TodoReturn updateTweenActions(float p0);
    std::unordered_map<int, GJValueTween> m_someIntToValueTweenMap;
    std::unordered_map<int, double> m_someIntToDoubleMap;
    /* PAD */

};

#endif /* __GJSHADERSTATE_H__ */