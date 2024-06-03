#ifndef __FINDOBJECTPOPUP_H__
#define __FINDOBJECTPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetIDPopup;

class FindObjectPopup: public SetIDPopup {
public:
    static FindObjectPopup* create();
    void onFindObjectID(cocos2d::CCObject* sender);
    virtual bool init();
};

#endif /* __FINDOBJECTPOPUP_H__ */