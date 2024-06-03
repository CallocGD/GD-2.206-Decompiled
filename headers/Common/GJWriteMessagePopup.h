#ifndef __GJWRITEMESSAGEPOPUP_H__
#define __GJWRITEMESSAGEPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;
class UploadMessageDelegate;
class UploadPopupDelegate;
class FLAlertLayerProtocol;

class GJWriteMessagePopup: public FLAlertLayer, public TextInputDelegate, public UploadMessageDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol {
public:
    static GJWriteMessagePopup* create(int p0, int p1);
    TodoReturn closeMessagePopup(bool p0);
    bool init(int p0, int p1);
    void onClearBody(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onSend(cocos2d::CCObject* sender);
    TodoReturn updateBody(std::string p0);
    TodoReturn updateCharCountLabel(int p0);
    TodoReturn updateSubject(std::string p0);
    TodoReturn updateText(std::string p0, int p1);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    virtual void uploadMessageFinished(int p0);
    virtual void uploadMessageFailed(int p0);
    virtual void onClosePopup(UploadActionPopup* p0);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
    virtual void textInputReturn(CCTextInputNode* p0);
};

#endif /* __GJWRITEMESSAGEPOPUP_H__ */