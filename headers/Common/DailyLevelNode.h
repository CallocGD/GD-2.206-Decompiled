#ifndef __DAILYLEVELNODE_H__
#define __DAILYLEVELNODE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayerProtocol;

class DailyLevelNode: public cocos2d::CCNode, public FLAlertLayerProtocol {
public:
    static DailyLevelNode* create(GJGameLevel* p0, DailyLevelPage* p1, bool p2);
    bool init(GJGameLevel* p0, DailyLevelPage* p1, bool p2);
    void onClaimReward(cocos2d::CCObject* sender);
    void onSkipLevel(cocos2d::CCObject* sender);
    void showSkipButton();
    void updateTimeLabel(std::string p0);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    GJGameLevel* m_level;
    DailyLevelPage* m_page;
    cocos2d::CCLabelBMFont* m_timeLabel;
    /* PAD */

    CCMenuItemSpriteExtra* m_skipButton;
    bool m_unkBool;
    bool m_needsDownloading;
};

#endif /* __DAILYLEVELNODE_H__ */