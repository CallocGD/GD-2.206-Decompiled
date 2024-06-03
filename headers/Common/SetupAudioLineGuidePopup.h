#ifndef __SETUPAUDIOLINEGUIDEPOPUP_H__
#define __SETUPAUDIOLINEGUIDEPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;
class SelectSettingDelegate;

class SetupAudioLineGuidePopup: public SetupTriggerPopup, public SelectSettingDelegate {
public:
    static SetupAudioLineGuidePopup* create(AudioLineGuideGameObject* p0, cocos2d::CCArray* p1);
    bool init(AudioLineGuideGameObject* p0, cocos2d::CCArray* p1);
    void onSpeed(cocos2d::CCObject* sender);
    virtual TodoReturn selectSettingClosed(SelectSettingLayer* p0);
};

#endif /* __SETUPAUDIOLINEGUIDEPOPUP_H__ */