#ifndef __SETUPPORTALPOPUP_H__
#define __SETUPPORTALPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;

class SetupPortalPopup: public FLAlertLayer, public TextInputDelegate {
public:
    static SetupPortalPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn determineStartValues();
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onClose(cocos2d::CCObject* sender);
    void onEditCameraSettings(cocos2d::CCObject* sender);
    void onUnboundMode(cocos2d::CCObject* sender);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn updateCameraEasing();
    TodoReturn updateCameraEasingLabel();
    TodoReturn updateCameraPadding();
    TodoReturn updateCameraPaddingLabel();
    TodoReturn updateItemVisibility();
    virtual void keyBackClicked();
};

#endif /* __SETUPPORTALPOPUP_H__ */