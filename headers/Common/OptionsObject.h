#ifndef __OPTIONSOBJECT_H__
#define __OPTIONSOBJECT_H__


#include "../includes.h"

class OptionsObject: public cocos2d::CCObject {
public:
    static OptionsObject* create(int p0, bool p1, std::string p2, OptionsObjectDelegate* p3);
    bool init(int p0, bool p1, std::string p2, OptionsObjectDelegate* p3);
    TodoReturn toggleState();
};

#endif /* __OPTIONSOBJECT_H__ */