#ifndef __ACCOUNTLOGINLAYER_H__
#define __ACCOUNTLOGINLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;
class GJAccountLoginDelegate;
class FLAlertLayerProtocol;

class AccountLoginLayer: public FLAlertLayer, public TextInputDelegate, public GJAccountLoginDelegate, public FLAlertLayerProtocol {
public:
    static AccountLoginLayer* create(std::string p0);
    TodoReturn createTextBackground(cocos2d::CCPoint p0, char const* p1, cocos2d::CCSize p2);
    TodoReturn createTextInput(cocos2d::CCPoint p0, cocos2d::CCSize p1, char const* p2, int p3);
    TodoReturn createTextLabel(cocos2d::CCPoint p0, char const* p1, cocos2d::CCSize p2);
    TodoReturn disableNodes();
    TodoReturn hideLoadingUI();
    bool init(std::string p0);
    void onClose(cocos2d::CCObject* sender);
    void onForgotPassword(cocos2d::CCObject* sender);
    void onForgotUser(cocos2d::CCObject* sender);
    void onSubmit(cocos2d::CCObject* sender);
    TodoReturn resetLabel(int p0);
    TodoReturn resetLabels();
    void showLoadingUI();
    TodoReturn toggleUI(bool p0);
    TodoReturn updateLabel(AccountError p0);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    virtual TodoReturn loginAccountFinished(int p0, int p1);
    virtual TodoReturn loginAccountFailed(AccountError p0);
};

#endif /* __ACCOUNTLOGINLAYER_H__ */