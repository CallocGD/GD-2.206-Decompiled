#ifndef __MULTIPLAYERLAYER_H__
#define __MULTIPLAYERLAYER_H__


#include "../includes.h"

class MultiplayerLayer: public cocos2d::CCLayer {
public:
    static MultiplayerLayer* create();
    void onBack(cocos2d::CCObject* sender);
    void onBtn1(cocos2d::CCObject* sender);
    void onBtn2(cocos2d::CCObject* sender);
    TodoReturn scene();
    virtual bool init();
    virtual void keyBackClicked();
};

#endif /* __MULTIPLAYERLAYER_H__ */