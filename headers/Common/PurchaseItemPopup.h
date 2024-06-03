#ifndef __PURCHASEITEMPOPUP_H__
#define __PURCHASEITEMPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class PurchaseItemPopup: public FLAlertLayer {
public:
    static PurchaseItemPopup* create(GJStoreItem* p0);
    bool init(GJStoreItem* p0);
    void onClose(cocos2d::CCObject* sender);
    void onPurchase(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
};

#endif /* __PURCHASEITEMPOPUP_H__ */