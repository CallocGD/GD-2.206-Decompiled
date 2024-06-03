#ifndef __SHARECOMMENTLAYER_H__
#define __SHARECOMMENTLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;
class UploadActionDelegate;
class UploadPopupDelegate;

class ShareCommentLayer: public FLAlertLayer, public TextInputDelegate, public UploadActionDelegate, public UploadPopupDelegate {
public:
    static ShareCommentLayer* create(std::string title, int charLimit, CommentType type, int ID, std::string desc);
    bool init(std::string title, int charLimit, CommentType type, int ID, std::string desc);
    void onClear(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onPercent(cocos2d::CCObject* sender);
    void onShare(cocos2d::CCObject* sender);
    void updateCharCountLabel();
    void updateDescText(std::string desc);
    void updatePercentLabel();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void textInputOpened(CCTextInputNode* textInput);
    virtual void textInputClosed(CCTextInputNode* textInput);
    virtual void textChanged(CCTextInputNode* textInput);
    virtual void uploadActionFinished(int ID, int unk);
    virtual void uploadActionFailed(int ID, int unk);
    virtual void onClosePopup(UploadActionPopup* p0);
};

#endif /* __SHARECOMMENTLAYER_H__ */