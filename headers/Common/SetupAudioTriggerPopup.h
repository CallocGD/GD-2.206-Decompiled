#ifndef __SETUPAUDIOTRIGGERPOPUP_H__
#define __SETUPAUDIOTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupAudioTriggerPopup: public SetupTriggerPopup {
public:
    TodoReturn addProxVolControls(int p0);
    TodoReturn addTimeControls(int p0, float p1);
    void onProxMode(cocos2d::CCObject* sender);
    TodoReturn updateSpecialGroup();
    virtual void valueDidChange(int p0, float p1);
};

#endif /* __SETUPAUDIOTRIGGERPOPUP_H__ */