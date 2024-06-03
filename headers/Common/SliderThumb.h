#ifndef __SLIDERTHUMB_H__
#define __SLIDERTHUMB_H__


#include "../includes.h"

class SliderThumb: public cocos2d::CCMenuItemImage {
public:
    static SliderThumb* create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3);
    float getValue();
    bool init(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3);
    void setMaxOffset(float p0);
    void setRotated(bool p0);
    void setValue(float p0);
    float m_length;
    bool m_vertical;
};

#endif /* __SLIDERTHUMB_H__ */