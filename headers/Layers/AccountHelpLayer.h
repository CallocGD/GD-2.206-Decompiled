#ifndef __ACCOUNTHELPLAYER_H__
#define __ACCOUNTHELPLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJDropDownLayer;
class GJAccountDelegate;
class FLAlertLayerProtocol;

class AccountHelpLayer: public GJDropDownLayer, public GJAccountDelegate, public FLAlertLayerProtocol {
public:
    static AccountHelpLayer* create();
    TodoReturn doUnlink();
    TodoReturn exitLayer();
    void onAccountManagement(cocos2d::CCObject* sender);
    void onReLogin(cocos2d::CCObject* sender);
    void onUnlink(cocos2d::CCObject* sender);
    TodoReturn updatePage();
    TodoReturn verifyUnlink();
    virtual void customSetup();
    virtual void layerHidden();
    virtual TodoReturn accountStatusChanged();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};

#endif /* __ACCOUNTHELPLAYER_H__ */