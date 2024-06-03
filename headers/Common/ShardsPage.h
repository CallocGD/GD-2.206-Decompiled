#ifndef __SHARDSPAGE_H__
#define __SHARDSPAGE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class ShardsPage: public FLAlertLayer {
public:
    static ShardsPage* create();
    void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    void goToPage(int p0);
    void onClose(cocos2d::CCObject* sender);
    void onIconInfo(cocos2d::CCObject* sender);
    void onSwitchPage(cocos2d::CCObject* sender);
    virtual bool init();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void show();
};

#endif /* __SHARDSPAGE_H__ */