#ifndef __SETUPOBJECTOPTIONS2POPUP_H__
#define __SETUPOBJECTOPTIONS2POPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupObjectOptions2Popup: public SetupTriggerPopup {
public:
    static SetupObjectOptions2Popup* create(GameObject* p0, cocos2d::CCArray* p1);
    bool init(GameObject* p0, cocos2d::CCArray* p1);
    virtual void onPlusButton(cocos2d::CCObject* sender);
};

#endif /* __SETUPOBJECTOPTIONS2POPUP_H__ */