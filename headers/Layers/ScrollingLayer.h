#ifndef __SCROLLINGLAYER_H__
#define __SCROLLINGLAYER_H__


#include "../includes.h"

class ScrollingLayer: public cocos2d::CCLayerColor {
public:
    static ScrollingLayer* create(cocos2d::CCSize p0, cocos2d::CCPoint p1, float p2);
    TodoReturn getViewRect();
    bool init(cocos2d::CCSize p0, cocos2d::CCPoint p1, float p2);
    void setStartOffset(cocos2d::CCPoint p0);
    virtual void draw();
    virtual void visit();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
};

#endif /* __SCROLLINGLAYER_H__ */