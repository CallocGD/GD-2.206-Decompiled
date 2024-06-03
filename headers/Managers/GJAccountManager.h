#ifndef __GJACCOUNTMANAGER_H__
#define __GJACCOUNTMANAGER_H__


#include "../includes.h"

class GJAccountManager: public cocos2d::CCNode {
public:
    static GJAccountManager* get();
    static GJAccountManager* sharedState();
    void addDLToActive(char const* tag, cocos2d::CCObject* p1);
    void addDLToActive(char const* tag);
    bool backupAccount(std::string p0);
    void dataLoaded(DS_Dictionary* p0);
    void encodeDataTo(DS_Dictionary* p0);
    void firstSetup();
    void getAccountBackupURL();
    void getAccountSyncURL();
    cocos2d::CCObject* getDLObject(char const* p0);
    gd::string getShaPassword(std::string p0);
    void handleIt(bool p0, std::string p1, std::string p2, GJHttpType p3);
    void handleItDelayed(bool p0, std::string p1, std::string p2, GJHttpType p3);
    void handleItND(cocos2d::CCNode* p0, void* p1);
    bool isDLActive(char const* tag);
    void linkToAccount(std::string p0, std::string p1, int p2, int p3);
    void loginAccount(std::string p0, std::string p1);
    void onBackupAccountCompleted(std::string p0, std::string p1);
    void onGetAccountBackupURLCompleted(std::string p0, std::string p1);
    void onGetAccountSyncURLCompleted(std::string p0, std::string p1);
    void onLoginAccountCompleted(std::string p0, std::string p1);
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
    void onRegisterAccountCompleted(std::string p0, std::string p1);
    void onSyncAccountCompleted(std::string p0, std::string p1);
    void onUpdateAccountSettingsCompleted(std::string p0, std::string p1);
    void ProcessHttpRequest(std::string p0, std::string p1, std::string p2, GJHttpType p3);
    void registerAccount(std::string p0, std::string p1, std::string p2);
    void removeDLFromActive(char const* p0);
    bool syncAccount(std::string p0);
    void unlinkFromAccount();
    void updateAccountSettings(int p0, int p1, int p2, std::string p3, std::string p4, std::string p5);
    virtual bool init();
    cocos2d::CCDictionary* m_activeDownloads;
    std::string m_username;
    int m_accountID;
    int m_unkInt1;
    int m_unkInt2;
    std::string m_GJP2;
    GJAccountRegisterDelegate* m_accountRegisterDelegate;
    GJAccountLoginDelegate* m_accountLoginDelegate;
    GJAccountDelegate* m_accountDelegate;
    GJAccountBackupDelegate* m_backupDelegate;
    GJAccountSyncDelegate* m_syncDelegate;
    GJAccountSettingsDelegate* m_accountSettingsDelegate;
    int m_gameManagerSize;
    int m_localLevelsSize;
    std::string m_password;
};

#endif /* __GJACCOUNTMANAGER_H__ */