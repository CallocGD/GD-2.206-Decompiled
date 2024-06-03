#ifndef __GJUNLOCKABLEITEM_H__
#define __GJUNLOCKABLEITEM_H__


#include "../includes.h"

class GJUnlockableItem: public cocos2d::CCObject {
public:
    static GJUnlockableItem* create();
    bool init();
};

#endif /* __GJUNLOCKABLEITEM_H__ */