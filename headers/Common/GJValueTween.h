#ifndef __GJVALUETWEEN_H__
#define __GJVALUETWEEN_H__


#include "../includes.h"

class GJValueTween {
public:
    void step(float delta);
    float m_fromValue;
    float m_toValue;
    float m_duration;
    float m_deltaTime;
    float m_currentValue;
    int m_easingType;
    float m_easingRate;
    bool m_finished;
    bool m_disabled;
    /* PAD */

};

#endif /* __GJVALUETWEEN_H__ */