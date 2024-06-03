#ifndef __CCLIGHTSTRIP_H__
#define __CCLIGHTSTRIP_H__


#include "../includes.h"

class CCLightStrip: public cocos2d::CCNode {
public:
    static CCLightStrip* create(float width, float toWidth, float toHeight, float duration, float delay);
    bool init(float width, float toWidth, float toHeight, float duration, float delay);
    virtual void draw();
    virtual void updateTweenAction(float value, char const* keyword);
    float m_objectWidth;
    float m_toWidth;
    float m_toHeight;
    float m_duration;
    cocos2d::ccColor4B m_color;
    float m_opacity;
    float m_width;
    float m_height;
};

#endif /* __CCLIGHTSTRIP_H__ */