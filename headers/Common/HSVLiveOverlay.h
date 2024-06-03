#ifndef __HSVLIVEOVERLAY_H__
#define __HSVLIVEOVERLAY_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class HSVWidgetDelegate;

class HSVLiveOverlay: public FLAlertLayer, public HSVWidgetDelegate {
public:
    static HSVLiveOverlay* create(GameObject* p0, cocos2d::CCArray* p1);
    void closeColorSelect(cocos2d::CCObject* p0);
    TodoReturn createHSVWidget(int p0);
    TodoReturn determineStartValues();
    bool init(GameObject* p0, cocos2d::CCArray* p1);
    void onSelectTab(cocos2d::CCObject* sender);
    TodoReturn toggleControls(bool p0);
    virtual void keyBackClicked();
    virtual void show();
    virtual void hsvChanged(ConfigureHSVWidget* p0);
};

#endif /* __HSVLIVEOVERLAY_H__ */