#ifndef __FREQUESTPROFILEPAGE_H__
#define __FREQUESTPROFILEPAGE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class FLAlertLayerProtocol;
class UploadActionDelegate;
class UploadPopupDelegate;
class FriendRequestDelegate;

class FRequestProfilePage: public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public FriendRequestDelegate {
public:
    static FRequestProfilePage* create(bool p0);
    TodoReturn deleteSelected();
    bool init(bool p0);
    bool isCorrect(char const* p0);
    void loadPage(int p0);
    void onClose(cocos2d::CCObject* sender);
    void onDeleteSelected(cocos2d::CCObject* sender);
    void onNextPage(cocos2d::CCObject* sender);
    void onPrevPage(cocos2d::CCObject* sender);
    void onSentRequests(cocos2d::CCObject* sender);
    void onToggleAllObjects(cocos2d::CCObject* sender);
    void onUpdate(cocos2d::CCObject* sender);
    void setupCommentsBrowser(cocos2d::CCArray* p0);
    TodoReturn untoggleAll();
    TodoReturn updateLevelsLabel();
    TodoReturn updatePageArrows();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void onClosePopup(UploadActionPopup* p0);
    virtual void uploadActionFinished(int p0, int p1);
    virtual void uploadActionFailed(int p0, int p1);
    virtual TodoReturn loadFRequestsFinished(cocos2d::CCArray* p0, char const* p1);
    virtual TodoReturn loadFRequestsFailed(char const* p0, GJErrorCode p1);
    virtual void setupPageInfo(std::string p0, char const* p1);
    virtual TodoReturn forceReloadRequests(bool p0);
};

#endif /* __FREQUESTPROFILEPAGE_H__ */