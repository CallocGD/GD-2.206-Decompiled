#ifndef __ACCOUNTREGISTERLAYER_H__
#define __ACCOUNTREGISTERLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;
class GJAccountRegisterDelegate;
class FLAlertLayerProtocol;

class AccountRegisterLayer: public FLAlertLayer, public TextInputDelegate, public GJAccountRegisterDelegate, public FLAlertLayerProtocol {
public:
    static AccountRegisterLayer* create();
    TodoReturn createTextBackground(cocos2d::CCPoint p0, cocos2d::CCSize p1);
    TodoReturn createTextInput(cocos2d::CCPoint p0, cocos2d::CCSize p1, std::string p2, int p3);
    TodoReturn createTextLabel(cocos2d::CCPoint p0, std::string p1, cocos2d::CCSize p2);
    TodoReturn disableNodes();
    TodoReturn hideLoadingUI();
    void onClose(cocos2d::CCObject* sender);
    void onSubmit(cocos2d::CCObject* sender);
    TodoReturn resetLabel(int p0);
    TodoReturn resetLabels();
    void showLoadingUI();
    TodoReturn toggleUI(bool p0);
    TodoReturn updateLabel(AccountError p0);
    TodoReturn validEmail(std::string p0);
    TodoReturn validPassword(std::string p0);
    TodoReturn validUser(std::string p0);
    virtual bool init();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
    virtual void textInputReturn(CCTextInputNode* p0);
    virtual bool allowTextInput(CCTextInputNode* p0);
    virtual TodoReturn registerAccountFinished();
    virtual TodoReturn registerAccountFailed(AccountError p0);
};

#endif /* __ACCOUNTREGISTERLAYER_H__ */