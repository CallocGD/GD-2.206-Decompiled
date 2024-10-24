/* Simple rewrite of the GameLevelManager's code in alphabetical order... */

#include "../headers/includes.h"
/* Blame my .vscode file */
#include "cocos-headers/cocos2dx/support/zip_support/ZipUtils.h"
#include <cocos-ext.h>
#include "GameToolbox.h"
#include "rtsha1.h"
#include "GameLevelManager.h"


/* To make things less Confusing and make the code more condensed... */
#define Wmfd2893gb7 cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 'W', "mfd", "2893", 'g', 'b', "7")->getCString()
#define xI25fpAapCQg cocos2d::CCString::createWithFormat("%c%s%s%c%c%s",'x',"I25","fpAa",'p','C',"Qg")->getCString()

#define FORMAT_STR(FMT, ...) cocos2d::CCString::createWithFormat(FMT, __VA_ARGS__)->getCString()

/* Robtop does not like to handle server stuff as far as I have been aware 
 * thanks to some knowlege of some other people so I wrote this Macro to help 
 * with formatting some of these http requests off without loosing any of the 
 * compiled information and keeping this file as condensed as possible without 
 * losing the Readability of the original code */
#define FORMAT_HTTP_REQUEST(FORMAT, ...) getBasePostString() + cocos2d::CCString::createWithFormat(FORMAT, __VA_ARGS__)->getCString()



void GameLevelManager::ProcessHttpRequest(std::string endpoint, std::string params, std::string tag, GJHttpType httpType)
{
    if (GameManager::sharedState()->getGameVariable("0055"))
    {
        /* Seems to have had a typo on Robtop's End
         * URL Should've been named: "https://www.boomlings.com/database/checkIfServerOnline.php"
         * where "databas" should've been named "database"...*/
        endpoint = "https://www.boomlings.com/databas/checkIfServerOnline.php";
    };
    cocos2d::extension::CCHttpRequest *request = new cocos2d::extension::CCHttpRequest();
    request->setUrl(endpoint.c_str());
    request->setRequestType(cocos2d::extension::CCHttpRequest::kHttpPost);
    request->setResponseCallback(this, static_cast<cocos2d::extension::SEL_HttpResponse>(onProcessHttpRequestCompleted));
    request->setUserData(NULL);
    if (this != NULL)
        retain();
    request->setRequestData(params.c_str(), params.size());
    request->setTag(tag.c_str());
    // Should've been in here but isn't declared yet. TODO: Check 2.0 for function's name? 
    // request->set_requestTypeGJ((int)httpType);
    /* Send-Off */
    cocos2d::extension::CCHttpClient::getInstance()->send(request);
    request->release();
}




void GameLevelManager::acceptFriendRequest(int targetAccountID, int requestID)
{
    if (0 < targetAccountID && 0 < requestID)
    {
        auto key = cocos2d::CCString::createWithFormat("accFriendReq_%i_%i", targetAccountID, requestID)->getCString();
        m_friendReqAndUserBlocks->setObject(cocos2d::CCNode::create(),key);
        ProcessHttpRequest(
            "https://www.boomlings.com/database/acceptGJFriendRequest20.php", 
            FORMAT_HTTP_REQUEST("&targetAccountID=%i&requestID=%i&secret=%s", targetAccountID, requestID, Wmfd2893gb7), key, GJHttpType::AcceptFriendRequest);
    }
}


int GameLevelManager::accountIDForUserID(int userID)
{
    return m_accountIDtoUserIDDict->valueForKey(userID)->intValue();
}


void GameLevelManager::addDLToActive(const char *tag)
{
    m_downloadObjects->setObject(cocos2d::CCNode::create(), tag);
}

\
bool GameLevelManager::areGauntletsLoaded()
{
    return m_gauntletLevels->count() > 0;
}

/* iirc (If I remeber correctly) Only Eldermods Have this functinality enabled. */
void GameLevelManager::banUser(int userID)
{
    return;
}



void GameLevelManager::blockUser(int accountID)
{
    if (accountID > 0)
    {
        /* If the user is now blocked in our blacklist do this...*/
        auto blockedUserKey = cocos2d::CCString::createWithFormat("blockUser_%i", accountID)->getCString();
        if (m_friendReqAndUserBlocks->objectForKey(blockedUserKey) == nullptr)
        {
            /* Set the user as being blocked... */
            m_friendReqAndUserBlocks->setObject(cocos2d::CCNode::create(), blockedUserKey);
            ProcessHttpRequest(
                "https://www.boomlings.com/database/blockGJUser20.php", 
                FORMAT_HTTP_REQUEST("&targetAccountID=%i&secret=%s", accountID, Wmfd2893gb7) , 
                blockedUserKey, 
                GJHttpType::BlockUser
            );
        }
    }
}


void GameLevelManager::cleanupDailyLevels()
{
    auto array = m_dailyLevels->allKeys();
    /* There's some unknown names so I'm going to use these letters for the time being... */
    unsigned int a = 0, b = 0, c, d, e;
    for (unsigned int i= 0; i < array->count(); i++) {
        unsigned int count = array->count(); 
        const char* key = reinterpret_cast<cocos2d::CCString *>(array->objectAtIndex(i))->getCString();
        GJGameLevel* level= reinterpret_cast<GJGameLevel*>(m_dailyLevels->objectForKey(key));
        // TODO: Someone Please Rename this class memebers :/
        // auto dailyID = level->m_dailyID_Random - level->m_dailyID_Seed;
        // if (dailyID < 0x186a1) {
        //     e = dailyID;
        //     d = b;
        //     c = a;
        // }
        // if (dailyID < c) {
        //     level->m_levelNotDownloaded = true;
        //     level->m_dontSave = true;
        //     if (level->m_newNormalPercent_Random - level->m_newNormalPercent_Seed < 1) {
        //         m_dailyLevels->removeObjectForKey(key);
        //     }
        //     e = a;
        //     d = b;
        // }
        // a = e;
        // b = d;
    }
}

/* This exists Somewhere, the real questsion I have for Robtop is where did you put this code? - Calloc */
cocos2d::CCArray * splittoCCArray(std::string str,char *delimiter)
{
    cocos2d::CCArray *array = cocos2d::CCArray::create();
    size_t pos = str.find(delimiter,0);
    size_t npos = str.size();
    size_t start = 0;

    while( true ) {
        std::string substr = str.substr(start, pos - start);
        if (substr != "" || start != npos) {
            array->addObject(cocos2d::CCString::create(substr));
        }
        if (pos == 0xffffffff) break;
        start = pos + 1;
        pos = str.find(delimiter, start);
    }
    return array;
}

/* Whoever said these were bool in the geode bindings lied to you - Calloc */
cocos2d::CCArray* GameLevelManager::createAndGetAccountComments(std::string commentData, int accountID)
{
    return createAndGetCommentsFull(commentData, accountID, true);
}


cocos2d::CCArray* GameLevelManager::createAndGetCommentsFull(std::string data, int ID, bool profileComment)
{   
    GJComment* comment;
    GJUserScore* user;
    cocos2d::CCArray* comments = cocos2d::CCArray::create();
    cocos2d::CCArray* raw_comments = splittoCCArray(data, "|");

    for (unsigned int i = 0; i < raw_comments->count(); i++) {
        std::string s = reinterpret_cast<cocos2d::CCString*>(raw_comments->objectAtIndex(i))->getCString();
        if (profileComment){
             comment = GJComment::create(responseToDict(s, true));
            if (comment != nullptr){
                comment->m_accountID = ID;
                comments->addObject(comment);
            }
        } else {
            auto UserAndComment = splittoCCArray(s,":");
            if (UserAndComment->count() > 1){
                /* Correct me if I'm wrong about stringAtIndex still existing with CCArray... */
                comment = GJComment::create(responseToDict(UserAndComment->stringAtIndex(0)->getCString(), true));
                user = GJUserScore::create(responseToDict(UserAndComment->stringAtIndex(1)->getCString(), true));
                if (user != nullptr) {
                    if (comment->m_userScore != user) {
                        user->retain();
                        if (comment->m_userScore != nullptr) {
                            comment->m_userScore->release();
                        }
                        comment->m_userScore = user;
                    }
                }
                storeUserName(comment->m_userID,comment->m_accountID, user->m_userName);
            }
            if (comment != nullptr){
                comment->m_levelID = ID;
                comments->addObject(comment);
            }
        }
    }
    return comments;
}


cocos2d::CCArray* GameLevelManager::createAndGetLevelComments(std::string commentData, int levelID)
{
    return createAndGetCommentsFull(commentData, levelID, false);
}


cocos2d::CCArray* GameLevelManager::createAndGetLevelLists(std::string response)
{
    auto lists = cocos2d::CCArray::create();
    cocos2d::CCArray* array = splittoCCArray(response,"|");
    for (unsigned int i = 0; i < array->count(); i++) {
        GJLevelList* obj = GJLevelList::create(responseToDict(reinterpret_cast<cocos2d::CCString*>(array->objectAtIndex(i))->getCString(),false));
        if (obj != nullptr) {
            lists->addObject(obj);
        }
    }
    return lists;
}


cocos2d::CCArray* GameLevelManager::createAndGetLevels(std::string p0)
{
    return;
}


cocos2d::CCArray* GameLevelManager::createAndGetMapPacks(std::string p0)
{
    return;
}


cocos2d::CCArray* GameLevelManager::createAndGetScores(std::string p0, GJScoreType p1)
{
    return;
}


GJGameLevel* GameLevelManager::createNewLevel()
{
    return;
}


GJLevelList* GameLevelManager::createNewLevelList()
{
    return;
}



/* Unknown Return: GameLevelManager::createPageInfo(int p0, int p1, int p2){}; */

GJSmartTemplate* GameLevelManager::createSmartTemplate()
{
    return;
}


void GameLevelManager::dataLoaded(DS_Dictionary* p0)
{
    return;
}


void GameLevelManager::deleteAccountComment(int p0, int p1)
{
    return;
}


void GameLevelManager::deleteComment(int p0, CommentType p1, int p2)
{
    return;
}


void GameLevelManager::deleteFriendRequests(int p0, cocos2d::CCArray* p1, bool p2)
{
    return;
}


void GameLevelManager::deleteLevel(GJGameLevel* p0)
{
    return;
}


void GameLevelManager::deleteLevelComment(int p0, int p1)
{
    return;
}


void GameLevelManager::deleteLevelList(GJLevelList* p0)
{
    return;
}


void GameLevelManager::deleteSentFriendRequest(int p0)
{
    return;
}


void GameLevelManager::deleteServerLevel(int p0)
{
    return;
}


void GameLevelManager::deleteServerLevelList(int p0)
{
    return;
}


void GameLevelManager::deleteSmartTemplate(GJSmartTemplate* p0)
{
    return;
}


void GameLevelManager::deleteUserMessages(GJUserMessage* message, cocos2d::CCArray* messages, bool isSender)
{
    return;
}


void GameLevelManager::downloadLevel(int p0, bool p1)
{
    return;
}


void GameLevelManager::downloadUserMessage(int p0, bool p1)
{
    return;
}


void GameLevelManager::encodeDataTo(DS_Dictionary* p0)
{
    return;
}


void GameLevelManager::firstSetup()
{
    return;
}


void GameLevelManager::followUser(int p0)
{
    return;
}


GJFriendRequest* GameLevelManager::friendRequestFromAccountID(int p0)
{
    return;
}


void GameLevelManager::friendRequestWasRemoved(int p0, bool p1)
{
    return;
}


GameLevelManager* GameLevelManager::get()
{
    return;
}


char const* GameLevelManager::getAccountCommentKey(int p0, int p1)
{
    return;
}


void GameLevelManager::getAccountComments(int accountID, int page, int total)
{
    return;
}


int GameLevelManager::getActiveDailyID(GJTimedLevelType p0)
{
    return;
}


std::string GameLevelManager::getActiveDailyID(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7)
{
    return;
}


GJSmartTemplate* GameLevelManager::getActiveSmartTemplate()
{
    return;
}


cocos2d::CCArray* GameLevelManager::getAllSmartTemplates()
{
    return;
}


cocos2d::CCDictionary* GameLevelManager::getAllUsedSongIDs()
{
    return;
}


GJLevelList* GameLevelManager::getAllUsedSongIDs(int p0)
{
    return;
}


std::string GameLevelManager::getBasePostString()
{
    std::string postStr = cocos2d::CCString::createWithFormat("gameVersion=%i&binaryVersion=%i&udid=%s&uuid=%i",22, 42, GameManager::sharedState()->m_playerUDID,
                      GameManager::sharedState()->m_playerUserIDSeed - GameManager::sharedState()->m_playerUserIDRand)->getCString();
  
    if (GJAccountManager::sharedState()->m_accountIDSeed - GJAccountManager::sharedState()->m_accountIDRand) {
        postStr += FORMAT_STR(
            "&accountID=%i&gjp2=%s",
            GJAccountManager::sharedState()->m_accountIDSeed - GJAccountManager::sharedState()->m_accountIDRand, 
            GJAccountManager::sharedState()->m_GJP2);
    }
    return postStr;
}


bool GameLevelManager::getBoolForKey(char const* p0)
{
    return;
}


std::string GameLevelManager::getCommentKey(int ID, int page, int mode, CommentKeyType keytype)
{
    return;
}


cocos2d::CCArray* GameLevelManager::getCompletedLevels(bool p0)
{
    return;
}


int GameLevelManager::getDailyID(GJTimedLevelType p0)
{
    return;
}


double GameLevelManager::getDailyTimer(GJTimedLevelType p0)
{
    return;
}


char const* GameLevelManager::getDeleteCommentKey(int p0, int p1, int p2)
{
    return;
}


char const* GameLevelManager::getDeleteMessageKey(int p0, bool p1)
{
    return;
}


char const* GameLevelManager::getDescKey(int p0)
{
    return;
}


char const* GameLevelManager::getDiffKey(int p0)
{
    return;
}


bool GameLevelManager::getDiffVal(int p0)
{
    return;
}


std::string GameLevelManager::getFolderName(int p0, bool p1)
{
    return;
}


char const* GameLevelManager::getFriendRequestKey(bool p0, int p1)
{
    return;
}


void GameLevelManager::getFriendRequests(bool sent,int page,int total)
{
    
}


void GameLevelManager::getGJChallenges()
{
    return;
}


void GameLevelManager::getGJDailyLevelState(GJTimedLevelType levelType){  
    const char* key;
    switch (levelType){
        case GJTimedLevelType::Weekly:
            key = "weekly_state";
        case GJTimedLevelType::Event:
            key = "event_state";
        default:
            key = "daily_state";
    }
    if (isDLActive(key)) return;
    addDLToActive(key);
    ProcessHttpRequest("https://www.boomlings.com/database/getGJDailyLevel.php", 
    FORMAT_HTTP_REQUEST("&secret=%s&type=%i", Wmfd2893gb7, levelType), key, GJHttpType::GetGJDailyLevelState);
}


PASS(void GameLevelManager::getGJRewards(int rewardID), "Not Enough Reasons to Do this one. Has Some unresolved Class Members in GameManager")

void GameLevelManager::getGJUserInfo(int accountID)
{
    const char* key = getUserInfoKey(accountID);
    if (isDLActive(key)) return;
    addDLToActive(key);

    ProcessHttpRequest("https://www.boomlings.com/database/getGJUserInfo20.php", FORMAT_HTTP_REQUEST("&targetAccountID=%i&secret=%s", accountID, Wmfd2893gb7), key, GJHttpType::GetGJUserInfo);

}


char const* GameLevelManager::getGauntletKey(int p0)
{
    return FORMAT_STR("%i", p0);
}

const char* GameLevelManager::getGauntletSearchKey(int gauntlet){
    return FORMAT_STR("%i", gauntlet);
}

void GameLevelManager::getGauntletLevels(int gauntlet)
{
    const char* key = getGauntletSearchKey(gauntlet);
    if (isDLActive(key)) return;

    addDLToActive(key);
    std::string postStr = getBasePostString();
    postStr += "&gauntlet=";
    postStr += cocos2d::CCString::createWithFormat("%i",gauntlet)->getCString();
    postStr += "&secret=";
    postStr += Wmfd2893gb7;
    /* Robtop, Why are you using http and not https here? :/ */
    /* http://www.boomlings.com/database/getGJLevels21.php */
    ProcessHttpRequest(LevelTools::base64DecodeString("aHR0cDovL3d3dy5ib29tbGluZ3MuY29tL2RhdGFiYXNlL2dldEdKTGV2ZWxzMjEucGhw"),postStr, key , GJHttpType::GetOnlineLevels); 
}

void GameLevelManager::getGauntlets(){
    if (isDLActive("get_gauntlets")) return;
    addDLToActive("get_gauntlets");
    ProcessHttpRequest(
        "https://www.boomlings.com/database/getGJGauntlets21.php",
        getBasePostString() + FORMAT_STR("&secret=%s&special=1",Wmfd2893gb7), "get_gauntlets", GJHttpType::GetGauntlets
    );
}


int GameLevelManager::getHighestLevelOrder()
{
    return;
}


int GameLevelManager::getIntForKey(char const* key)
{
    return m_searchFilters->valueForKey(key)->intValue();
}


PASS(void GameLevelManager::getLeaderboardScores(char const* p0), "UnSolved Vtables part of LeaderboardManagerDelegate")



const char * GameLevelManager::getLenKey(int len)
{
    return FORMAT_STR("Len%i", len);
}


bool GameLevelManager::getLenVal(int len)
{
    return m_searchFilters->valueForKey(getLenKey(len))->boolValue();
}


PASS(std::string GameLevelManager::getLengthStr(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5), "Not in the mood to do this one yet...")


void GameLevelManager::getLevelComments(int ID, int page, int total, int mode, CommentKeyType keytype)
{
    std::string key = getCommentKey(ID,page,mode,keytype);
    if (isDLActive(key.c_str())) return;
    addDLToActive(key.c_str());
    
    std::string postStr = FORMAT_HTTP_REQUEST("&page=%i&total=%i&secret=%s&mode=%i", page, total, Wmfd2893gb7, mode);
    postStr += (keytype == CommentKeyType::User) ? "&userID=" : "&levelID=";
    postStr += FORMAT_STR("%i", ID);

    int count = GameManager::sharedState()->getGameVariable("0088") ? 20: 10;
    postStr += FORMAT_STR("&count=%i", (GameManager::sharedState()->getGameVariable("0094") && count != 10) ? count : count >>= 1);

    ProcessHttpRequest(
        (keytype == CommentKeyType::User) ? 
            "https://www.boomlings.com/database/getGJCommentHistory.php":
            "https://www.boomlings.com/database/getGJComments21.php" , 
        postStr, key, GJHttpType::GetLevelComments);
}


const char* GameLevelManager::getLevelDownloadKey(int levelID, bool isGauntlet)
{
    return FORMAT_STR("%i_%i", levelID, isGauntlet);
}


const char* GameLevelManager::getLevelKey(int levelID)
{
    return FORMAT_STR("%i", levelID);
}


PASS(void GameLevelManager::getLevelLeaderboard(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2), "I'll do this one Later in the future")



char const* GameLevelManager::getLevelLeaderboardKey(int p0, LevelLeaderboardType p1, LevelLeaderboardMode p2)
{
    return FORMAT_STR("ll_%i_%i_%i", p0, p1, p2);
}


char const* GameLevelManager::getLevelListKey(int ID)
{
    return FORMAT_STR("%i", ID);
}


void GameLevelManager::getLevelLists(GJSearchObject *searchObject)
{
    const char *dl_key = searchObject->getKey();
    if (isDLActive(dl_key)) return;
    
    addDLToActive(dl_key);
    ProcessHttpRequest(
        "https://www.boomlings.com/database/getGJLevelLists.php",
        FORMAT_HTTP_REQUEST("&str=%s&type=%i&page=%i&secret=%s", 
            searchObject->m_searchQuery, searchObject->m_searchType, searchObject->m_page, Wmfd2893gb7), 
        dl_key, 
        GJHttpType::GetLevelLists
    );
}



void GameLevelManager::getLevelSaveData()
{
    if (isDLActive("lvl_data")) return;
    addDLToActive("lvl_data");
    ProcessHttpRequest(
        "https://www.boomlings.com/database/getSaveData.php", 
        getBasePostString() + "&secret=" + Wmfd2893gb7,
        "lvl_data", GJHttpType::GetLevelSaveData);
}


PASS(char const* GameLevelManager::getLikeAccountItemKey(LikeItemType likeType, int , bool p2, int p3), "If Anyone wants to decompile this be my guest...")
PASS(char const* GameLevelManager::getLikeItemKey(LikeItemType p0, int p1, bool p2, int p3), "If Anyone Wants to Decompile This one be my guest...")

GJGameLevel * GameLevelManager::getLocalLevel(int ID)
{
    GJGameLevel *level;
    cocos2d::CCArray* localLevels = LocalLevelManager::sharedState()->m_localLevels;
    for (unsigned int i = 0; i <= localLevels->count(); i++){
        level = (GJGameLevel *)localLevels->objectAtIndex(i);
        if (level->m_M_ID == ID) 
            return level;
    }
    return nullptr;
}

GJGameLevel* GameLevelManager::getLocalLevelByName(std::string levelName)
{
    GJGameLevel *level;
    cocos2d::CCArray* localLevels = LocalLevelManager::sharedState()->m_localLevels;
    for (unsigned int i = 0; i <= localLevels->count(); i++){
        level = (GJGameLevel *)localLevels->objectAtIndex(i);
        if (level->m_levelName == levelName) 
            return level;
    }
    return nullptr;
}

GJLevelList * GameLevelManager::getLocalLevelList(int ID)
{
    GJLevelList *List;
    cocos2d::CCArray* localLists = LocalLevelManager::sharedState()->m_localLists;
    for (unsigned int i = 0; i <= localLists->count(); i++){
        List = (GJLevelList *)localLists->objectAtIndex(i);
        if (List->m_M_ID == ID) 
            return List;
    }
    return nullptr;
}


PASS(int GameLevelManager::getLowestLevelOrder(), "Confusing Assembly and Ghidra code")


GJGameLevel * GameLevelManager::getMainLevel(int levelID, bool loaded)
{
  
    GJGameLevel* level = (GJGameLevel *)m_mainLevels->objectForKey(getLevelKey(levelID));
    GJGameLevel* loadedLevel = LevelTools::getLevel(levelID,loaded);
    if (loadedLevel == nullptr) {
        loadedLevel = LevelTools::getLevel(levelID,false);
        m_mainLevels->setObject(loadedLevel, getLevelKey(levelID));
    }
    else {
        level->m_levelString = loadedLevel->m_levelString;
        level->setStars(loadedLevel->m_stars_rand - loadedLevel->m_stars_seed);
        level->m_requiredCoins = loadedLevel->m_requiredCoins;
        level->m_levelName = loadedLevel->m_levelName;
        level->m_audioTrack = loadedLevel->m_audioTrack;
        level->setDemon(loadedLevel->m_demonRandom - loadedLevel->m_demonSeed);
        level->m_twoPlayerMode = loadedLevel->m_twoPlayerMode;
        level->m_difficulty = loadedLevel->m_difficulty;
        level->m_capacityString = loadedLevel->m_capacityString;
        level->setLevelID(levelID);
        level->m_timestamp = loadedLevel->m_timestamp;
        level->m_levelLength = loadedLevel->m_levelLength;
    }
    return level;
}


const char* GameLevelManager::getMapPackKey(int pack)
{
    return FORMAT_STR("pack_%i", pack);
}


void GameLevelManager::getMapPacks(GJSearchObject* searchObject)
{
    const char* key = searchObject->getKey();
    if (isDLActive(key)) return;
    addDLToActive(key);
    ProcessHttpRequest(
        "https://www.boomlings.com/database/getGJMapPacks21.php", 
        FORMAT_HTTP_REQUEST("&page=%i&secret=%s", searchObject->m_page, Wmfd2893gb7), 
        key, GJHttpType::GetMapPacks);
}


char const* GameLevelManager::getMessageKey(int ID)
{
    return FORMAT_STR("message_%i", ID);
}


char const* GameLevelManager::getMessagesKey(bool p0, int p1)
{
    return FORMAT_STR("messages_%i_%i", p0, p1);
}


void GameLevelManager::getNews()
{
    if (!m_newsObtained) m_newsObtained = true;
}


PASS(int GameLevelManager::getNextFreeTemplateID(), "Not Enough Things for Templates to be worked on yet...");


std::string GameLevelManager::getNextLevelName(std::string p0)
{
    return;
}


void GameLevelManager::getOnlineLevels(GJSearchObject* p0)
{
    return;
}


char const* GameLevelManager::getPageInfo(char const* p0)
{
    return;
}


char const* GameLevelManager::getPostCommentKey(int p0)
{
    return;
}


const char * GameLevelManager::getRateStarsKey(int key)
{
    return;
}


char const* GameLevelManager::getReportKey(int p0)
{
    return;
}


GJGameLevel* GameLevelManager::getSavedDailyLevel(int p0)
{
    return;
}


GJGameLevel* GameLevelManager::getSavedDailyLevelFromLevelID(int p0)
{
    return;
}


GJGameLevel* GameLevelManager::getSavedGauntlet(int p0)
{
    return;
}


GJGameLevel* GameLevelManager::getSavedGauntletLevel(int p0)
{
    return;
}


GJGameLevel* GameLevelManager::getSavedLevel(GJGameLevel* p0)
{
    return;
}


GJGameLevel* GameLevelManager::getSavedLevel(int p0)
{
    return;
}


GJLevelList* GameLevelManager::getSavedLevelList(int p0)
{
    return;
}


cocos2d::CCArray* GameLevelManager::getSavedLevelLists(int p0)
{
    return;
}


cocos2d::CCArray* GameLevelManager::getSavedLevels(bool p0, int p1)
{
    return;
}



/* Unknown Return: GameLevelManager::getSavedMapPack(int p0){}; */

cocos2d::CCScene* GameLevelManager::getSearchScene(char const* p0)
{
    return;
}


int GameLevelManager::getSplitIntFromKey(char const* p0, int p1)
{
    return;
}



/* Unknown Return: GameLevelManager::getStoredLevelComments(char const* p0){}; */

cocos2d::CCArray* GameLevelManager::getStoredOnlineLevels(char const* p0)
{
    return;
}


cocos2d::CCArray* GameLevelManager::getStoredUserList(UserListType p0)
{
    return;
}


GJUserMessage* GameLevelManager::getStoredUserMessage(int p0)
{
    return;
}


GJUserMessage* GameLevelManager::getStoredUserMessageReply(int p0)
{
    return;
}


double GameLevelManager::getTimeLeft(char const* p0, float p1)
{
    return;
}


void GameLevelManager::getTopArtists(int page, int total)
{
    return;
}


const char* GameLevelManager::getTopArtistsKey(int page)
{
    return;
}


char const* GameLevelManager::getUploadMessageKey(int p0)
{
    return;
}


char const* GameLevelManager::getUserInfoKey(int p0)
{
    return;
}


void GameLevelManager::getUserList(UserListType p0)
{
    return;
}


void GameLevelManager::getUserMessages(bool p0, int p1, int p2)
{
    return;
}


void GameLevelManager::getUsers(GJSearchObject* p0)
{
    return;
}


void GameLevelManager::gotoLevelPage(GJGameLevel* p0)
{
    return;
}


void GameLevelManager::handleIt(bool p0, std::string p1, std::string p2, GJHttpType p3)
{
    return;
}


void GameLevelManager::handleItDelayed(bool p0, std::string p1, std::string p2, GJHttpType p3)
{
    return;
}


void GameLevelManager::handleItND(cocos2d::CCNode* p0, void* p1)
{
    return;
}


bool GameLevelManager::hasDailyStateBeenLoaded(GJTimedLevelType p0)
{
    return;
}


bool GameLevelManager::hasDownloadedLevel(int p0)
{
    return;
}


bool GameLevelManager::hasDownloadedList(int p0)
{
    return;
}


bool GameLevelManager::hasLikedAccountItem(LikeItemType p0, int p1, bool p2, int p3)
{
    return;
}


bool GameLevelManager::hasLikedItem(LikeItemType p0, int p1, bool p2, int p3)
{
    return;
}


bool GameLevelManager::hasLikedItemFullCheck(LikeItemType p0, int p1, int p2)
{
    return;
}


bool GameLevelManager::hasRatedDemon(int p0)
{
    return;
}


bool GameLevelManager::hasRatedLevelStars(int p0)
{
    return;
}


bool GameLevelManager::hasReportedLevel(int p0)
{
    return;
}


bool GameLevelManager::init()
{
    return;
}


void GameLevelManager::invalidateMessages(bool p0, bool p1)
{
    return;
}


void GameLevelManager::invalidateRequests(bool p0, bool p1)
{
    return;
}


void GameLevelManager::invalidateUserList(UserListType p0, bool p1)
{
    return;
}


bool GameLevelManager::isDLActive(char const* tag)
{
    return;
}


bool GameLevelManager::isFollowingUser(int p0)
{
    return;
}


bool GameLevelManager::isTimeValid(char const* p0, float p1)
{
    return;
}


bool GameLevelManager::isUpdateValid(int p0)
{
    return;
}


int GameLevelManager::itemIDFromLikeKey(char const* p0)
{
    return;
}


bool GameLevelManager::keyHasTimer(char const* p0)
{
    return;
}


int GameLevelManager::levelIDFromCommentKey(char const* p0)
{
    return;
}


int GameLevelManager::levelIDFromPostCommentKey(char const* p0)
{
    return;
}


int GameLevelManager::likeFromLikeKey(char const* p0)
{
    return;
}



std::string gen_random(int size){
    cocos2d::CCString* rs = cocos2d::CCString::create("");
    for (int i = 0; i < size; i++) {
        rs = cocos2d::CCString::createWithFormat(
            "%s%c", rs->getCString(), "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"[rand() % 0x3e]
        );
    }
    return rs->getCString();
}



void GameLevelManager::likeItem(LikeItemType likeType, int itemID, bool like, int special)
{
    unsigned char hash[40];
    char hexString[20];
    
    if (likeType == LikeItemType::Level) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.like",100,false);
    }
  
    if (hasLikedItemFullCheck(likeType, itemID, special)){
        return;
    }
    markItemAsLiked(likeType,itemID, like, special);
    std::string itemKey = getLikeItemKey(likeType, itemID, like, special);
    std::string postStr = getBasePostString() + cocos2d::CCString::createWithFormat
                       ("&itemID=%i&like=%i&type=%i&secret=%s&special=%i",itemID, like, likeType,
    cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 'W',"mfd","2893",'g','b',"7")->getCString(), special)->getCString();    
    postStr += "&rs=";

    std::string rs = gen_random(10);

    postStr += rs;

    std::string rawchk = cocos2d::CCString::createWithFormat
                       (
                        "%i%i%i%i%s%i%s%i%s",
                        special,
                        itemID,
                        like,
                        likeType, 
                        rs, 
                        GJAccountManager::sharedState()->m_accountIDSeed - GJAccountManager::sharedState()->m_accountIDRand,
                        GameManager::sharedState()->m_playerUDID, 
                        GameManager::sharedState()->m_playerUserIDSeed - GameManager::sharedState()->m_playerUserIDRand,
                        cocos2d::CCString::createWithFormat("%c%s%s%c%c%s",'y',"sg6","pUrt",'j','n',"0J")->getCString()
                        )->getCString();
    
    rtsha1::calc(rawchk.data(), strlen(rawchk.data()), hash);
    rtsha1::toHexString(hash, hexString);
    postStr += "&chk="; 
    postStr += cocos2d::ZipUtils::base64EncodeEnc(hexString, "58281");
    ProcessHttpRequest("https://www.boomlings.com/database/likeGJItem211.php", postStr, itemKey , GJHttpType::LikeItem);
}


void GameLevelManager::limitSavedLevels()
{
    return;
}


void GameLevelManager::makeTimeStamp(char const* p0)
{
    return;
}


void GameLevelManager::markItemAsLiked(LikeItemType p0, int p1, bool p2, int p3)
{
    return;
}


void GameLevelManager::markLevelAsDownloaded(int p0)
{
    return;
}


void GameLevelManager::markLevelAsRatedDemon(int p0)
{
    return;
}


void GameLevelManager::markLevelAsRatedStars(int p0)
{
    return;
}


void GameLevelManager::markLevelAsReported(int p0)
{
    return;
}


void GameLevelManager::markListAsDownloaded(int id)
{
    return;
}


void GameLevelManager::messageWasRemoved(int p0, bool p1)
{
    return;
}


void GameLevelManager::onAcceptFriendRequestCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onBanUserCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onBlockUserCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onDeleteCommentCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onDeleteFriendRequestCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onDeleteServerLevelCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onDeleteServerLevelListCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onDeleteUserMessagesCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onDownloadLevelCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onDownloadUserMessageCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetAccountCommentsCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetFriendRequestsCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetGJChallengesCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetGJDailyLevelStateCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetGJRewardsCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetGJUserInfoCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetGauntletsCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetLeaderboardScoresCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetLevelCommentsCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetLevelLeaderboardCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetLevelListsCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetLevelSaveDataCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetMapPacksCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetNewsCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetOnlineLevelsCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetTopArtistsCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetUserListCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetUserMessagesCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onGetUsersCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onLikeItemCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1)
{
    return;
}


void GameLevelManager::onRateDemonCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onRateStarsCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onReadFriendRequestCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onRemoveFriendCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onReportLevelCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onRequestUserAccessCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onRestoreItemsCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onSetLevelFeaturedCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onSetLevelStarsCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onSubmitUserInfoCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onSuggestLevelStarsCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onUnblockUserCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onUpdateDescriptionCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onUpdateLevelCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onUpdateUserScoreCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onUploadCommentCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onUploadFriendRequestCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onUploadLevelCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onUploadLevelListCompleted(std::string response, std::string tag)
{
    return;
}


void GameLevelManager::onUploadUserMessageCompleted(std::string response, std::string tag)
{
    return;
}


int GameLevelManager::pageFromCommentKey(char const* p0)
{
    return;
}


void GameLevelManager::parseRestoreData(std::string p0)
{
    return;
}


void GameLevelManager::performNetworkTest()
{
    if (!m_networkTested->getValue())
    {
        bool v = m_networkTested->getValue(); v = true;
        std::string postData = "temp";
        cocos2d::extension::CCHttpRequest *request = new cocos2d::extension::CCHttpRequest();
        request->setUrl("https://www.google.com");
        /* Unknown Field Call where variable 0x74 is set to 1 */
        request->setRequestType(cocos2d::extension::CCHttpRequest::kHttpPost);
        request->setResponseCallback(this, static_cast<cocos2d::extension::SEL_HttpResponse>(onProcessHttpRequestCompleted));
        request->setUserData(nullptr);
        retain();
        request->setRequestData(postData.c_str(), postData.size());
        request->setTag("tag");
        cocos2d::extension::CCHttpClient::getInstance()->send(request);
        request->release();
    }
};


void GameLevelManager::processOnDownloadLevelCompleted(std::string p0, std::string p1, bool p2)
{
    return;
}


void GameLevelManager::purgeUnusedLevels()
{
    return;
}


void GameLevelManager::rateDemon(int p0, int p1, bool p2)
{
    return;
}


void GameLevelManager::rateStars(int p0, int p1)
{
    return;
}


void GameLevelManager::readFriendRequest(int p0)
{
    return;
}


void GameLevelManager::removeDLFromActive(char const* p0)
{
    return;
}



/* Unknown Return: GameLevelManager::removeDelimiterChars(std::string p0, bool p1){}; */

void GameLevelManager::removeFriend(int p0)
{
    return;
}


void GameLevelManager::removeLevelDownloadedKeysFromDict(cocos2d::CCDictionary* p0)
{
    return;
}


void GameLevelManager::removeUserFromList(int p0, UserListType p1)
{
    return;
}


void GameLevelManager::reportLevel(int p0)
{
    return;
}


void GameLevelManager::requestUserAccess()
{
    return;
}


void GameLevelManager::resetAccountComments(int p0)
{
    return;
}


void GameLevelManager::resetAllTimers()
{
    return;
}


void GameLevelManager::resetCommentTimersForLevelID(int p0, CommentKeyType p1)
{
    return;
}


void GameLevelManager::resetDailyLevelState(GJTimedLevelType p0)
{
    return;
}


void GameLevelManager::resetGauntlets()
{
    return;
}


void GameLevelManager::resetStoredUserList(UserListType p0)
{
    return;
}


void GameLevelManager::resetTimerForKey(char const* p0)
{
    return;
}


cocos2d::CCDictionary* GameLevelManager::responseToDict(std::string p0, bool p1)
{
    return;
}


void GameLevelManager::restoreItems()
{
    return;
}


void GameLevelManager::saveFetchedLevelLists(cocos2d::CCArray* p0)
{
    return;
}


void GameLevelManager::saveFetchedLevels(cocos2d::CCArray* p0)
{
    return;
}


void GameLevelManager::saveFetchedMapPacks(cocos2d::CCArray* p0)
{
    return;
}


void GameLevelManager::saveGauntlet(GJMapPack* p0)
{
    return;
}


void GameLevelManager::saveLevel(GJGameLevel* p0)
{
    return;
}


void GameLevelManager::saveLevelList(GJLevelList* p0)
{
    return;
}


void GameLevelManager::saveLocalScore(int p0, int p1, int p2)
{
    return;
}


void GameLevelManager::saveMapPack(GJMapPack* p0)
{
    return;
}


void GameLevelManager::setActiveSmartTemplate(GJSmartTemplate* p0)
{
    return;
}


void GameLevelManager::setBoolForKey(bool p0, char const* p1)
{
    return;
}


void GameLevelManager::setDiffVal(int p0, bool p1)
{
    return;
}


void GameLevelManager::setFolderName(int p0, std::string p1, bool p2)
{
    return;
}


void GameLevelManager::setIntForKey(int p0, char const* p1)
{
    return;
}


void GameLevelManager::setLenVal(int p0, bool p1)
{
    return;
}


void GameLevelManager::setLevelFeatured(int p0, int p1, bool p2)
{
    return;
}


void GameLevelManager::setLevelStars(int p0, int p1, bool p2)
{
    return;
}


GameLevelManager* GameLevelManager::sharedState()
{
    return;
}


int GameLevelManager::specialFromLikeKey(char const* p0)
{
    return;
}


void GameLevelManager::storeCommentsResult(cocos2d::CCArray* p0, std::string p1, char const* p2)
{
    return;
}


void GameLevelManager::storeDailyLevelState(int p0, int p1, GJTimedLevelType p2)
{
    return;
}


void GameLevelManager::storeFriendRequest(GJFriendRequest* p0)
{
    return;
}


void GameLevelManager::storeSearchResult(cocos2d::CCArray* levels, std::string pageInfo, char const* searchKey)
{
    return;
}


void GameLevelManager::storeUserInfo(GJUserScore* p0)
{
    return;
}


void GameLevelManager::storeUserMessage(GJUserMessage* p0)
{
    return;
}


void GameLevelManager::storeUserMessageReply(int p0, GJUserMessage* p1)
{
    return;
}


void GameLevelManager::storeUserName(int userID, int accountID, std::string userName)
{
    return;
}


void GameLevelManager::storeUserNames(std::string usernameString)
{
    return;
}


void GameLevelManager::submitUserInfo()
{
    return;
}


void GameLevelManager::suggestLevelStars(int p0, int p1, int p2)
{
    return;
}


std::string GameLevelManager::tryGetUsername(int p0)
{
    return;
}


CommentType GameLevelManager::typeFromCommentKey(char const* p0)
{
    return;
}


LikeItemType GameLevelManager::typeFromLikeKey(char const* p0)
{
    return;
}


void GameLevelManager::unblockUser(int p0)
{
    return;
}


void GameLevelManager::unfollowUser(int p0)
{
    return;
}


void GameLevelManager::updateDescription(int p0, std::string p1)
{
    return;
}


void GameLevelManager::updateLevel(GJGameLevel* p0)
{
    return;
}


void GameLevelManager::updateLevelOrders()
{
    return;
}


void GameLevelManager::updateLevelRewards(GJGameLevel* p0)
{
    return;
}


void GameLevelManager::updateSavedLevelList(GJLevelList* p0)
{
    return;
}


void GameLevelManager::updateUserScore()
{
    return;
}


void GameLevelManager::updateUsernames()
{
    return;
}


void GameLevelManager::uploadAccountComment(std::string p0)
{
    return;
}


void GameLevelManager::uploadComment(std::string p0, CommentType p1, int p2, int p3)
{
    return;
}


void GameLevelManager::uploadFriendRequest(int p0, std::string p1)
{
    return;
}


void GameLevelManager::uploadLevel(GJGameLevel* p0)
{
    return;
}


void GameLevelManager::uploadLevelComment(int p0, std::string p1, int p2)
{
    return;
}


void GameLevelManager::uploadLevelList(GJLevelList* p0)
{
    return;
}


void GameLevelManager::uploadUserMessage(int p0, std::string p1, std::string p2)
{
    return;
}


int GameLevelManager::userIDForAccountID(int p0)
{
    return;
}


GJUserScore* GameLevelManager::userInfoForAccountID(int p0)
{
    return;
}


std::string GameLevelManager::userNameForUserID(int p0)
{
    return;
}


void GameLevelManager::verifyLevelState(GJGameLevel* p0)
{
    return;
}


std::string GameLevelManager::writeSpecialFilters(GJSearchObject* p0)
{
    return;
}

