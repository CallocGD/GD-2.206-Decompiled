#ifndef __WORLDLEVELPAGE_H__
#define __WORLDLEVELPAGE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class WorldLevelPage: public FLAlertLayer {
public:
    static WorldLevelPage* create(GJGameLevel* p0, GJWorldNode* p1);
    bool init(GJGameLevel* p0, GJWorldNode* p1);
    void onClose(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onPlay(cocos2d::CCObject* sender);
    void onSong(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
    virtual void show();
};

#endif /* __WORLDLEVELPAGE_H__ */