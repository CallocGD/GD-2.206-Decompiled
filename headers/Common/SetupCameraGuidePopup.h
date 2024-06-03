#ifndef __SETUPCAMERAGUIDEPOPUP_H__
#define __SETUPCAMERAGUIDEPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupCameraGuidePopup: public SetupTriggerPopup {
public:
    static SetupCameraGuidePopup* create(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
    bool init(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPCAMERAGUIDEPOPUP_H__ */