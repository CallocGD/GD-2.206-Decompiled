#ifndef __SETUPCAMERAEDGEPOPUP_H__
#define __SETUPCAMERAEDGEPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupCameraEdgePopup: public SetupTriggerPopup {
public:
    static SetupCameraEdgePopup* create(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
    bool init(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
    void onCameraEdge(cocos2d::CCObject* sender);
    void onTargetIDArrow(cocos2d::CCObject* sender);
    void onUnlockEdge(cocos2d::CCObject* sender);
    TodoReturn updateTargetID();
    TodoReturn updateTextInputLabel();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __SETUPCAMERAEDGEPOPUP_H__ */