#ifndef __GJSPRITECOLOR_H__
#define __GJSPRITECOLOR_H__


#include "../includes.h"

class GJSpriteColor {
public:
    TodoReturn getColorMode();
    int m_colorID;
    int m_defaultColorID;
    float m_opacity;
    float m_baseOpacity;
    cocos2d::ccHSVValue m_hsv;
    bool m_usesHSV;
    bool m_usesCustomBlend;
    cocos2d::ccColor3B m_customColor;
};

#endif /* __GJSPRITECOLOR_H__ */