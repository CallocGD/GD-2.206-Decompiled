#ifndef __GJSTOREITEM_H__
#define __GJSTOREITEM_H__


#include "../includes.h"

class GJStoreItem: public cocos2d::CCNode {
public:
    static GJStoreItem* create(int p0, int p1, int p2, int p3, ShopType p4);
    TodoReturn getCurrencyKey();
    bool init(int p0, int p1, int p2, int p3, ShopType p4);
};

#endif /* __GJSTOREITEM_H__ */