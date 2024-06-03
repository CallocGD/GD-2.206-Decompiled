#ifndef __GJSONGBROWSER_H__
#define __GJSONGBROWSER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJDropDownLayer;
class FLAlertLayerProtocol;
class TableViewCellDelegate;

class GJSongBrowser: public GJDropDownLayer, public FLAlertLayerProtocol, public TableViewCellDelegate {
public:
    static GJSongBrowser* create();
    void loadPage(int p0);
    void onDeleteAll(cocos2d::CCObject* sender);
    void onNextPage(cocos2d::CCObject* sender);
    void onPrevPage(cocos2d::CCObject* sender);
    void setupPageInfo(int p0, int p1, int p2);
    TodoReturn setupSongBrowser(cocos2d::CCArray* p0);
    virtual bool init();
    virtual void customSetup();
    virtual void exitLayer(cocos2d::CCObject* p0);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
    virtual TodoReturn getSelectedCellIdx();
    int m_page;
    int m_songID;
    bool m_selected;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    cocos2d::CCLabelBMFont* m_countText;
    /* PAD */

    cocos2d::CCArray* m_downloadedSongs;
    CustomListView* m_listView;
};

#endif /* __GJSONGBROWSER_H__ */