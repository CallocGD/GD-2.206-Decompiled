#ifndef __SETUPPERSISTENTITEMTRIGGERPOPUP_H__
#define __SETUPPERSISTENTITEMTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupPersistentItemTriggerPopup: public SetupTriggerPopup {
public:
    static SetupPersistentItemTriggerPopup* create(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);
    bool init(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPPERSISTENTITEMTRIGGERPOPUP_H__ */