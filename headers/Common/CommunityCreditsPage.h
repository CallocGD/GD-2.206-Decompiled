#ifndef __COMMUNITYCREDITSPAGE_H__
#define __COMMUNITYCREDITSPAGE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class CommunityCreditsPage: public FLAlertLayer {
public:
    static CommunityCreditsPage* create();
    void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    void goToPage(int p0);
    void onClose(cocos2d::CCObject* sender);
    void onSwitchPage(cocos2d::CCObject* sender);
    virtual bool init();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void show();
};

#endif /* __COMMUNITYCREDITSPAGE_H__ */