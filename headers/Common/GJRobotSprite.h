#ifndef __GJROBOTSPRITE_H__
#define __GJROBOTSPRITE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCAnimatedSprite;

class GJRobotSprite: public CCAnimatedSprite {
public:
    static GJRobotSprite* create(int p0);
    TodoReturn hideGlow();
    bool init(int p0, std::string p1);
    bool init(int p0);
    void showGlow();
    TodoReturn updateColor01(cocos2d::ccColor3B p0);
    TodoReturn updateColor02(cocos2d::ccColor3B p0);
    TodoReturn updateColors();
    TodoReturn updateFrame(int p0);
    void updateGlowColor(cocos2d::ccColor3B p0, bool p1);
    virtual void setOpacity(unsigned char p0);
    virtual TodoReturn hideSecondary();
};

#endif /* __GJROBOTSPRITE_H__ */