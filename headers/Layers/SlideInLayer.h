#ifndef __SLIDEINLAYER_H__
#define __SLIDEINLAYER_H__


#include "../includes.h"

class SlideInLayer: public cocos2d::CCLayerColor {
public:
    static SlideInLayer* create();
    virtual bool init();
    virtual void draw();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void customSetup();
    virtual TodoReturn enterLayer();
    virtual TodoReturn exitLayer(cocos2d::CCObject* p0);
    virtual void showLayer(bool p0);
    virtual TodoReturn hideLayer(bool p0);
    virtual TodoReturn layerVisible();
    virtual void layerHidden();
    virtual void enterAnimFinished();
    virtual void disableUI();
    virtual void enableUI();
};

#endif /* __SLIDEINLAYER_H__ */