#ifndef __MUSICDOWNLOADMANAGER_H__
#define __MUSICDOWNLOADMANAGER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class PlatformDownloadDelegate;

class MusicDownloadManager: public cocos2d::CCNode, public PlatformDownloadDelegate {
public:
    static MusicDownloadManager* sharedState();
    void addDLToActive(char const* tag, cocos2d::CCObject* obj);
    void addDLToActive(char const* tag);
    TodoReturn addMusicDownloadDelegate(MusicDownloadDelegate* p0);
    void addSongObjectFromString(std::string p0);
    void clearSong(int p0);
    void clearUnusedSongs();
    void createArtistsInfo(std::string p0);
    void createSongsInfo(std::string p0, std::string p1);
    void dataLoaded(DS_Dictionary* p0);
    void deleteSFX(int p0);
    void deleteSong(int p0);
    void downloadCustomSong(int p0);
    void downloadMusicLibrary();
    void downloadSFX(int p0);
    void downloadSFXFailed(int p0, GJSongError p1);
    void downloadSFXFinished(int p0);
    void downloadSFXLibrary();
    void downloadSong(int p0);
    void downloadSongFailed(int p0, GJSongError p1);
    void downloadSongFinished(int p0);
    void encodeDataTo(DS_Dictionary* p0);
    TodoReturn filterMusicByArtistID(int p0, cocos2d::CCArray* p1);
    TodoReturn filterMusicByTag(int p0, cocos2d::CCArray* p1);
    void firstSetup();
    TodoReturn generateCustomContentURL(std::string p0);
    TodoReturn generateResourceAssetList();
    TodoReturn getAllMusicArtists(OptionsObjectDelegate* p0);
    TodoReturn getAllMusicObjects(GJSongType p0);
    TodoReturn getAllMusicTags(OptionsObjectDelegate* p0);
    TodoReturn getAllSFXObjects(bool p0);
    TodoReturn getAllSongs();
    void getCustomContentURL();
    cocos2d::CCObject* getDLObject(char const* p0);
    TodoReturn getDownloadedSongs();
    TodoReturn getDownloadProgress(int p0);
    TodoReturn getMusicArtistForID(int p0);
    TodoReturn getMusicObject(int p0);
    TodoReturn getSFXDownloadKey(int p0);
    TodoReturn getSFXDownloadProgress(int p0);
    TodoReturn getSFXFolderObjectForID(int p0);
    TodoReturn getSFXFolderPathForID(int p0, bool p1);
    TodoReturn getSFXObject(int p0);
    TodoReturn getSongDownloadKey(int p0);
    void getSongInfo(int p0, bool p1);
    TodoReturn getSongInfoKey(int p0);
    SongInfoObject* getSongInfoObject(int p0);
    TodoReturn getSongPriority();
    void handleIt(bool p0, std::string p1, std::string p2, GJHttpType p3);
    void handleItDelayed(bool p0, std::string p1, std::string p2, GJHttpType p3);
    void handleItND(cocos2d::CCNode* p0, void* p1);
    TodoReturn incrementPriorityForSong(int p0);
    bool isDLActive(char const* tag);
    bool isMusicLibraryLoaded();
    bool isResourceSFX(int p0);
    bool isResourceSong(int p0);
    bool isRunningActionForSongID(int p0);
    bool isSFXDownloaded(int p0);
    bool isSFXLibraryLoaded();
    bool isSongDownloaded(int p0);
    void limitDownloadedSongs();
    void loadSongInfoFailed(int p0, GJSongError p1);
    void loadSongInfoFinished(SongInfoObject* p0);
    void musicActionFailed(GJMusicAction p0);
    void musicActionFinished(GJMusicAction p0);
    TodoReturn nameForTagID(int p0);
    void onDownloadMusicLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
    void onDownloadSFXCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
    void onDownloadSFXLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
    void onDownloadSongCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
    void onGetCustomContentURLCompleted(std::string p0, std::string p1);
    void onGetSongInfoCompleted(std::string p0, std::string p1);
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
    void onTryUpdateMusicLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
    void onTryUpdateSFXLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
    void parseMusicLibrary();
    void parseSFXLibrary();
    gd::string pathForSFX(int p0);
    gd::string pathForSFXFolder(int p0);
    gd::string pathForSong(int p0);
    gd::string pathForSongFolder(int p0);
    void ProcessHttpGetRequest(std::string p0, std::string p1, cocos2d::extension::SEL_HttpResponse p2, int p3, int p4);
    void ProcessHttpRequest(std::string p0, std::string p1, std::string p2, GJHttpType p3);
    void removeDLFromActive(char const* p0);
    TodoReturn removeMusicDownloadDelegate(MusicDownloadDelegate* p0);
    static cocos2d::CCDictionary* responseToDict(std::string p0, char const* p1);
    void showTOS(FLAlertLayerProtocol* p0);
    void songStateChanged();
    TodoReturn stopDownload(int p0);
    TodoReturn storeMusicObject(SongInfoObject* p0);
    TodoReturn storeSFXInfoObject(SFXInfoObject* p0);
    TodoReturn tryLoadLibraries();
    TodoReturn tryUpdateMusicLibrary();
    TodoReturn tryUpdateSFXLibrary();
    virtual bool init();
    cocos2d::CCDictionary* m_activeDownloads;
    cocos2d::CCArray* m_musicDownloadDelegates;
    cocos2d::CCDictionary* m_songObjects;
    cocos2d::CCDictionary* m_MDLM003;
    int m_songPriority;
    std::string m_customContentURL;
    cocos2d::CCDictionary* m_sfxObjects;
    cocos2d::CCArray* m_sfxArtists;
    int m_sfxLibraryVersion;
    int m_sfxObjectCount;
    bool m_requestedSfxLibraryDownloaded;
    cocos2d::CCDictionary* m_musicObjects;
    cocos2d::CCDictionary* m_musicArtists;
    std::map<int, std::string> m_musicTags;
    int m_musicLibraryVersion;
    int m_musicObjectCount;
    bool m_requestedMusicLibraryDownloaded;
    bool m_triedToLoadLibraries;
    bool m_unkBool;
    std::unordered_set<int> m_resourceSfxUnorderedSet;
    std::unordered_set<int> m_resourceSongUnorderedSet;
};

#endif /* __MUSICDOWNLOADMANAGER_H__ */