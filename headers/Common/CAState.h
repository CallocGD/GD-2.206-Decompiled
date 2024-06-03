#ifndef __CASTATE_H__
#define __CASTATE_H__


#include "../includes.h"

class CAState {
public:
    cocos2d::ccColor3B m_fromColor;
    cocos2d::ccColor3B m_toColor;
    cocos2d::ccColor3B m_color;
    bool m_property19;
    bool m_blending;
    bool m_copyOpacity;
    bool m_unknown;
    int m_playerColor;
    int m_colorID;
    int m_copyID;
    int m_unknown2;
    float m_duration;
    float m_fromOpacity;
    float m_toOpacity;
    float m_deltaTime;
    float m_unknown3;
    cocos2d::ccHSVValue m_copyHSV;
};

#endif /* __CASTATE_H__ */