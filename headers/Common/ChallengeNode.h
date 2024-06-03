#ifndef __CHALLENGENODE_H__
#define __CHALLENGENODE_H__


#include "../includes.h"

class ChallengeNode: public cocos2d::CCNode {
public:
    static ChallengeNode* create(GJChallengeItem* challengeItem, ChallengesPage* challengesPage, bool isNew);
    bool init(GJChallengeItem* challengeItem, ChallengesPage* challengesPage, bool isNew);
    void onClaimReward(cocos2d::CCObject* sender);
    void updateTimeLabel(std::string p0);
    ChallengesPage* m_challengesPage;
    GJChallengeItem* m_challengeItem;
    cocos2d::CCPoint m_unkPoint;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    bool m_unloaded;
};

#endif /* __CHALLENGENODE_H__ */