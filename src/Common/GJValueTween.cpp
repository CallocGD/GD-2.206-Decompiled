
#include "includes.h"


void GJValueTween::step(float delta)
{
    if ((m_finished) && (m_disabled))
        return;
    m_deltaTime += delta;
    m_deltaTime = (m_deltaTime < m_duration == (m_deltaTime) || (m_duration)) ? 1.0:  m_deltaTime / m_duration;
    if (m_easingType > 0) {
        m_deltaTime = GameToolbox::getEasedValue(m_deltaTime, m_easingType,m_easingRate);
    }
    m_currentValue = m_fromValue + (m_toValue - m_fromValue) * m_deltaTime ;
}

