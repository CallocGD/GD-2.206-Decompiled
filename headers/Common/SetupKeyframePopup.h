#ifndef __SETUPKEYFRAMEPOPUP_H__
#define __SETUPKEYFRAMEPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupKeyframePopup: public SetupTriggerPopup {
public:
    static SetupKeyframePopup* create(KeyframeGameObject* p0, cocos2d::CCArray* p1, LevelEditorLayer* p2);
    bool init(KeyframeGameObject* p0, cocos2d::CCArray* p1, LevelEditorLayer* p2);
    void onTimeMode(cocos2d::CCObject* sender);
    TodoReturn refreshPreviewArt();
    TodoReturn updateTimeModeButtons();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void onCustomButton(cocos2d::CCObject* sender);
    virtual void valueDidChange(int p0, float p1);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __SETUPKEYFRAMEPOPUP_H__ */