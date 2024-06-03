#ifndef __FRIENDSPROFILEPAGE_H__
#define __FRIENDSPROFILEPAGE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class FLAlertLayerProtocol;
class UploadActionDelegate;
class UploadPopupDelegate;
class UserListDelegate;

class FriendsProfilePage: public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public UserListDelegate {
public:
    static FriendsProfilePage* create(UserListType p0);
    bool init(UserListType p0);
    void onBlocked(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onUpdate(cocos2d::CCObject* sender);
    void setupUsersBrowser(cocos2d::CCArray* p0, UserListType p1);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void getUserListFinished(cocos2d::CCArray* p0, UserListType p1);
    virtual void getUserListFailed(UserListType p0, GJErrorCode p1);
    virtual void userListChanged(cocos2d::CCArray* p0, UserListType p1);
    virtual void forceReloadList(UserListType p0);
};

#endif /* __FRIENDSPROFILEPAGE_H__ */