#ifndef __GJREWARDOBJECT_H__
#define __GJREWARDOBJECT_H__


#include "../includes.h"

class GJRewardObject: public cocos2d::CCObject {
public:
    static GJRewardObject* create();
    static GJRewardObject* create(SpecialRewardItem specialRewardItem, int total, int itemID);
    static GJRewardObject* createItemUnlock(UnlockType p0, int p1);
    static GJRewardObject* createWithCoder(DS_Dictionary* p0);
    void dataLoaded(DS_Dictionary* p0);
    bool init(SpecialRewardItem specialRewardItem, int total, int itemID);
    bool isSpecialType();
    virtual void encodeWithCoder(DS_Dictionary* ds_dict);
    virtual bool canEncode();
    SpecialRewardItem m_specialRewardItem;
    UnlockType m_unlockType;
    int m_itemID;
    int m_total;
};

#endif /* __GJREWARDOBJECT_H__ */