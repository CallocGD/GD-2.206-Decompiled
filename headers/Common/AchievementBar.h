#ifndef __ACHIEVEMENTBAR_H__
#define __ACHIEVEMENTBAR_H__


#include "../includes.h"

class AchievementBar: public cocos2d::CCNodeRGBA {
public:
    static AchievementBar* create(char const* title, char const* desc, char const* icon, bool quest);
    bool init(char const* title, char const* desc, char const* icon, bool quest);
    void show();
    virtual void setOpacity(unsigned char p0);
};

#endif /* __ACHIEVEMENTBAR_H__ */