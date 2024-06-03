#ifndef __PROFILEPAGE_H__
#define __PROFILEPAGE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class FLAlertLayerProtocol;
class LevelCommentDelegate;
class CommentUploadDelegate;
class UserInfoDelegate;
class UploadActionDelegate;
class UploadPopupDelegate;
class LeaderboardManagerDelegate;

class ProfilePage: public FLAlertLayer, public FLAlertLayerProtocol, public LevelCommentDelegate, public CommentUploadDelegate, public UserInfoDelegate, public UploadActionDelegate, public UploadPopupDelegate, public LeaderboardManagerDelegate {
public:
    static ProfilePage* create(int accountID, bool ownProfile);
    void blockUser();
    bool init(int accountID, bool ownProfile);
    bool isCorrect(char const* key);
    bool isOnWatchlist(int p0);
    void loadPage(int p0);
    void loadPageFromUserInfo(GJUserScore* p0);
    void onBlockUser(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onComment(cocos2d::CCObject* sender);
    void onCommentHistory(cocos2d::CCObject* sender);
    void onFollow(cocos2d::CCObject* sender);
    void onFriend(cocos2d::CCObject* sender);
    void onFriends(cocos2d::CCObject* sender);
    void onMessages(cocos2d::CCObject* sender);
    void onMyLevels(cocos2d::CCObject* sender);
    void onMyLists(cocos2d::CCObject* sender);
    void onNextPage(cocos2d::CCObject* sender);
    void onPrevPage(cocos2d::CCObject* sender);
    void onRequests(cocos2d::CCObject* sender);
    void onSendMessage(cocos2d::CCObject* sender);
    void onSettings(cocos2d::CCObject* sender);
    void onTwitch(cocos2d::CCObject* sender);
    void onTwitter(cocos2d::CCObject* sender);
    void onUpdate(cocos2d::CCObject* sender);
    void onYouTube(cocos2d::CCObject* sender);
    TodoReturn setupComments();
    void setupCommentsBrowser(cocos2d::CCArray* p0);
    void showNoAccountError();
    TodoReturn toggleMainPageVisibility(bool p0);
    TodoReturn updateLevelsLabel();
    TodoReturn updatePageArrows();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void show();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void updateUserScoreFinished();
    virtual void updateUserScoreFailed();
    virtual void getUserInfoFinished(GJUserScore* p0);
    virtual void getUserInfoFailed(int p0);
    virtual void userInfoChanged(GJUserScore* p0);
    virtual void loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);
    virtual void loadCommentsFailed(char const* p0);
    virtual void setupPageInfo(std::string p0, char const* p1);
    virtual void commentUploadFinished(int p0);
    virtual void commentUploadFailed(int p0, CommentError p1);
    virtual void commentDeleteFailed(int p0, int p1);
    virtual void onClosePopup(UploadActionPopup* p0);
    virtual void uploadActionFinished(int p0, int p1);
    virtual void uploadActionFailed(int p0, int p1);
    GJUserScore* m_score;
    int m_accountID;
    bool m_ownProfile;
    std::string m_profileKey;
    cocos2d::CCLabelBMFont* m_somethingWentWrong;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_followBtn;
    void* m_unk;
    cocos2d::CCArray* m_buttons;
    cocos2d::CCArray* m_arrayWithUsernameLabel;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    LoadingCircle* m_circle;
    void* m_popupDelegate;
    CCMenuItemSpriteExtra* m_refreshBtn;
};

#endif /* __PROFILEPAGE_H__ */