#ifndef __COLORACTIONSPRITE_H__
#define __COLORACTIONSPRITE_H__


#include "../includes.h"

class ColorActionSprite: public cocos2d::CCNode {
public:
    static ColorActionSprite* create();
    virtual bool init();
    float m_opacity;
    cocos2d::ccColor3B m_color;
    cocos2d::ccColor3B m_copyColor;
};

#endif /* __COLORACTIONSPRITE_H__ */