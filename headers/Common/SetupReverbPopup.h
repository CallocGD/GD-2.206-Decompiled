#ifndef __SETUPREVERBPOPUP_H__
#define __SETUPREVERBPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupReverbPopup: public SetupTriggerPopup {
public:
    static SetupReverbPopup* create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
    bool init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
    void onPlay(cocos2d::CCObject* sender);
    void onReverb(cocos2d::CCObject* sender);
    TodoReturn updateReverbLabel();
    virtual void onClose(cocos2d::CCObject* sender);
};

#endif /* __SETUPREVERBPOPUP_H__ */