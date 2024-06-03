#ifndef __GJREQUESTCELL_H__
#define __GJREQUESTCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;
class FLAlertLayerProtocol;
class UploadPopupDelegate;
class UploadActionDelegate;

class GJRequestCell: public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
     GJRequestCell(char const* p0, float p1, float p2);
    void loadFromScore(GJUserScore* p0);
    TodoReturn markAsRead();
    void onDeleteRequest(cocos2d::CCObject* sender);
    void onToggle(cocos2d::CCObject* sender);
    void onViewFriendRequest(cocos2d::CCObject* sender);
    void onViewProfile(cocos2d::CCObject* sender);
    TodoReturn updateBGColor(int p0);
    TodoReturn updateToggle();
    virtual bool init();
    virtual void draw();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void uploadActionFinished(int p0, int p1);
    virtual void uploadActionFailed(int p0, int p1);
    virtual void onClosePopup(UploadActionPopup* p0);
};

#endif /* __GJREQUESTCELL_H__ */