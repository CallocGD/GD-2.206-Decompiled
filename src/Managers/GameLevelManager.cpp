
#include "includes.h"


void GameLevelManager::ProcessHttpRequest(std::string endpoint, std::string params, std::string tag, GJHttpType httpType)
{
    return;
}


void GameLevelManager::acceptFriendRequest(int p0, int p1)
{
    return;
}


int GameLevelManager::accountIDForUserID(int userID)
{
    return;
}


void GameLevelManager::addDLToActive(char const* p0)
{
    return;
}


bool GameLevelManager::areGauntletsLoaded()
{
    return;
}


void GameLevelManager::banUser(int p0)
{
    return;
}


void GameLevelManager::blockUser(int p0)
{
    return;
}


void GameLevelManager::cleanupDailyLevels()
{
    return;
}


bool GameLevelManager::createAndGetAccountComments(std::string p0, int p1)
{
    return;
}


bool GameLevelManager::createAndGetCommentsFull(std::string p0, int p1, bool p2)
{
    return;
}


bool GameLevelManager::createAndGetLevelComments(std::string p0, int p1)
{
    return;
}


cocos2d::CCArray* GameLevelManager::createAndGetLevelLists(std::string p0)
{
    return;
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
    return;
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


void GameLevelManager::getFriendRequests(bool p0, int p1, int p2)
{
    return;
}


void GameLevelManager::getGJChallenges()
{
    return;
}


void GameLevelManager::getGJDailyLevelState(GJTimedLevelType p0)
{
    return;
}


void GameLevelManager::getGJRewards(int p0)
{
    return;
}


void GameLevelManager::getGJUserInfo(int p0)
{
    return;
}


char const* GameLevelManager::getGauntletKey(int p0)
{
    return;
}


void GameLevelManager::getGauntletLevels(int p0)
{
    return;
}


void GameLevelManager::getGauntlets()
{
    return;
}


void GameLevelManager::getGauntletsearchKey(int p0)
{
    return;
}


int GameLevelManager::getHighestLevelOrder()
{
    return;
}


int GameLevelManager::getIntForKey(char const* p0)
{
    return;
}


void GameLevelManager::getLeaderboardScores(char const* p0)
{
    return;
}


const char * GameLevelManager::getLenKey(int len)
{
    return;
}


bool GameLevelManager::getLenVal(int p0)
{
    return;
}


std::string GameLevelManager::getLengthStr(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5)
{
    return;
}


void GameLevelManager::getLevelComments(int ID, int page, int total, int mode, CommentKeyType keytype)
{
    return;
}


const char* GameLevelManager::getLevelDownloadKey(int levelID, bool isGauntlet)
{
    return;
}


const char* GameLevelManager::getLevelKey(int levelID)
{
    return;
}


void GameLevelManager::getLevelLeaderboard(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2)
{
    return;
}


char const* GameLevelManager::getLevelLeaderboardKey(int p0, LevelLeaderboardType p1, LevelLeaderboardMode p2)
{
    return;
}


char const* GameLevelManager::getLevelListKey(int p0)
{
    return;
}


void GameLevelManager::getLevelLists(GJSearchObject* p0)
{
    return;
}


void GameLevelManager::getLevelSaveData()
{
    return;
}


char const* GameLevelManager::getLikeAccountItemKey(LikeItemType p0, int p1, bool p2, int p3)
{
    return;
}


char const* GameLevelManager::getLikeItemKey(LikeItemType p0, int p1, bool p2, int p3)
{
    return;
}


GJGameLevel* GameLevelManager::getLocalLevel(int p0)
{
    return;
}


GJGameLevel* GameLevelManager::getLocalLevelByName(std::string p0)
{
    return;
}


int GameLevelManager::getLowestLevelOrder()
{
    return;
}


GJGameLevel* GameLevelManager::getMainLevel(int p0, bool p1)
{
    return;
}


const char* GameLevelManager::getMapPackKey(int pack)
{
    return;
}


void GameLevelManager::getMapPacks(GJSearchObject* p0)
{
    return;
}


char const* GameLevelManager::getMessageKey(int p0)
{
    return;
}


char const* GameLevelManager::getMessagesKey(bool p0, int p1)
{
    return;
}


void GameLevelManager::getNews()
{
    return;
}


int GameLevelManager::getNextFreeTemplateID()
{
    return;
}


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


void GameLevelManager::likeItem(LikeItemType p0, int p1, bool p2, int p3)
{
    return;
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
    return;
}


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

