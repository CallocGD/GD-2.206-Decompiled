
#include "includes.h"

#define FORMAT(STR, ...) cocos2d::CCString::createWithFormat(STR, VA_ARGS)->getCString();

PASS(void MusicDownloadManager::ProcessHttpGetRequest(std::string, std::string, cocos2d::extension::SEL_HttpResponse, int, int), "This one seems like a mess....");

PASS(void MusicDownloadManager::ProcessHttpRequest(std::string, std::string, std::string, GJHttpType), "This one seems like a mess as well....");

void MusicDownloadManager::addDLToActive(char const* tag, cocos2d::CCObject* obj)
{
	// TODO: maybe a false positive?
	//std::basic_string::basic_string(&v6, a2, (int)v5);
    m_activeDownloads->setObject(obj);
}

void MusicDownloadManager::addDLToActive(char const* tag)
{
    addDLToActive(tag, cocos2d::CCNode::create());
}

/* Unknown Return: MusicDownloadManager::addMusicDownloadDelegate(MusicDownloadDelegate* p0){}; */

PASS(void MusicDownloadManager::addSongObjectFromString(std::string), "Not in the mood to do this one yet....");

void MusicDownloadManager::clearSong(int p0)
{
	const char* song = FORMAT("%i", p0);
	std::string songStr = song;
	m_songObjects->removeObjectForKey(songStr);
    return;
}

PASS(void MusicDownloadManager::clearUnusedSongs(), "Not in the mood to do this one yet....");

PASS(void MusicDownloadManager::createArtistsInfo(std::string), "Not in the mood to do this one yet....");

PASS(void MusicDownloadManager::createSongsInfo(std::string, std::string), "Should decompile addSongObjectFromString() first before decompiling this one"):

PASS(void MusicDownloadManager::dataLoaded(DS_Dictionary), "Decompile once MLDM values are documented");


PASS(void MusicDownloadManager::deleteSFX(int), "Very confusing");

PASS(void MusicDownloadManager::deleteSong(int), "Very confusing");

void MusicDownloadManager::downloadCustomSong(int id)
{
	// TODO: Unknown field...
	//if ( *(_DWORD *)(this[1].field_0 - 12) )
	//{
		const char* songDownKey = getSongDownloadKey(id);
		if (!isDLActive(songDownKey))
		{
			std::string str = GameToolbox::intToString(id);
			std::string music = "/music/";
			music += ".ogg";
			// This is v9 btw, value unknown since generateCustomContentURL's return is unknown
			std::string url = "";
			// Unknown return
			//MusicDownloadManager::generateCustomContentURL(&v9, this, &v10);
			ProcessHttpGetRequest(url, music, onDownloadSongCompleted, 0, 0);
			addDLToActive(songDownKey);
		}
	//}	
}


void MusicDownloadManager::downloadMusicLibrary()
{
	// TODO: Unknown field...
	//if ( *(_DWORD *)(this[1].field_0 - 12) )
	//{
		if (!isDLActive("dl_music_l"))
		{
			m_downloadingMusicLibrary = true;
			std::string url = "/music/musiclibrary_02.dat";
			// Unknown return
			//MusicDownloadManager::generateCustomContentURL(&v5, this, &v6);
			std::string str = "";
			ProcessHttpGetRequest(url, str, onDownloadMusicLibraryCompleted, 0, 0);
			addDLToActive("dl_music_l");
		}
	//}
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

// This one was obvious...
const char* MusicDownloadManager::getSongDownloadKey(int id)
{
	return FORMAT("d_%i", id);
}

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


void MusicDownloadManager::showTOS(FLAlertLayerProtocol* delegate)
{

  std::string text =
    "Important notification - Terms of use. RobTop Games provides a library of music and sound effects for creative use w"
    "ithin Geometry Dash. You are free to use these assets for creating and sharing levels within the game. However, redi"
    "stributing, selling, manipulating, or using these assets outside the game is prohibited. If you share game-related c"
    "ontent on social media or upload videos featuring custom music, please give credit to the respective artist. Regardi"
    "ng music from Newgrounds.com: Some custom songs are available via a third party website, Newgrounds.com. These songs"
    ", created by artists using Newgrounds.com, are under Creative Commons licensing terms accessible on Newgrounds.com. "
    "By downloading a song from Newgrounds, you accept these terms and any others designated by Newgrounds. RobTop Games "
    "is not the provider of songs from Newgrounds.com, nor a party to the licensing agreements, and does not store any au"
    "dio files downloaded from Newgrounds.com. You are responsible for the content you create using all music and sound e"
    "ffects provided. Ensure your creations adhere to the game's community guidelines and do not infringe on any rights. "
    "The availability of music and sound effects in Geometry Dash is subject to change. RobTop Games may add or remove co"
    "ntent from both the custom library and the Newgrounds.com selection without prior notice. We do not guarantee the co"
    "ntinuous availability or suitability of any music or sound effects in the game. We may update these terms at any tim"
    "e, with your continued use of Geometry Dash signifying acceptance of any changes. By clicking the 'I Accept' button,"
    " you acknowledge and approve of the above-stated terms of use.";
  FLAlertLayer layer = FLAlertLayer::create(
		 delegate,
         "Terms of Use",
         &text,
         "Cancel",
         "I Accept",
         400.0f,
         true,
         280.0f
         1.0f);
  layer->init(1);
  layer->show();
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



