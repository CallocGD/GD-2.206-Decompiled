#ifndef __LEVELBROWSERLAYER_H__
#define __LEVELBROWSERLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class LevelManagerDelegate;
class FLAlertLayerProtocol;
class SetIDPopupDelegate;
class SetTextPopupDelegate;
class TableViewCellDelegate;
class ShareCommentDelegate;

class LevelBrowserLayer: public cocos2d::CCLayerColor, public LevelManagerDelegate, public FLAlertLayerProtocol, public SetIDPopupDelegate, public SetTextPopupDelegate, public TableViewCellDelegate, public ShareCommentDelegate {
public:
     ~LevelBrowserLayer();
    static LevelBrowserLayer* create(GJSearchObject* p0);
    TodoReturn createNewLevel(cocos2d::CCObject* p0);
    TodoReturn createNewList(cocos2d::CCObject* p0);
    TodoReturn createNewSmartTemplate(cocos2d::CCObject* p0);
    TodoReturn deleteSelected();
    TodoReturn exitLayer(cocos2d::CCObject* p0);
    TodoReturn getItemsMatchingSearch(cocos2d::CCArray* p0, std::string p1, GJSearchObject* p2);
    gd::string getSearchTitle();
    bool init(GJSearchObject* p0);
    bool isCorrect(char const* p0);
    void loadPage(GJSearchObject* p0);
    void onClearSearch(cocos2d::CCObject* sender);
    void onDeleteAll(cocos2d::CCObject* sender);
    void onDeleteSelected(cocos2d::CCObject* sender);
    void onFavorites(cocos2d::CCObject* sender);
    void onGoToFolder(cocos2d::CCObject* sender);
    void onGoToLastPage(cocos2d::CCObject* sender);
    void onGoToPage(cocos2d::CCObject* sender);
    void onHelp(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onLocalMode(cocos2d::CCObject* sender);
    void onMyOnlineLevels(cocos2d::CCObject* sender);
    void onNew(cocos2d::CCObject* sender);
    void onNextPage(cocos2d::CCObject* sender);
    void onPrevPage(cocos2d::CCObject* sender);
    void onRefresh(cocos2d::CCObject* sender);
    void onRemoveAllFavorites(cocos2d::CCObject* sender);
    void onSaved(cocos2d::CCObject* sender);
    void onSavedMode(cocos2d::CCObject* sender);
    void onSearch(cocos2d::CCObject* sender);
    void onToggleAllObjects(cocos2d::CCObject* sender);
    void reloadAllObjects();
    static cocos2d::CCScene* scene(GJSearchObject* search);
    void setSearchObject(GJSearchObject* p0);
    void setupLevelBrowser(cocos2d::CCArray* p0);
    void show();
    void updateLevelsLabel();
    void updatePageLabel();
    virtual void onEnter();
    virtual void onEnterTransitionDidFinish();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);
    virtual void loadLevelsFailed(char const* p0, int p1);
    virtual void setupPageInfo(std::string p0, char const* p1);
    virtual void onBack(cocos2d::CCObject* sender);
    virtual void shareCommentClosed(std::string p0, ShareCommentLayer* p1);
    virtual void setTextPopupClosed(SetTextPopup* p0, std::string p1);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);
    virtual TodoReturn updateResultArray(cocos2d::CCArray* p0);
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
    bool m_unk;
    bool m_allSelected;
    TextArea* m_noInternet;
    GJListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_lastBtn;
    CCMenuItemSpriteExtra* m_cancelSearchBtn;
    CCMenuItemSpriteExtra* m_refreshBtn;
    cocos2d::CCArray* m_levels;
    GJSearchObject* m_searchObject;
    cocos2d::CCLabelBMFont* m_countText;
    cocos2d::CCLabelBMFont* m_pageText;
    CCMenuItemSpriteExtra* m_pageBtn;
    cocos2d::CCLabelBMFont* m_folderText;
    CCMenuItemSpriteExtra* m_folderBtn;
    CCMenuItemToggler* m_allObjectsToggler;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    LoadingCircle* m_circle;
    int m_lastPage;
    bool m_isOverlay;
    /* PAD */

    int m_zOffset;
    bool m_unk2;
    int m_listHeight;
    /* PAD */

};

#endif /* __LEVELBROWSERLAYER_H__ */