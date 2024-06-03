#ifndef __FONTOBJECT_H__
#define __FONTOBJECT_H__


#include "../includes.h"

class FontObject: public cocos2d::CCObject {
public:
    TodoReturn createWithConfigFile(char const* p0, float p1);
    TodoReturn getFontWidth(int p0);
    TodoReturn initWithConfigFile(char const* p0, float p1);
    TodoReturn parseConfigFile(char const* p0, float p1);
};

#endif /* __FONTOBJECT_H__ */