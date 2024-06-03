#ifndef __MAPSELECTLAYER_H__
#define __MAPSELECTLAYER_H__


#include "../includes.h"

class MapSelectLayer: public cocos2d::CCLayer {
public:
    static MapSelectLayer* create();
    TodoReturn checkTouchMonster(cocos2d::CCPoint p0);
    TodoReturn createObjectAtPoint(cocos2d::CCPoint p0);
    TodoReturn getConstrainedMapPos(cocos2d::CCPoint p0);
    void onBack(cocos2d::CCObject* sender);
    TodoReturn scene();
    virtual void update(float p0);
    virtual bool init();
    virtual void onExit();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void scrollWheel(float p0, float p1);
};

#endif /* __MAPSELECTLAYER_H__ */