#ifndef __MENULAYER_H__
#define __MENULAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayerProtocol;
class GooglePlayDelegate;

class MenuLayer: public cocos2d::CCLayer, public FLAlertLayerProtocol, public GooglePlayDelegate {
public:
    static cocos2d::CCScene* scene(bool p0);
    TodoReturn endGame();
    TodoReturn firstNetworkTest();
    void onAchievements(cocos2d::CCObject* sender);
    void onCreator(cocos2d::CCObject* sender);
    void onDaily(cocos2d::CCObject* sender);
    void onDiscord(cocos2d::CCObject* sender);
    void onEveryplay(cocos2d::CCObject* sender);
    void onFacebook(cocos2d::CCObject* sender);
    void onFreeLevels(cocos2d::CCObject* sender);
    void onFullVersion(cocos2d::CCObject* sender);
    void onGameCenter(cocos2d::CCObject* sender);
    void onGarage(cocos2d::CCObject* sender);
    void onGooglePlayGames(cocos2d::CCObject* sender);
    void onMoreGames(cocos2d::CCObject* sender);
    void onMyProfile(cocos2d::CCObject* sender);
    void onNewgrounds(cocos2d::CCObject* sender);
    void onOptions(cocos2d::CCObject* sender);
    TodoReturn onOptionsInstant();
    void onPlay(cocos2d::CCObject* sender);
    void onQuit(cocos2d::CCObject* sender);
    void onRobTop(cocos2d::CCObject* sender);
    void onStats(cocos2d::CCObject* sender);
    void onTrailer(cocos2d::CCObject* sender);
    void onTwitch(cocos2d::CCObject* sender);
    void onTwitter(cocos2d::CCObject* sender);
    void onYouTube(cocos2d::CCObject* sender);
    TodoReturn openOptions(bool p0);
    void showGCQuestion();
    void showMeltdownPromo();
    void showTOS();
    TodoReturn syncPlatformAchievements(float p0);
    TodoReturn tryShowAd(float p0);
    TodoReturn updateUserProfileButton();
    TodoReturn videoOptionsClosed();
    TodoReturn videoOptionsOpened();
    TodoReturn willClose();
    virtual bool init();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual void googlePlaySignedIn();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};

#endif /* __MENULAYER_H__ */