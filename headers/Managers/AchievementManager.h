#ifndef __ACHIEVEMENTMANAGER_H__
#define __ACHIEVEMENTMANAGER_H__


#include "../includes.h"

class AchievementManager: public cocos2d::CCNode {
public:
    static AchievementManager* sharedState();
    TodoReturn achievementForUnlock(int p0, UnlockType p1);
    void addAchievement(std::string p0, std::string p1, std::string p2, std::string p3, std::string p4, int p5);
    void addManualAchievements();
    TodoReturn areAchievementsEarned(cocos2d::CCArray* p0);
    TodoReturn checkAchFromUnlock(char const* p0);
    void dataLoaded(DS_Dictionary* p0);
    void encodeDataTo(DS_Dictionary* p0);
    void firstSetup();
    TodoReturn getAchievementRewardDict();
    cocos2d::CCDictionary* getAchievementsWithID(char const* p0);
    TodoReturn getAllAchievements();
    cocos2d::CCArray* getAllAchievementsSorted(bool p0);
    bool isAchievementAvailable(std::string p0);
    TodoReturn limitForAchievement(std::string p0);
    TodoReturn notifyAchievement(char const* p0, char const* p1, char const* p2);
    TodoReturn notifyAchievementWithID(char const* p0);
    TodoReturn percentageForCount(int p0, int p1);
    int percentForAchievement(char const* p0);
    void reportAchievementWithID(char const* p0, int p1, bool p2);
    void reportPlatformAchievementWithID(char const* p0, int p1);
    void resetAchievement(char const* p0);
    TodoReturn resetAchievements();
    TodoReturn setup();
    void storeAchievementUnlocks();
    virtual bool init();
    cocos2d::CCArray* m_allAchievements;
    cocos2d::CCDictionary* m_platformAchievements;
    cocos2d::CCDictionary* m_achievementUnlocks;
    /* PAD */

    cocos2d::CCDictionary* m_reportedAchievements;
    bool m_dontNotify;
    /* PAD */

    cocos2d::CCArray* m_allAchievementsSorted;
    int m_order;
    cocos2d::CCDictionary* m_unAchieved;
};

#endif /* __ACHIEVEMENTMANAGER_H__ */