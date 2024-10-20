
#include "includes.h"

/* fixes for callfunc selector and other intellisense macro Issues... (Fuck you C++ Intellisense) */
#include <rtsha1.h>
#include <CCObject.h>


void GJAccountManager::ProcessHttpRequest(std::string endpoint, std::string params, std::string dlkey, GJHttpType httpType)
{
    // Copying off my old Decompiled ProcessHttpRequest function (for now) will verify later.
    cocos2d::extension::CCHttpRequest *request = new cocos2d::extension::CCHttpRequest();
    request->setUrl(endpoint.c_str());
    request->setRequestType(cocos2d::extension::CCHttpRequest::kHttpPost);
    request->setResponseCallback(this, static_cast<cocos2d::extension::SEL_HttpResponse>(onProcessHttpRequestCompleted));
    request->setUserData(NULL);
    // Don't allow the manager to deallocate before the request has been completely been sent off
    if (this != NULL)
        retain();
    request->setRequestData(params.c_str(), params.size());
    request->setTag(dlkey.c_str());
    
    /* Currently did not define this where CCHttpRequest is, will do that later... */
    // request->set_requestTypeGJ((int)httpType);
    
    /* Send-Off */
    cocos2d::extension::CCHttpClient::getInstance()->send(request);
    request->release();
}


void GJAccountManager::addDLToActive(char const* tag, cocos2d::CCObject* object)
{
    m_activeDownloads->setObject(object, tag);
}


void GJAccountManager::addDLToActive(char const* tag)
{
    addDLToActive(tag, cocos2d::CCNode::create());
}


bool GJAccountManager::backupAccount(std::string saveData)
{
    if (isDLActive("bak_account")) return false;
    addDLToActive("bak_account");

    // To remain in the likely order of robtop's actual code
    std::string compressedStr = GameManager::sharedState()->getCompressedSaveString();
    MusicDownloadManager::sharedState()->clearUnusedSongs();
    LocalLevelManager::sharedState()->updateLevelOrder();
    ProcessHttpRequest(
        "https://www.robtopgames.org/database/accounts/backupGJAccountNew.php",
        GameLevelManager::sharedState()->getBasePostString() + "&saveData=" +  compressedStr +  ";" + LocalLevelManager::sharedState()->getCompressedSaveString() + "&secret=" + cocos2d::CCString::createWithFormat("%c%s%s%c%c%s",'W',"mfv","3899",'g','c',"9")->getCString(),
        "BackupAccount",
        GJHttpType::BackupAccount
    );
    return true;
}


void GJAccountManager::dataLoaded(DS_Dictionary* dsdict)
{
    m_username = dsdict->getStringForKey("GJA_001");
    m_accountID = dsdict->getIntegerForKey("GJA_003");
    m_GJP2 = dsdict->getStringForKey("GJA_005");
    if (!m_GJP2.length()){
        m_GJP2 = getShaPassword(m_password);
    }
}


void GJAccountManager::encodeDataTo(DS_Dictionary* dsdict)
{
    dsdict->setStringForKey("GJA_001", m_username);
    dsdict->setIntegerForKey("GJA_003", m_accountID);
    dsdict->setStringForKey("GJA_005", m_GJP2);
}


void GJAccountManager::firstSetup()
{
    /* NOOP */
    return;
}

/* IDK YET What to do here... waiting for ghidra's version tracking thing to merge */
GJAccountManager* GJAccountManager::get()
{
    return ;
}


void GJAccountManager::getAccountBackupURL()
{
    if (isDLActive("burl_account")) return;
    addDLToActive("burl_account");
    ProcessHttpRequest("https://www.boomlings.com/database/getAccountURL.php",
        cocos2d::CCString::createWithFormat("accountID=%i&type=1&secret=%s", m_accountID, cocos2d::CCString::createWithFormat("%c%s%s%c%c%s",'W',"mfv","3899",'g','c',"9")->getCString())->getCString(),
        "burl_account",
        GJHttpType::GetAccountBackupURL
    );
}


void GJAccountManager::getAccountSyncURL()
{
    if (isDLActive("surl_account")) return;
    addDLToActive("surl_account");
    ProcessHttpRequest("https://www.boomlings.com/database/getAccountURL.php",
        cocos2d::CCString::createWithFormat("accountID=%i&type=2&secret=%s", m_accountID, cocos2d::CCString::createWithFormat("%c%s%s%c%c%s",'W',"mfv","3899",'g','c',"9")->getCString())->getCString(),
        "surl_account",
        GJHttpType::GetAccountSyncURL
    );
}


cocos2d::CCObject* GJAccountManager::getDLObject(char const* tag)
{
    return m_activeDownloads->objectForKey(tag);
}


std::string GJAccountManager::getShaPassword(std::string password)
{
    char hexString[40];
    unsigned char hash[20];
    std::string rawPassWithSalt = password + cocos2d::CCString::createWithFormat("%c%s%s%c%c%s","m","I29","fmAn", 'x','g',"Ts")->getCString();
    rtsha1::calc(rawPassWithSalt.c_str(), strlen(rawPassWithSalt.c_str()), hash);
    rtsha1::toHexString(hash, hexString);
    // Returning the hexstring in this form will automatically 
    // convert to std::string Thanks to the compiler
    return hexString;
}


void GJAccountManager::handleIt(bool success, std::string result, std::string tag, GJHttpType httpType)
{
    if (!success) 
        result = "-1";
    switch (httpType){
        case GJHttpType::BackupAccount:
            return onBackupAccountCompleted(result, tag);
        case GJHttpType::SyncAccount:
            return onSyncAccountCompleted(result, tag);
        case GJHttpType::RegisterAccount:
            return onRegisterAccountCompleted(result, tag);
        case GJHttpType::LoginAccount:
            return onLoginAccountCompleted(result, tag);
        case GJHttpType::UpdateAccountSettings:
            return onUpdateAccountSettingsCompleted(result, tag);
        case GJHttpType::GetAccountBackupURL:
            return onGetAccountBackupURLCompleted(result, tag);
        case GJHttpType::GetAccountSyncURL:
            return onGetAccountSyncURLCompleted(result, tag);
        default:
            return;
    }
}


void GJAccountManager::handleItDelayed(bool success, std::string result, std::string tag, GJHttpType httpType)
{
    GJHttpResult* httpResult = GJHttpResult::create(success, result, tag, httpType);
    httpResult->retain();
    /* Would be something like this I would think? I am looking at unsolved patched of IDA Code currently... */ 
    getActionManager()->addAction(
        /* TODO: Translate 0x3DCCCCCD to a readable floating point integer */
        cocos2d::CCSequence::create(cocos2d::CCDelayTime::create(0x3DCCCCCD), cocos2d::CCCallFunc::create(httpResult, callfunc_selector(handleItND))),
        this,
        false
    );
}


void GJAccountManager::handleItND(cocos2d::CCNode* unkown, void* httpObject)
{
    GJHttpResult* result = reinterpret_cast<GJHttpResult*>(httpObject);
    handleIt(result->m_success, result->m_response, result->m_tag, result->m_httptype);
    result->release();
}


bool GJAccountManager::init()
{
    if (!cocos2d::CCNode::init())        
        return false;
    m_activeDownloads = cocos2d::CCDictionary::create();
    m_activeDownloads->retain();
}


bool GJAccountManager::isDLActive(char const* tag)
{
    /* Whelp Wyliemaster, apparently it might actually be this and not getDLObject itself... */
    return getDLObject(tag) != nullptr;
}


/* Uncertain on this one function */
void GJAccountManager::linkToAccount(std::string username, std::string password, int accountID, int playerID)
{
    GameManager::sharedState()->m_playerName = username;
    /* Unknown as to what exactly goes between all of this... my hunch is the accountID at offset 400 */
    // GameManager::sharedState()->m_accountID = accountID UnResolved class member
    GameManager::sharedState()->setPlayerUserID(playerID);
    GameManager::sharedState()->accountStatusChanged();
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

// Until My ghidra project has finished syncing, I'm dumping the ida code bitz gave me
void GJAccountManager::onBackupAccountCompleted(std::string result, std::string tag)
{

//       int v5; // r9
//   int *result; // r0
//   cocos2d::CCString *v7; // r0
//   char *CString; // r0
//   int v9; // r9
//   void (__fastcall ***v10)(_DWORD); // r0
//   unsigned int v11; // r6
//   int v12; // r4
//   int v13; // r0
//   GameLevelManager *v14; // r0
//   float v15; // r2
//   int v16; // r3
//   int *TimeStamp; // r0
//   LocalLevelManager *v18; // r0
//   char v19[4]; // [sp+4h] [bp-2Ch] BYREF
//   int v20; // [sp+8h] [bp-28h] BYREF

//   GJAccountManager::removeDLFromActive(a1, "bak_account", a3, _stack_chk_guard);
//   sub_75309C(&v20, "-1", (int)v19);
//   v5 = sub_7518D4(a2, &v20);
//   sub_750B20(&v20);
//   if ( v5 )
//   {
//     v7 = (cocos2d::CCString *)cocos2d::CCString::createWithFormat((cocos2d::CCString *)"%i", (const char *)0xFFFFFFFE);
//     CString = (char *)cocos2d::CCString::getCString(v7);
//     sub_75309C(&v20, CString, (int)v19);
//     v9 = sub_7518D4(a2, &v20);
//     sub_750B20(&v20);
//     if ( v9 )
//     {
//       sub_75309C(&v20, (char *)&aO1i2r3e45s7t89[1], (int)v19);
//       if ( sub_7518D4(a2, &v20) )
//         v11 = (unsigned int)atoi(*a2) >> 31;
//       else
//         v11 = 0;
//       result = sub_750B20(&v20);
//       if ( v11 )
//       {
//         v12 = *((_DWORD *)a1 + 75);
//         if ( v12 )
//         {
//           v13 = atoi(*a2);
//           return (int *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)v12 + 4))(v12, -3, v13);
//         }
//       }
//       else
//       {
//         v14 = (GameLevelManager *)GameLevelManager::sharedState((GameLevelManager *)result);
//         TimeStamp = GameLevelManager::makeTimeStamp(v14, "bak_account", v15, v16);
//         v18 = (LocalLevelManager *)LocalLevelManager::sharedState((LocalLevelManager *)TimeStamp);
//         LocalLevelManager::markLevelsAsUnmodified(v18);
//         result = (int *)*((_DWORD *)a1 + 75);
//         if ( result )
//           return (int *)(*(int (__fastcall **)(int *))*result)(result);
//       }
//     }
//     else
//     {
//       sub_751EEC((int)a1 + 320, &byte_912B18);
//       v10 = (void (__fastcall ***)(_DWORD))*((_DWORD *)a1 + 74);
//       if ( v10 )
//         (**v10)(v10);
//       result = (int *)*((_DWORD *)a1 + 75);
//       if ( result )
//         return (int *)(*(int (__fastcall **)(int *, int, _DWORD))(*result + 4))(result, -2, 0);
//     }
//   }
//   else
//   {
//     result = (int *)*((_DWORD *)a1 + 75);
//     if ( result )
//       return (int *)(*(int (__fastcall **)(int *, int, _DWORD))(*result + 4))(result, -1, 0);
//   }
//   return result;
}

// TODO

void GJAccountManager::onGetAccountBackupURLCompleted(std::string p0, std::string p1)
{
    
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


void GJAccountManager::registerAccount(std::string userName, std::string password, std::string email)
{
    if (isDLActive("reg_account")) return;
    addDLToActive("reg_account");
    ProcessHttpRequest("https://www.boomlings.com/database/accounts/registerGJAccount.php", 
        cocos2d::CCSting::createWithFormat(
            "userName=%s&password=%s&email=%s&secret=%s", 
            userName, 
            password, 
            email, 
            cocos2d::CCString::createWithFormat("%c%s%s%c%c%s",'W',"mfv","3899",'g','c',"9")->getCString()
        )->getCString(),
        "RegisterAccount", 
        GJHttpType::RegisterAccount
    );
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
