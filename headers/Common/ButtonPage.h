#ifndef __BUTTONPAGE_H__
#define __BUTTONPAGE_H__


#include "../includes.h"

class ButtonPage: public cocos2d::CCLayer {
public:
    static ButtonPage* create(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, float p3);
    bool init(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, float p3);
};

#endif /* __BUTTONPAGE_H__ */