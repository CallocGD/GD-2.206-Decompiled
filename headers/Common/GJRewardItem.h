#ifndef __GJREWARDITEM_H__
#define __GJREWARDITEM_H__


#include "../includes.h"

class GJRewardItem: public cocos2d::CCObject {
public:
    static GJRewardItem* create();
    static GJRewardItem* create(int p0, int p1, std::string p2);
    TodoReturn createSpecial(GJRewardType p0, int p1, int p2, SpecialRewardItem p3, int p4, SpecialRewardItem p5, int p6, int p7, int p8);
    TodoReturn createWithCoder(DS_Dictionary* p0);
    TodoReturn createWithObject(GJRewardType p0, GJRewardObject* p1);
    TodoReturn createWithObjects(GJRewardType p0, cocos2d::CCArray* p1);
    void dataLoaded(DS_Dictionary* p0);
    TodoReturn getNextShardType(SpecialRewardItem p0);
    TodoReturn getRandomNonMaxShardType();
    TodoReturn getRandomShardType();
    TodoReturn getRewardCount(SpecialRewardItem p0);
    TodoReturn getRewardObjectForType(SpecialRewardItem p0);
    bool init(int p0, int p1, std::string p2);
    bool isShardType(SpecialRewardItem p0);
    TodoReturn rewardItemToStat(SpecialRewardItem p0);
    virtual void encodeWithCoder(DS_Dictionary* p0);
    virtual bool canEncode();
    int m_chestID;
    int m_timeRemaining;
    GJRewardType m_rewardType;
    cocos2d::CCArray* m_rewardObjects;
    bool m_unk;
};

#endif /* __GJREWARDITEM_H__ */