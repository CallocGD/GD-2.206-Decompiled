
#include "includes.h"


void GJAccountManager::ProcessHttpRequest(std::string p0, std::string p1, std::string p2, GJHttpType p3)
{
    return;
}


void GJAccountManager::addDLToActive(char const* tag, cocos2d::CCObject* p1)
{
    return;
}


void GJAccountManager::addDLToActive(char const* tag)
{
    return;
}


bool GJAccountManager::backupAccount(std::string p0)
{
    return;
}


void GJAccountManager::dataLoaded(DS_Dictionary* p0)
{
    return;
}


void GJAccountManager::encodeDataTo(DS_Dictionary* p0)
{
    return;
}


void GJAccountManager::firstSetup()
{
    return;
}


GJAccountManager* GJAccountManager::get()
{
    return;
}


void GJAccountManager::getAccountBackupURL()
{
    return;
}


void GJAccountManager::getAccountSyncURL()
{
    return;
}


cocos2d::CCObject* GJAccountManager::getDLObject(char const* p0)
{
    return;
}


std::string GJAccountManager::getShaPassword(std::string p0)
{
    return;
}


void GJAccountManager::handleIt(bool p0, std::string p1, std::string p2, GJHttpType p3)
{
    return;
}


void GJAccountManager::handleItDelayed(bool p0, std::string p1, std::string p2, GJHttpType p3)
{
    return;
}


void GJAccountManager::handleItND(cocos2d::CCNode* p0, void* p1)
{
    return;
}


bool GJAccountManager::init()
{
    return;
}


bool GJAccountManager::isDLActive(char const* tag)
{
    return;
}


void GJAccountManager::linkToAccount(std::string p0, std::string p1, int p2, int p3)
{
    return;
}



void GJAccountManager::loginAccount(std::string userName,std::string gjp2){
    if (isDLActive("login_account")){
        return;
    addDLToActive("login_account");
    std::string PostData = cocos2d::CCString::createWithFormat("udid=%s&userName=%s&gjp2=%s",GameManager::sharedState()->m_playerUDID ,userName, gjp2)->getCString(); 
    PostData += "&secret=";
    PostData += cocos2d::CCString::createWithFormat("%c%s%s%c%c%s",'W',"mfv","3899",'g','c',"9")->getCString();
    ProcessHttpRequest("https://www.boomlings.com/database/accounts/loginGJAccount.php", PostData ,"LoginAccount", GJHttpType::LoginAccount);
}


void GJAccountManager::onBackupAccountCompleted(std::string p0, std::string p1)
{
    return;
}


void GJAccountManager::onGetAccountBackupURLCompleted(std::string p0, std::string p1)
{
    return;
}


void GJAccountManager::onGetAccountSyncURLCompleted(std::string p0, std::string p1)
{
    return;
}


void GJAccountManager::onLoginAccountCompleted(std::string p0, std::string p1)
{
    return;
}


void GJAccountManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1)
{
    return;
}


void GJAccountManager::onRegisterAccountCompleted(std::string p0, std::string p1)
{
    return;
}


void GJAccountManager::onSyncAccountCompleted(std::string p0, std::string p1)
{
    return;
}


void GJAccountManager::onUpdateAccountSettingsCompleted(std::string p0, std::string p1)
{
    return;
}


void GJAccountManager::registerAccount(std::string p0, std::string p1, std::string p2)
{
    return;
}


void GJAccountManager::removeDLFromActive(char const* p0)
{
    return;
}


GJAccountManager* GJAccountManager::sharedState()
{
    return;
}


bool GJAccountManager::syncAccount(std::string p0)
{
    return;
}


void GJAccountManager::unlinkFromAccount()
{
    return;
}


void GJAccountManager::updateAccountSettings(int p0, int p1, int p2, std::string p3, std::string p4, std::string p5)
{
    return;
}

