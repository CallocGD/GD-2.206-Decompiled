#ifndef __GJITEMICON_H__
#define __GJITEMICON_H__


#include "../includes.h"

class GJItemIcon: public cocos2d::CCSprite {
public:
    static GJItemIcon* create(UnlockType p0, int p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3, bool p4, bool p5, bool p6, cocos2d::ccColor3B p7);
    void changeToLockedState(float p0);
    static GJItemIcon* createBrowserItem(UnlockType unlockType, int itemID);
    TodoReturn createStoreItem(UnlockType p0, int p1, bool p2, cocos2d::ccColor3B p3);
    void darkenStoreItem(cocos2d::ccColor3B p0);
    TodoReturn darkenStoreItem(ShopType p0);
    bool init(UnlockType p0, int p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3, bool p4, bool p5, bool p6, cocos2d::ccColor3B p7);
    float scaleForType(UnlockType p0);
    TodoReturn toggleEnabledState(bool p0);
    TodoReturn unlockedColorForType(int p0);
    virtual void setOpacity(unsigned char p0);
};

#endif /* __GJITEMICON_H__ */