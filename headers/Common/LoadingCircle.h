#ifndef __LOADINGCIRCLE_H__
#define __LOADINGCIRCLE_H__


#include "../includes.h"

class LoadingCircle: public cocos2d::CCLayerColor {
public:
    static LoadingCircle* create();
    void fadeAndRemove();
    void show();
    void setFade(bool fade);
    virtual bool init();
    virtual void draw();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCLayer* m_parentLayer;
    bool m_fade;
};

#endif /* __LOADINGCIRCLE_H__ */