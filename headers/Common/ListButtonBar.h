#ifndef __LISTBUTTONBAR_H__
#define __LISTBUTTONBAR_H__


#include "../includes.h"

class ListButtonBar: public cocos2d::CCNode {
public:
    static ListButtonBar* create(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, int p3, float p4, float p5, float p6, float p7, int p8);
    TodoReturn getPage();
    void goToPage(int p0);
    bool init(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, int p3, float p4, float p5, float p6, float p7, int p8);
    void onLeft(cocos2d::CCObject* sender);
    void onRight(cocos2d::CCObject* sender);
};

#endif /* __LISTBUTTONBAR_H__ */