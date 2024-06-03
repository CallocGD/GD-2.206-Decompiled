#ifndef __SECRETLAYER2_H__
#define __SECRETLAYER2_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TextInputDelegate;
class FLAlertLayerProtocol;
class DialogDelegate;

class SecretLayer2: public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static SecretLayer2* create();
    gd::string getBasicMessage();
    gd::string getErrorMessage();
    gd::string getMessage();
    gd::string getThreadMessage();
    TodoReturn nodeWithTag(int p0);
    void onBack(cocos2d::CCObject* sender);
    void onDoor(cocos2d::CCObject* sender);
    void onSecretLevel(cocos2d::CCObject* sender);
    void onSubmit(cocos2d::CCObject* sender);
    void playCoinEffect();
    TodoReturn scene();
    void selectAThread();
    void showCompletedLevel();
    void showSecretLevel();
    void updateMessageLabel(std::string p0);
    void updateSearchLabel(char const* p0);
    virtual bool init();
    virtual void onExit();
    virtual void keyBackClicked();
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void dialogClosed(DialogLayer* p0);
};

#endif /* __SECRETLAYER2_H__ */