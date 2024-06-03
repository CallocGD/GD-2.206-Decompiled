#ifndef __GJPROMOPOPUP_H__
#define __GJPROMOPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class GJPromoPopup: public FLAlertLayer {
public:
    static GJPromoPopup* create(std::string p0);
    bool init(std::string p0);
    void onClose(cocos2d::CCObject* sender);
    virtual void onExit();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void show();
};

#endif /* __GJPROMOPOPUP_H__ */