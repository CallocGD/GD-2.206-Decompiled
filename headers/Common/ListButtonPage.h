#ifndef __LISTBUTTONPAGE_H__
#define __LISTBUTTONPAGE_H__


#include "../includes.h"

class ListButtonPage: public cocos2d::CCLayer {
public:
    static ListButtonPage* create(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, int p3, float p4, float p5, float p6);
    bool init(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, int p3, float p4, float p5, float p6);
};

#endif /* __LISTBUTTONPAGE_H__ */