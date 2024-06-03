#ifndef __FRIENDREQUESTPOPUP_H__
#define __FRIENDREQUESTPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class UploadActionDelegate;
class UploadPopupDelegate;
class FLAlertLayerProtocol;

class FriendRequestPopup: public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol {
public:
    static FriendRequestPopup* create(GJFriendRequest* p0);
    void blockUser();
    bool init(GJFriendRequest* p0);
    void loadFromGJFriendRequest(GJFriendRequest* p0);
    void onAccept(cocos2d::CCObject* sender);
    void onBlock(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onRemove(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
    virtual void uploadActionFinished(int p0, int p1);
    virtual void uploadActionFailed(int p0, int p1);
    virtual void onClosePopup(UploadActionPopup* p0);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};

#endif /* __FRIENDREQUESTPOPUP_H__ */