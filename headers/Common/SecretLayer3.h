#ifndef __SECRETLAYER3_H__
#define __SECRETLAYER3_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class DialogDelegate;

class SecretLayer3: public cocos2d::CCLayer, public DialogDelegate {
public:
    static SecretLayer3* create();
    TodoReturn animateEyes();
    TodoReturn firstInteractionStep1();
    TodoReturn firstInteractionStep2();
    TodoReturn firstInteractionStep3();
    TodoReturn firstInteractionStep4();
    void onBack(cocos2d::CCObject* sender);
    void onChest01(cocos2d::CCObject* sender);
    void onChest02(cocos2d::CCObject* sender);
    void onClick(cocos2d::CCObject* sender);
    TodoReturn revealStep1();
    TodoReturn revealStep2();
    TodoReturn revealStep3();
    TodoReturn revealStep4();
    TodoReturn revealStep5();
    TodoReturn scene();
    void showUnlockDialog();
    virtual bool init();
    virtual void onExit();
    virtual void keyBackClicked();
    virtual void dialogClosed(DialogLayer* p0);
};

#endif /* __SECRETLAYER3_H__ */