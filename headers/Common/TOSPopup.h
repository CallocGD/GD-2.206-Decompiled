#ifndef __TOSPOPUP_H__
#define __TOSPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class TOSPopup: public FLAlertLayer {
public:
    static TOSPopup* create();
    void onClose(cocos2d::CCObject* sender);
    void onPrivacy(cocos2d::CCObject* sender);
    void onTOS(cocos2d::CCObject* sender);
    virtual bool init();
    virtual void keyBackClicked();
};

#endif /* __TOSPOPUP_H__ */