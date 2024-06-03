#ifndef __GJUSERCELL_H__
#define __GJUSERCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;
class FLAlertLayerProtocol;
class UploadPopupDelegate;
class UploadActionDelegate;

class GJUserCell: public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
     GJUserCell(char const* p0, float p1, float p2);
    void loadFromScore(GJUserScore* p0);
    void onCancelFriendRequest(cocos2d::CCObject* sender);
    void onRemoveFriend(cocos2d::CCObject* sender);
    void onSendMessage(cocos2d::CCObject* sender);
    void onUnblockUser(cocos2d::CCObject* sender);
    void onViewFriendRequest(cocos2d::CCObject* sender);
    void onViewProfile(cocos2d::CCObject* sender);
    TodoReturn updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void uploadActionFinished(int p0, int p1);
    virtual void uploadActionFailed(int p0, int p1);
    virtual void onClosePopup(UploadActionPopup* p0);
};

#endif /* __GJUSERCELL_H__ */