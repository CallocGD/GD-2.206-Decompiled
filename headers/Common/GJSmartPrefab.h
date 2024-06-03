#ifndef __GJSMARTPREFAB_H__
#define __GJSMARTPREFAB_H__


#include "../includes.h"

class GJSmartPrefab: public cocos2d::CCObject {
public:
    static GJSmartPrefab* create();
    TodoReturn createWithCoder(DS_Dictionary* p0);
    void dataLoaded(DS_Dictionary* p0);
    bool init();
    virtual void encodeWithCoder(DS_Dictionary* p0);
    virtual bool canEncode();
};

#endif /* __GJSMARTPREFAB_H__ */