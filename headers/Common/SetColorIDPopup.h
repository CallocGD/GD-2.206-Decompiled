#ifndef __SETCOLORIDPOPUP_H__
#define __SETCOLORIDPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetIDPopup;
class GJSpecialColorSelectDelegate;

class SetColorIDPopup: public SetIDPopup, public GJSpecialColorSelectDelegate {
public:
    static SetColorIDPopup* create(int p0);
    bool init(int p0);
    void onSelectSpecialColor(cocos2d::CCObject* sender);
    virtual void colorSelectClosed(GJSpecialColorSelect* p0, int p1);
};

#endif /* __SETCOLORIDPOPUP_H__ */