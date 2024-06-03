#ifndef __CUSTOMSONGWIDGET_H__
#define __CUSTOMSONGWIDGET_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class MusicDownloadDelegate;
class FLAlertLayerProtocol;

class CustomSongWidget: public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static CustomSongWidget* create(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary, int unk);
    void deleteSong();
    void downloadAssetFailed(int p0, GJAssetType p1, GJSongError p2);
    void downloadAssetFinished(int p0, GJAssetType p1);
    void downloadFailed();
    TodoReturn getSongInfoIfUnloaded();
    bool init(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary, int unk);
    void onCancelDownload(cocos2d::CCObject* sender);
    void onDelete(cocos2d::CCObject* sender);
    void onDownload(cocos2d::CCObject* sender);
    void onGetSongInfo(cocos2d::CCObject* sender);
    void onMore(cocos2d::CCObject* sender);
    void onPlayback(cocos2d::CCObject* sender);
    void onSelect(cocos2d::CCObject* sender);
    TodoReturn processNextMultiAsset();
    void showError(bool p0);
    void startDownload();
    TodoReturn startMonitorDownload();
    TodoReturn startMultiAssetDownload();
    TodoReturn toggleUpdateButton(bool p0);
    TodoReturn updateDownloadProgress(float p0);
    TodoReturn updateError(GJSongError p0);
    TodoReturn updateLengthMod(float p0);
    void updateMultiAssetInfo(bool p0);
    TodoReturn updatePlaybackBtn();
    TodoReturn updateProgressBar(int p0);
    void updateSongInfo();
    void updateSongObject(SongInfoObject* p0);
    void updateWithMultiAssets(std::string p0, std::string p1, int p2);
    TodoReturn verifySongID(int p0);
    virtual void loadSongInfoFinished(SongInfoObject* p0);
    virtual void loadSongInfoFailed(int p0, GJSongError p1);
    virtual void downloadSongFinished(int p0);
    virtual void downloadSongFailed(int p0, GJSongError p1);
    virtual void downloadSFXFinished(int p0);
    virtual void downloadSFXFailed(int p0, GJSongError p1);
    virtual void musicActionFinished(GJMusicAction p0);
    virtual void musicActionFailed(GJMusicAction p0);
    virtual void songStateChanged();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    SongInfoObject* m_songInfoObject;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCLabelBMFont* m_songLabel;
    cocos2d::CCLabelBMFont* m_artistLabel;
    cocos2d::CCLabelBMFont* m_songIDLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    CCMenuItemSpriteExtra* m_downloadBtn;
    CCMenuItemSpriteExtra* m_cancelDownloadBtn;
    CCMenuItemSpriteExtra* m_selectSongBtn;
    CCMenuItemSpriteExtra* m_getSongInfoBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_moreBtn;
    CCMenuItemSpriteExtra* m_deleteBtn;
    cocos2d::CCSprite* m_sliderGroove;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_bgSpr;
    CustomSongDelegate* m_songDelegate;
    bool m_showSelectSongBtn;
    bool m_showPlayMusicBtn;
    bool m_showDownloadBtn;
    bool m_isNotDownloading;
    bool m_isRobtopSong;
    bool m_isMusicLibrary;
    int m_customSongID;
    float m_unkFloat;
    bool m_unkBool1;
    void* m_unkPtr;
    bool m_hasLibrarySongs;
    bool m_hasSFX;
    bool m_unkBool2;
    std::map<int, bool> m_songs;
    std::map<int, bool> m_sfx;
    std::vector<CCObject*> m_undownloadedAssets;
    int m_unkInt;
    InfoAlertButton* m_assetInfoBtn;
};

#endif /* __CUSTOMSONGWIDGET_H__ */