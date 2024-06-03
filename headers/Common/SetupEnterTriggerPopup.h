#ifndef __SETUPENTERTRIGGERPOPUP_H__
#define __SETUPENTERTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupEnterTriggerPopup: public SetupTriggerPopup {
public:
    static SetupEnterTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
    void onEnterType(cocos2d::CCObject* sender);
    virtual TodoReturn determineStartValues();
};

#endif /* __SETUPENTERTRIGGERPOPUP_H__ */