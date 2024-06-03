#ifndef __TUTORIALPOPUP_H__
#define __TUTORIALPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class TutorialPopup: public FLAlertLayer {
public:
    static TutorialPopup* create(std::string p0);
    TodoReturn animateMenu();
    TodoReturn closeTutorial(cocos2d::CCObject* p0);
    bool init(std::string p0);
    TodoReturn registerForCallback(cocos2d::SEL_MenuHandler p0, cocos2d::CCNode* p1);
    virtual void keyBackClicked();
    virtual void show();
};

#endif /* __TUTORIALPOPUP_H__ */