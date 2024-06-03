#ifndef __ITEMINFOPOPUP_H__
#define __ITEMINFOPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class ItemInfoPopup: public FLAlertLayer {
public:
    static ItemInfoPopup* create(int p0, UnlockType p1);
    bool init(int p0, UnlockType p1);
    bool isUnlockedByDefault(int p0, UnlockType p1);
    TodoReturn nameForUnlockType(int p0, UnlockType p1);
    void onClose(cocos2d::CCObject* sender);
    void onCredit(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
    int m_itemID;
    UnlockType m_unlockType;
    int m_accountID;
};

#endif /* __ITEMINFOPOPUP_H__ */