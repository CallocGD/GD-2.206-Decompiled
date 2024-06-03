#ifndef __CUSTOMSFXWIDGET_H__
#define __CUSTOMSFXWIDGET_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class MusicDownloadDelegate;
class FLAlertLayerProtocol;

class CustomSFXWidget: public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static CustomSFXWidget* create(SFXInfoObject* p0, CustomSFXDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6);
    TodoReturn deleteSFX();
    void downloadFailed();
    TodoReturn hideLoadingArt();
    bool init(SFXInfoObject* p0, CustomSFXDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6);
    void onCancelDownload(cocos2d::CCObject* sender);
    void onDelete(cocos2d::CCObject* sender);
    void onDownload(cocos2d::CCObject* sender);
    void onPlayback(cocos2d::CCObject* sender);
    void onSelect(cocos2d::CCObject* sender);
    void showLoadingArt();
    TodoReturn startDownload();
    TodoReturn startMonitorDownload();
    TodoReturn updateDownloadProgress(float p0);
    TodoReturn updateError(GJSongError p0);
    TodoReturn updateLengthMod(float p0);
    TodoReturn updatePlaybackBtn();
    TodoReturn updateProgressBar(int p0);
    TodoReturn updateSFXInfo();
    TodoReturn updateSFXObject(SFXInfoObject* p0);
    TodoReturn verifySFXID(int p0);
    virtual void downloadSFXFinished(int p0);
    virtual void downloadSFXFailed(int p0, GJSongError p1);
    virtual void songStateChanged();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};

#endif /* __CUSTOMSFXWIDGET_H__ */