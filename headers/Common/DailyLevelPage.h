#ifndef __DAILYLEVELPAGE_H__
#define __DAILYLEVELPAGE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class FLAlertLayerProtocol;
class GJDailyLevelDelegate;
class LevelDownloadDelegate;

class DailyLevelPage: public FLAlertLayer, public FLAlertLayerProtocol, public GJDailyLevelDelegate, public LevelDownloadDelegate {
public:
    static DailyLevelPage* create(GJTimedLevelType p0);
    TodoReturn claimLevelReward(DailyLevelNode* p0, GJGameLevel* p1, cocos2d::CCPoint p2);
    TodoReturn createDailyNode(GJGameLevel* p0, bool p1, float p2, bool p3);
    TodoReturn createNodeIfLoaded();
    TodoReturn downloadAndCreateNode();
    TodoReturn exitDailyNode(DailyLevelNode* p0, float p1);
    TodoReturn getDailyTime();
    TodoReturn getDailyTimeString(int p0);
    bool init(GJTimedLevelType p0);
    void onClose(cocos2d::CCObject* sender);
    void onTheSafe(cocos2d::CCObject* sender);
    TodoReturn refreshDailyPage();
    TodoReturn skipDailyLevel(DailyLevelNode* p0, GJGameLevel* p1);
    TodoReturn tryGetDailyStatus();
    void updateTimers(float p0);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void show();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void dailyStatusFinished(GJTimedLevelType p0);
    virtual void dailyStatusFailed(GJTimedLevelType p0, GJErrorCode p1);
    virtual void levelDownloadFinished(GJGameLevel* p0);
    virtual void levelDownloadFailed(int p0);
    cocos2d::CCLabelBMFont* m_timeLabel;
    LoadingCircle* m_timeCircle;
    LoadingCircle* m_nodeCircle;
    bool m_gettingDailyStatus;
    DailyLevelNode* m_dailyNode;
    bool m_downloadStarted;
    GJTimedLevelType m_type;
    int m_downloadLevelID;
};

#endif /* __DAILYLEVELPAGE_H__ */