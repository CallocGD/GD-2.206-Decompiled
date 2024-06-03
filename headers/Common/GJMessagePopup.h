#ifndef __GJMESSAGEPOPUP_H__
#define __GJMESSAGEPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class UploadActionDelegate;
class UploadPopupDelegate;
class FLAlertLayerProtocol;
class DownloadMessageDelegate;

class GJMessagePopup: public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol, public DownloadMessageDelegate {
public:
    static GJMessagePopup* create(GJUserMessage* p0);
    void blockUser();
    bool init(GJUserMessage* p0);
    void loadFromGJMessage(GJUserMessage* p0);
    void onBlock(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onRemove(cocos2d::CCObject* sender);
    void onReply(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
    virtual TodoReturn downloadMessageFinished(GJUserMessage* p0);
    virtual TodoReturn downloadMessageFailed(int p0);
    virtual void uploadActionFinished(int p0, int p1);
    virtual void uploadActionFailed(int p0, int p1);
    virtual void onClosePopup(UploadActionPopup* p0);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};

#endif /* __GJMESSAGEPOPUP_H__ */