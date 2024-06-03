#ifndef __HSVWIDGETPOPUP_H__
#define __HSVWIDGETPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class HSVWidgetPopup: public FLAlertLayer {
public:
    static HSVWidgetPopup* create(cocos2d::ccHSVValue p0, HSVWidgetDelegate* p1, std::string p2);
    bool init(cocos2d::ccHSVValue p0, HSVWidgetDelegate* p1, std::string p2);
    void onClose(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
};

#endif /* __HSVWIDGETPOPUP_H__ */