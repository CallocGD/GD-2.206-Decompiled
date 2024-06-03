#ifndef __ACCOUNTLAYER_H__
#define __ACCOUNTLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJDropDownLayer;
class GJAccountDelegate;
class GJAccountBackupDelegate;
class GJAccountSyncDelegate;
class FLAlertLayerProtocol;

class AccountLayer: public GJDropDownLayer, public GJAccountDelegate, public GJAccountBackupDelegate, public GJAccountSyncDelegate, public FLAlertLayerProtocol {
public:
    static AccountLayer* create();
    TodoReturn createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
    void doBackup();
    TodoReturn doSync();
    TodoReturn exitLayer();
    TodoReturn hideLoadingUI();
    void onBackup(cocos2d::CCObject* sender);
    void onHelp(cocos2d::CCObject* sender);
    void onLogin(cocos2d::CCObject* sender);
    void onMore(cocos2d::CCObject* sender);
    void onRegister(cocos2d::CCObject* sender);
    void onSync(cocos2d::CCObject* sender);
    void showLoadingUI();
    TodoReturn toggleUI(bool p0);
    TodoReturn updatePage(bool p0);
    virtual void customSetup();
    virtual void layerHidden();
    virtual TodoReturn backupAccountFinished();
    virtual TodoReturn backupAccountFailed(BackupAccountError p0, int p1);
    virtual TodoReturn syncAccountFinished();
    virtual TodoReturn syncAccountFailed(BackupAccountError p0, int p1);
    virtual TodoReturn accountStatusChanged();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};

#endif /* __ACCOUNTLAYER_H__ */