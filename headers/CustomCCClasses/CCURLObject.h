#ifndef __CCURLOBJECT_H__
#define __CCURLOBJECT_H__


#include "../includes.h"

class CCURLObject: public cocos2d::CCObject {
public:
    static CCURLObject* create(std::string p0, std::string p1);
    bool init(std::string p0, std::string p1);
};

#endif /* __CCURLOBJECT_H__ */