#ifndef __SETLEVELORDERPOPUP_H__
#define __SETLEVELORDERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetIDPopup;

class SetLevelOrderPopup: public SetIDPopup {
public:
    static SetLevelOrderPopup* create(int p0, int p1, int p2);
    bool init(int p0, int p1, int p2);
    void onOrderButton(cocos2d::CCObject* sender);
};

#endif /* __SETLEVELORDERPOPUP_H__ */