#ifndef __SFXBROWSER_H__
#define __SFXBROWSER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class MusicDownloadDelegate;
class TableViewCellDelegate;
class SetTextPopupDelegate;
class SelectSFXSortDelegate;

class SFXBrowser: public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public SetTextPopupDelegate, public SelectSFXSortDelegate {
public:
    static SFXBrowser* create(int p0);
    bool init(int p0);
    void onClearSearch(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onCredits(cocos2d::CCObject* sender);
    void onExitFolder(cocos2d::CCObject* sender);
    void onPage(cocos2d::CCObject* sender);
    void onSearch(cocos2d::CCObject* sender);
    void onSorting(cocos2d::CCObject* sender);
    void onToggleCompactMode(cocos2d::CCObject* sender);
    void onUpdateLibrary(cocos2d::CCObject* sender);
    void setupList(SFXSearchResult* p0);
    TodoReturn trySetupSFXBrowser();
    TodoReturn updatePageLabel();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void musicActionFinished(GJMusicAction p0);
    virtual void musicActionFailed(GJMusicAction p0);
    virtual TodoReturn sortSelectClosed(SelectSFXSortLayer* p0);
    virtual void setTextPopupClosed(SetTextPopup* p0, std::string p1);
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
    virtual TodoReturn getSelectedCellIdx();
    virtual TodoReturn shouldSnapToSelected();
};

#endif /* __SFXBROWSER_H__ */