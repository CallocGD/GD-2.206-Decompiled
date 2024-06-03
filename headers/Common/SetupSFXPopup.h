#ifndef __SETUPSFXPOPUP_H__
#define __SETUPSFXPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupAudioTriggerPopup;
class CustomSFXDelegate;
class SFXBrowserDelegate;

class SetupSFXPopup: public SetupAudioTriggerPopup, public CustomSFXDelegate, public SFXBrowserDelegate {
public:
    static SetupSFXPopup* create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn createSFXWidget();
    bool init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
    void onBrowseSFX(cocos2d::CCObject* sender);
    TodoReturn updateLength();
    virtual void pageChanged();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void onPlusButton(cocos2d::CCObject* sender);
    virtual void valueDidChange(int p0, float p1);
    virtual void sfxObjectSelected(SFXInfoObject* p0);
    virtual TodoReturn getActiveSFXID();
    virtual TodoReturn overridePlaySFX(SFXInfoObject* p0);
    virtual TodoReturn sfxBrowserClosed(SFXBrowser* p0);
};

#endif /* __SETUPSFXPOPUP_H__ */