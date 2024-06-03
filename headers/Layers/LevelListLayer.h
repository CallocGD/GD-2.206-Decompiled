#ifndef __LEVELLISTLAYER_H__
#define __LEVELLISTLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class LevelBrowserLayer;
class TextInputDelegate;
class SelectListIconDelegate;
class LikeItemDelegate;
class LevelListDeleteDelegate;

class LevelListLayer: public LevelBrowserLayer, public TextInputDelegate, public SelectListIconDelegate, public LikeItemDelegate, public LevelListDeleteDelegate {
public:
    static LevelListLayer* create(GJLevelList* p0);
    void cloneList();
    void confirmClone(cocos2d::CCObject* p0);
    void confirmDelete(cocos2d::CCObject* p0);
    void confirmOwnerDelete(cocos2d::CCObject* p0);
    bool init(GJLevelList* p0);
    void onClaimReward(cocos2d::CCObject* sender);
    void onDelete();
    void onDescription(cocos2d::CCObject* sender);
    void onFavorite(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onLike(cocos2d::CCObject* sender);
    void onListInfo(cocos2d::CCObject* sender);
    void onRefreshLevelList(cocos2d::CCObject* sender);
    void onSelectIcon(cocos2d::CCObject* sender);
    void onShare(cocos2d::CCObject* sender);
    void onToggleEditMode(cocos2d::CCObject* sender);
    void onViewProfile(cocos2d::CCObject* sender);
    void ownerDelete();
    static cocos2d::CCScene* scene(GJLevelList* p0);
    TodoReturn updateEditMode();
    TodoReturn updateSideButtons();
    TodoReturn updateStatsArt();
    TodoReturn verifyListName();
    virtual void onEnter();
    virtual void onExit();
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);
    virtual void loadLevelsFailed(char const* p0, int p1);
    virtual void onBack(cocos2d::CCObject* sender);
    virtual void shareCommentClosed(std::string p0, ShareCommentLayer* p1);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);
    virtual TodoReturn updateResultArray(cocos2d::CCArray* p0);
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
    virtual void likedItem(LikeItemType p0, int p1, bool p2);
    virtual TodoReturn iconSelectClosed(SelectListIconLayer* p0);
    virtual void levelListDeleteFinished(int p0);
    virtual void levelListDeleteFailed(int p0);
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    cocos2d::CCMenu* m_buttonMenu;
    std::string m_unkString;
    GJLevelList* m_levelList;
};

#endif /* __LEVELLISTLAYER_H__ */