#ifndef __GAMEOPTIONSLAYER_H__
#define __GAMEOPTIONSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJOptionsLayer;

class GameOptionsLayer: public GJOptionsLayer {
public:
    static GameOptionsLayer* create(GJBaseGameLayer* p0);
    bool init(GJBaseGameLayer* p0);
    void onPracticeMusicSync(cocos2d::CCObject* sender);
    void onUIOptions(cocos2d::CCObject* sender);
    void showPracticeMusicSyncUnlockInfo();
    virtual void setupOptions();
    virtual void didToggle(int p0);
};

#endif /* __GAMEOPTIONSLAYER_H__ */