#ifndef __GJTRANSFORMSTATE_H__
#define __GJTRANSFORMSTATE_H__


#include "../includes.h"

class GJTransformState {
public:
    float m_scaleX;
    float m_scaleY;
    float m_angleX;
    float m_angleY;
    float m_skewX;
    float m_skewY;
    float m_unk1;
    float m_unk2;
    float m_unk3;
    float m_unk4;
    cocos2d::CCPoint m_unk5;
    cocos2d::CCPoint m_unk6;
    cocos2d::CCPoint m_unk7;
    float m_unk8;
    float m_unk9;
};

#endif /* __GJTRANSFORMSTATE_H__ */