#ifndef __BONUSDROPDOWN_H__
#define __BONUSDROPDOWN_H__


#include "../includes.h"

class BonusDropdown: public cocos2d::CCNode {
public:
    static BonusDropdown* create(std::string p0, int p1);
    bool init(std::string p0, int p1);
    void show();
};

#endif /* __BONUSDROPDOWN_H__ */