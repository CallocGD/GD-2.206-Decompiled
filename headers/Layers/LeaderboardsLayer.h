#ifndef __LEADERBOARDSLAYER_H__
#define __LEADERBOARDSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class LeaderboardManagerDelegate;
class FLAlertLayerProtocol;

class LeaderboardsLayer: public cocos2d::CCLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static LeaderboardsLayer* create(LeaderboardState p0);
    bool init(LeaderboardState p0);
    bool isCorrect(char const* p0);
    void onBack(cocos2d::CCObject* sender);
    void onCreators(cocos2d::CCObject* sender);
    void onGlobal(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onTop(cocos2d::CCObject* sender);
    void onWeek(cocos2d::CCObject* sender);
    TodoReturn refreshTabs();
    TodoReturn scene(LeaderboardState p0);
    TodoReturn selectLeaderboard(LeaderboardState p0);
    void setupLevelBrowser(cocos2d::CCArray* p0);
    TodoReturn setupTabs();
    TodoReturn toggleTabButtons();
    virtual void keyBackClicked();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void updateUserScoreFinished();
    virtual void updateUserScoreFailed();
    virtual void loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);
    virtual void loadLeaderboardFailed(char const* p0);
    GJListLayer* m_list;
    cocos2d::CCArray* m_userScores;
    LeaderboardState m_state;
    CCMenuItemToggler* m_topBtn;
    CCMenuItemToggler* m_globalBtn;
    CCMenuItemToggler* m_creatorsBtn;
    CCMenuItemToggler* m_friendsBtn;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    cocos2d::CCArray* m_tabs;
};

#endif /* __LEADERBOARDSLAYER_H__ */