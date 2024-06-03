#ifndef __MUSICBROWSER_H__
#define __MUSICBROWSER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class MusicDownloadDelegate;
class TableViewCellDelegate;
class SetTextPopupDelegate;
class FLAlertLayerProtocol;
class SliderDelegate;

class MusicBrowser: public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public SetTextPopupDelegate, public FLAlertLayerProtocol, public SliderDelegate {
public:
    static MusicBrowser* create(int p0, GJSongType p1);
    bool init(int p0, GJSongType p1);
    void onArtistFilters(cocos2d::CCObject* sender);
    void onClearSearch(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onPage(cocos2d::CCObject* sender);
    void onPlaybackControl(cocos2d::CCObject* sender);
    void onSearch(cocos2d::CCObject* sender);
    void onTagFilters(cocos2d::CCObject* sender);
    void onUpdateLibrary(cocos2d::CCObject* sender);
    void setupList(MusicSearchResult* p0);
    TodoReturn setupSongControls();
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn trySetupMusicBrowser();
    TodoReturn updatePageLabel();
    virtual void update(float p0);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void musicActionFinished(GJMusicAction p0);
    virtual void musicActionFailed(GJMusicAction p0);
    virtual TodoReturn sliderEnded(Slider* p0);
    virtual void setTextPopupClosed(SetTextPopup* p0, std::string p1);
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
    virtual TodoReturn getSelectedCellIdx();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};

#endif /* __MUSICBROWSER_H__ */