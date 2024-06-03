#ifndef __TUTORIALLAYER_H__
#define __TUTORIALLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class TutorialLayer: public FLAlertLayer {
public:
    static TutorialLayer* create();
    void loadPage(int p0);
    void onClose(cocos2d::CCObject* sender);
    void onNext(cocos2d::CCObject* sender);
    TodoReturn removeTutorialTexture();
    virtual bool init();
    virtual void keyBackClicked();
};

#endif /* __TUTORIALLAYER_H__ */