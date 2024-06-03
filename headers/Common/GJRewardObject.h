#ifndef __GJREWARDOBJECT_H__
#define __GJREWARDOBJECT_H__


#include "../includes.h"

class GJRewardObject: public cocos2d::CCObject {
public:
    static GJRewardObject* create();
    static GJRewardObject* create(SpecialRewardItem p0, int p1, int p2);
    TodoReturn createItemUnlock(UnlockType p0, int p1);
    TodoReturn createWithCoder(DS_Dictionary* p0);
    void dataLoaded(DS_Dictionary* p0);
    bool init(SpecialRewardItem p0, int p1, int p2);
    bool isSpecialType();
    virtual void encodeWithCoder(DS_Dictionary* p0);
    virtual bool canEncode();
    SpecialRewardItem m_specialRewardItem;
    UnlockType m_unlockType;
    int m_itemID;
    int m_total;
};

#endif /* __GJREWARDOBJECT_H__ */