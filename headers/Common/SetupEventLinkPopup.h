#ifndef __SETUPEVENTLINKPOPUP_H__
#define __SETUPEVENTLINKPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupEventLinkPopup: public SetupTriggerPopup {
public:
    static SetupEventLinkPopup* create(EventLinkTrigger* p0, cocos2d::CCArray* p1);
    bool init(EventLinkTrigger* p0, cocos2d::CCArray* p1);
    void onSelectEvent(cocos2d::CCObject* sender);
    TodoReturn updateEventIDs(std::set<int>& p0);
};

#endif /* __SETUPEVENTLINKPOPUP_H__ */