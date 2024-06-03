#ifndef __DIALOGOBJECT_H__
#define __DIALOGOBJECT_H__


#include "../includes.h"

class DialogObject: public cocos2d::CCObject {
public:
    static DialogObject* create(std::string p0, std::string p1, int p2, float p3, bool p4, cocos2d::ccColor3B p5);
    bool init(std::string p0, std::string p1, int p2, float p3, bool p4, cocos2d::ccColor3B p5);
};

#endif /* __DIALOGOBJECT_H__ */