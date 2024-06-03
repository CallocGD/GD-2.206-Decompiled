#ifndef __SONGOPTIONSLAYER_H__
#define __SONGOPTIONSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class SongOptionsLayer: public FLAlertLayer {
public:
    static SongOptionsLayer* create(CustomSongDelegate* p0);
    bool init(CustomSongDelegate* p0);
    void onClose(cocos2d::CCObject* sender);
    void onFadeIn(cocos2d::CCObject* sender);
    void onFadeOut(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onPlayback(cocos2d::CCObject* sender);
    TodoReturn updatePlaybackBtn();
    virtual void keyBackClicked();
};

#endif /* __SONGOPTIONSLAYER_H__ */