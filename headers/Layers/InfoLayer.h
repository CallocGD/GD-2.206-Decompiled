#ifndef __INFOLAYER_H__
#define __INFOLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class LevelCommentDelegate;
class CommentUploadDelegate;
class FLAlertLayerProtocol;

class InfoLayer: public FLAlertLayer, public LevelCommentDelegate, public CommentUploadDelegate, public FLAlertLayerProtocol {
public:
    static InfoLayer* create(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2);
    TodoReturn confirmReport(cocos2d::CCObject* p0);
    int getAccountID();
    int getID();
    int getRealID();
    TodoReturn getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, cocos2d::CCPoint p4);
    bool init(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2);
    bool isCorrect(char const* p0);
    void loadPage(int p0, bool p1);
    void onClose(cocos2d::CCObject* sender);
    void onComment(cocos2d::CCObject* sender);
    void onCopyLevelID(cocos2d::CCObject* sender);
    void onGetComments(cocos2d::CCObject* sender);
    void onLevelInfo(cocos2d::CCObject* sender);
    void onMore(cocos2d::CCObject* sender);
    void onNextPage(cocos2d::CCObject* sender);
    void onOriginal(cocos2d::CCObject* sender);
    void onPrevPage(cocos2d::CCObject* sender);
    void onRefreshComments(cocos2d::CCObject* sender);
    void onSimilar(cocos2d::CCObject* sender);
    TodoReturn reloadWindow();
    void setupCommentsBrowser(cocos2d::CCArray* p0);
    void setupLevelInfo();
    void toggleCommentMode(cocos2d::CCObject* sender);
    void toggleExtendedMode(cocos2d::CCObject* sender);
    void toggleSmallCommentMode(cocos2d::CCObject* sender);
    TodoReturn updateCommentModeButtons();
    TodoReturn updateLevelsLabel();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void show();
    virtual void loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);
    virtual void loadCommentsFailed(char const* p0);
    virtual void setupPageInfo(std::string p0, char const* p1);
    virtual void commentUploadFinished(int p0);
    virtual void commentUploadFailed(int p0, CommentError p1);
    virtual void updateUserScoreFinished();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    GJGameLevel* m_level;
    GJUserScore* m_score;
    GJLevelList* m_levelList;
    std::string m_commentKey;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_noComments;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_reportBtn;
    CCMenuItemSpriteExtra* m_commentsBtn;
    CCMenuItemSpriteExtra* m_refreshCommentsBtn;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_canUpdateUserScore;
    CommentKeyType m_mode;
};

#endif /* __INFOLAYER_H__ */