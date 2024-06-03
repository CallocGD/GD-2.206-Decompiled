#ifndef __SECRETLAYER4_H__
#define __SECRETLAYER4_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TextInputDelegate;
class FLAlertLayerProtocol;
class DialogDelegate;

class SecretLayer4: public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static SecretLayer4* create();
    TodoReturn getBasicMessage();
    TodoReturn getErrorMessage();
    TodoReturn getMessage();
    TodoReturn getThreadMessage();
    TodoReturn nodeWithTag(int p0);
    void onBack(cocos2d::CCObject* sender);
    void onChest01(cocos2d::CCObject* sender);
    void onSubmit(cocos2d::CCObject* sender);
    TodoReturn playCoinEffect();
    TodoReturn scene();
    TodoReturn selectAThread();
    void showDialog(int p0);
    void showFirstDialog();
    TodoReturn updateMessageLabel(std::string p0);
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

#endif /* __SECRETLAYER4_H__ */