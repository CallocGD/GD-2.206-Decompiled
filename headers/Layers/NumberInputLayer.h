#ifndef __NUMBERINPUTLAYER_H__
#define __NUMBERINPUTLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class NumberInputLayer: public FLAlertLayer {
public:
    static NumberInputLayer* create();
    TodoReturn deleteLast();
    TodoReturn inputNumber(int p0);
    void onClose(cocos2d::CCObject* sender);
    void onDone(cocos2d::CCObject* sender);
    void onNumber(cocos2d::CCObject* sender);
    TodoReturn updateNumberState();
    virtual bool init();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
};

#endif /* __NUMBERINPUTLAYER_H__ */