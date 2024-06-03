#ifndef __SETUPCHECKPOINTPOPUP_H__
#define __SETUPCHECKPOINTPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupCheckpointPopup: public SetupTriggerPopup {
public:
    static SetupCheckpointPopup* create(CheckpointGameObject* p0, cocos2d::CCArray* p1);
    bool init(CheckpointGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPCHECKPOINTPOPUP_H__ */