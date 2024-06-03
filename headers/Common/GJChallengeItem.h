#ifndef __GJCHALLENGEITEM_H__
#define __GJCHALLENGEITEM_H__


#include "../includes.h"

class GJChallengeItem: public cocos2d::CCObject {
public:
    static GJChallengeItem* create();
    static GJChallengeItem* create(GJChallengeType challengeType, int goal, int reward, int timeLeft, std::string questName);
    static GJChallengeItem* createFromString(std::string string);
    static GJChallengeItem* createWithCoder(DS_Dictionary* dsdict);
    void dataLoaded(DS_Dictionary* dsdict);
    void incrementCount(int add);
    bool init(GJChallengeType challengeType, int goal, int reward, int timeLeft, std::string questName);
    void setCount(int value);
    virtual void encodeWithCoder(DS_Dictionary* dsdict);
    virtual bool canEncode();
    GJChallengeType m_challengeType;
    geode::SeedValueSRV m_count;
    geode::SeedValueSRV m_reward;
    geode::SeedValueSRV m_goal;
    int m_timeLeft;
    bool m_canClaim;
    int m_position;
    std::string m_name;
};

#endif /* __GJCHALLENGEITEM_H__ */