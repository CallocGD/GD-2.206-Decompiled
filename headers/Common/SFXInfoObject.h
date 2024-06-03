#ifndef __SFXINFOOBJECT_H__
#define __SFXINFOOBJECT_H__


#include "../includes.h"

class SFXInfoObject: public cocos2d::CCObject {
public:
    static SFXInfoObject* create(int p0, std::string p1, int p2, int p3, int p4);
    TodoReturn getLowerCaseName();
    bool init(int p0, std::string p1, int p2, int p3, int p4);
};

#endif /* __SFXINFOOBJECT_H__ */