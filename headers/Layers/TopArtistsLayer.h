#ifndef __TOPARTISTSLAYER_H__
#define __TOPARTISTSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class OnlineListDelegate;

class TopArtistsLayer: public FLAlertLayer, public OnlineListDelegate {
public:
    static TopArtistsLayer* create();
    bool isCorrect(char const* p0);
    void loadPage(int p0);
    void onClose(cocos2d::CCObject* sender);
    void onNextPage(cocos2d::CCObject* sender);
    void onPrevPage(cocos2d::CCObject* sender);
    TodoReturn setupLeaderboard(cocos2d::CCArray* p0);
    TodoReturn updateLevelsLabel();
    virtual bool init();
    virtual void registerWithTouchDispatcher();
    TodoReturn doPause();
    virtual void keyBackClicked();
    virtual void show();
    virtual void loadListFinished(cocos2d::CCArray* p0, char const* p1);
    virtual void loadListFailed(char const* p0);
    virtual void setupPageInfo(std::string p0, char const* p1);
};

#endif /* __TOPARTISTSLAYER_H__ */