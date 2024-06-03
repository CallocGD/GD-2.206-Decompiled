#ifndef __SECRETLAYER_H__
#define __SECRETLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TextInputDelegate;
class FLAlertLayerProtocol;

class SecretLayer: public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol {
public:
    static SecretLayer* create();
    TodoReturn getBasicMessage();
    TodoReturn getMessage();
    TodoReturn getThreadMessage();
    TodoReturn nodeWithTag(int p0);
    void onBack(cocos2d::CCObject* sender);
    void onSubmit(cocos2d::CCObject* sender);
    TodoReturn playCoinEffect();
    TodoReturn scene();
    TodoReturn selectAThread();
    TodoReturn updateMessageLabel(std::string p0);
    void updateSearchLabel(char const* p0);
    virtual bool init();
    virtual void keyBackClicked();
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};

#endif /* __SECRETLAYER_H__ */