#ifndef __GJPATHREWARDPOPUP_H__
#define __GJPATHREWARDPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class GJPathRewardPopup: public FLAlertLayer {
public:
    static GJPathRewardPopup* create(int p0);
    TodoReturn closePopup();
    bool init(int p0);
    void onClaim(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
};

#endif /* __GJPATHREWARDPOPUP_H__ */