#ifndef __ACHIEVEMENTNOTIFIER_H__
#define __ACHIEVEMENTNOTIFIER_H__


#include "../includes.h"

class AchievementNotifier: public cocos2d::CCNode {
public:
    static AchievementNotifier* sharedState();
    TodoReturn achievementDisplayFinished();
    TodoReturn notifyAchievement(char const* title, char const* desc, char const* icon, bool quest);
    void showNextAchievement();
    void willSwitchToScene(cocos2d::CCScene* p0);
    virtual bool init();
};

#endif /* __ACHIEVEMENTNOTIFIER_H__ */