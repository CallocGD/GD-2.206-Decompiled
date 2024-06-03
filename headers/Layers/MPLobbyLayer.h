#ifndef __MPLOBBYLAYER_H__
#define __MPLOBBYLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJMPDelegate;
class UploadPopupDelegate;
class UploadActionDelegate;
class FLAlertLayerProtocol;
class TextInputDelegate;

class MPLobbyLayer: public cocos2d::CCLayer, public GJMPDelegate, public UploadPopupDelegate, public UploadActionDelegate, public FLAlertLayerProtocol, public TextInputDelegate {
public:
    static MPLobbyLayer* create(int p0);
    bool init(int p0);
    void onBack(cocos2d::CCObject* sender);
    void onBtn1(cocos2d::CCObject* sender);
    void onBtn2(cocos2d::CCObject* sender);
    void onBtn3(cocos2d::CCObject* sender);
    void onComment(cocos2d::CCObject* sender);
    TodoReturn onUpdateLobby();
    TodoReturn postComment();
    TodoReturn scene(int p0);
    TodoReturn tryExitLobby();
    TodoReturn updateLobby(float p0);
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual TodoReturn joinLobbyFinished(int p0);
    virtual TodoReturn joinLobbyFailed(int p0, GJMPErrorCode p1);
    virtual TodoReturn updateComments();
    virtual TodoReturn didUploadMPComment(int p0);
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    virtual void keyUp(cocos2d::enumKeyCodes p0);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void uploadActionFinished(int p0, int p1);
    virtual void uploadActionFailed(int p0, int p1);
    virtual void onClosePopup(UploadActionPopup* p0);
};

#endif /* __MPLOBBYLAYER_H__ */