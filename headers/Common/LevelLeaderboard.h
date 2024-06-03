#ifndef __LEVELLEADERBOARD_H__
#define __LEVELLEADERBOARD_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class LeaderboardManagerDelegate;
class FLAlertLayerProtocol;

class LevelLeaderboard: public FLAlertLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static LevelLeaderboard* create(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
    TodoReturn deleteLocalScores();
    TodoReturn getLocalScores();
    TodoReturn getSpriteButton(std::string p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, cocos2d::CCPoint p4, int p5);
    bool init(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
    bool isCorrect(char const* p0);
    void loadScores();
    void onChangeMode(cocos2d::CCObject* sender);
    void onChangeType(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onDeleteLocalScores(cocos2d::CCObject* sender);
    void onUpdate(cocos2d::CCObject* sender);
    TodoReturn reloadLeaderboard(LevelLeaderboardType p0, LevelLeaderboardMode p1);
    TodoReturn setupLeaderboard(cocos2d::CCArray* p0);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void show();
    virtual void loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);
    virtual void loadLeaderboardFailed(char const* p0);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void updateUserScoreFinished();
    virtual void updateUserScoreFailed();
    GJGameLevel* m_level;
    LevelLeaderboardType m_type;
    LevelLeaderboardMode m_mode;
    cocos2d::CCArray* m_scores;
    GJCommentListLayer* m_list;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    CCMenuItemSpriteExtra* m_refreshBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_pointsBtn;
};

#endif /* __LEVELLEADERBOARD_H__ */