#ifndef __SHARELEVELLAYER_H__
#define __SHARELEVELLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class ShareLevelLayer: public FLAlertLayer {
public:
    static ShareLevelLayer* create(GJGameLevel* p0);
    CCMenuItemSpriteExtra* getStarsButton(int btnID, cocos2d::SEL_MenuHandler callback, cocos2d::CCMenu* menu, float scale);
    bool init(GJGameLevel* level);
    void onClose(cocos2d::CCObject* sender);
    void onSettings(cocos2d::CCObject* sender);
    void onShare(cocos2d::CCObject* sender);
    void selectRating(cocos2d::CCObject* p0);
    TodoReturn setupStars();
    virtual void keyBackClicked();
};

#endif /* __SHARELEVELLAYER_H__ */