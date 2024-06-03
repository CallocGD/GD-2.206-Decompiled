
#include "includes.h"


void MusicDownloadManager::ProcessHttpGetRequest(std::string p0, std::string p1, cocos2d::extension::SEL_HttpResponse p2, int p3, int p4)
{
    return;
}


void MusicDownloadManager::ProcessHttpRequest(std::string p0, std::string p1, std::string p2, GJHttpType p3)
{
    return;
}


void MusicDownloadManager::addDLToActive(char const* tag, cocos2d::CCObject* obj)
{
    return;
}


void MusicDownloadManager::addDLToActive(char const* tag)
{
    return;
}



/* Unknown Return: MusicDownloadManager::addMusicDownloadDelegate(MusicDownloadDelegate* p0){}; */

void MusicDownloadManager::addSongObjectFromString(std::string p0)
{
    return;
}


void MusicDownloadManager::clearSong(int p0)
{
    return;
}


void MusicDownloadManager::clearUnusedSongs()
{
    return;
}


void MusicDownloadManager::createArtistsInfo(std::string p0)
{
    return;
}


void MusicDownloadManager::createSongsInfo(std::string p0, std::string p1)
{
    return;
}


void MusicDownloadManager::dataLoaded(DS_Dictionary* p0)
{
    return;
}


void MusicDownloadManager::deleteSFX(int p0)
{
    return;
}


void MusicDownloadManager::deleteSong(int p0)
{
    return;
}


void MusicDownloadManager::downloadCustomSong(int p0)
{
    return;
}


void MusicDownloadManager::downloadMusicLibrary()
{
    return;
}


void MusicDownloadManager::downloadSFX(int p0)
{
    return;
}


void MusicDownloadManager::downloadSFXFailed(int p0, GJSongError p1)
{
    return;
}


void MusicDownloadManager::downloadSFXFinished(int p0)
{
    return;
}


void MusicDownloadManager::downloadSFXLibrary()
{
    return;
}


void MusicDownloadManager::downloadSong(int p0)
{
    return;
}


void MusicDownloadManager::downloadSongFailed(int p0, GJSongError p1)
{
    return;
}


void MusicDownloadManager::downloadSongFinished(int p0)
{
    return;
}


void MusicDownloadManager::encodeDataTo(DS_Dictionary* p0)
{
    return;
}



/* Unknown Return: MusicDownloadManager::filterMusicByArtistID(int p0, cocos2d::CCArray* p1){}; */


/* Unknown Return: MusicDownloadManager::filterMusicByTag(int p0, cocos2d::CCArray* p1){}; */

void MusicDownloadManager::firstSetup()
{
    return;
}



/* Unknown Return: MusicDownloadManager::generateCustomContentURL(std::string p0){}; */


/* Unknown Return: MusicDownloadManager::generateResourceAssetList(){}; */


/* Unknown Return: MusicDownloadManager::getAllMusicArtists(OptionsObjectDelegate* p0){}; */


/* Unknown Return: MusicDownloadManager::getAllMusicObjects(GJSongType p0){}; */


/* Unknown Return: MusicDownloadManager::getAllMusicTags(OptionsObjectDelegate* p0){}; */


/* Unknown Return: MusicDownloadManager::getAllSFXObjects(bool p0){}; */


/* Unknown Return: MusicDownloadManager::getAllSongs(){}; */

void MusicDownloadManager::getCustomContentURL()
{
    return;
}


cocos2d::CCObject* MusicDownloadManager::getDLObject(char const* p0)
{
    return;
}



/* Unknown Return: MusicDownloadManager::getDownloadProgress(int p0){}; */


/* Unknown Return: MusicDownloadManager::getDownloadedSongs(){}; */


/* Unknown Return: MusicDownloadManager::getMusicArtistForID(int p0){}; */


/* Unknown Return: MusicDownloadManager::getMusicObject(int p0){}; */


/* Unknown Return: MusicDownloadManager::getSFXDownloadKey(int p0){}; */


/* Unknown Return: MusicDownloadManager::getSFXDownloadProgress(int p0){}; */


/* Unknown Return: MusicDownloadManager::getSFXFolderObjectForID(int p0){}; */


/* Unknown Return: MusicDownloadManager::getSFXFolderPathForID(int p0, bool p1){}; */


/* Unknown Return: MusicDownloadManager::getSFXObject(int p0){}; */


/* Unknown Return: MusicDownloadManager::getSongDownloadKey(int p0){}; */

void MusicDownloadManager::getSongInfo(int p0, bool p1)
{
    return;
}



/* Unknown Return: MusicDownloadManager::getSongInfoKey(int p0){}; */

SongInfoObject* MusicDownloadManager::getSongInfoObject(int p0)
{
    return;
}



/* Unknown Return: MusicDownloadManager::getSongPriority(){}; */

void MusicDownloadManager::handleIt(bool p0, std::string p1, std::string p2, GJHttpType p3)
{
    return;
}


void MusicDownloadManager::handleItDelayed(bool p0, std::string p1, std::string p2, GJHttpType p3)
{
    return;
}


void MusicDownloadManager::handleItND(cocos2d::CCNode* p0, void* p1)
{
    return;
}



/* Unknown Return: MusicDownloadManager::incrementPriorityForSong(int p0){}; */

bool MusicDownloadManager::init()
{
    return;
}


bool MusicDownloadManager::isDLActive(char const* tag)
{
    return;
}


bool MusicDownloadManager::isMusicLibraryLoaded()
{
    return;
}


bool MusicDownloadManager::isResourceSFX(int p0)
{
    return;
}


bool MusicDownloadManager::isResourceSong(int p0)
{
    return;
}


bool MusicDownloadManager::isRunningActionForSongID(int p0)
{
    return;
}


bool MusicDownloadManager::isSFXDownloaded(int p0)
{
    return;
}


bool MusicDownloadManager::isSFXLibraryLoaded()
{
    return;
}


bool MusicDownloadManager::isSongDownloaded(int p0)
{
    return;
}


void MusicDownloadManager::limitDownloadedSongs()
{
    return;
}


void MusicDownloadManager::loadSongInfoFailed(int p0, GJSongError p1)
{
    return;
}


void MusicDownloadManager::loadSongInfoFinished(SongInfoObject* p0)
{
    return;
}


void MusicDownloadManager::musicActionFailed(GJMusicAction p0)
{
    return;
}


void MusicDownloadManager::musicActionFinished(GJMusicAction p0)
{
    return;
}



/* Unknown Return: MusicDownloadManager::nameForTagID(int p0){}; */

void MusicDownloadManager::onDownloadMusicLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1)
{
    return;
}


void MusicDownloadManager::onDownloadSFXCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1)
{
    return;
}


void MusicDownloadManager::onDownloadSFXLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1)
{
    return;
}


void MusicDownloadManager::onDownloadSongCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1)
{
    return;
}


void MusicDownloadManager::onGetCustomContentURLCompleted(std::string p0, std::string p1)
{
    return;
}


void MusicDownloadManager::onGetSongInfoCompleted(std::string p0, std::string p1)
{
    return;
}


void MusicDownloadManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1)
{
    return;
}


void MusicDownloadManager::onTryUpdateMusicLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1)
{
    return;
}


void MusicDownloadManager::onTryUpdateSFXLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1)
{
    return;
}


void MusicDownloadManager::parseMusicLibrary()
{
    return;
}


void MusicDownloadManager::parseSFXLibrary()
{
    return;
}


std::string MusicDownloadManager::pathForSFX(int p0)
{
    return;
}


std::string MusicDownloadManager::pathForSFXFolder(int p0)
{
    return;
}


std::string MusicDownloadManager::pathForSong(int p0)
{
    return;
}


std::string MusicDownloadManager::pathForSongFolder(int p0)
{
    return;
}


void MusicDownloadManager::removeDLFromActive(char const* p0)
{
    return;
}



/* Unknown Return: MusicDownloadManager::removeMusicDownloadDelegate(MusicDownloadDelegate* p0){}; */

cocos2d::CCDictionary* MusicDownloadManager::responseToDict(std::string p0, char const* p1)
{
    return;
}


MusicDownloadManager* MusicDownloadManager::sharedState()
{
    return;
}


void MusicDownloadManager::showTOS(FLAlertLayerProtocol* p0)
{
    return;
}


void MusicDownloadManager::songStateChanged()
{
    return;
}



/* Unknown Return: MusicDownloadManager::stopDownload(int p0){}; */


/* Unknown Return: MusicDownloadManager::storeMusicObject(SongInfoObject* p0){}; */


/* Unknown Return: MusicDownloadManager::storeSFXInfoObject(SFXInfoObject* p0){}; */


/* Unknown Return: MusicDownloadManager::tryLoadLibraries(){}; */


/* Unknown Return: MusicDownloadManager::tryUpdateMusicLibrary(){}; */


/* Unknown Return: MusicDownloadManager::tryUpdateSFXLibrary(){}; */
