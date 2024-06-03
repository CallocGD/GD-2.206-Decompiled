#ifndef __SETFOLDERPOPUP_H__
#define __SETFOLDERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetIDPopup;
class SetTextPopupDelegate;

class SetFolderPopup: public SetIDPopup, public SetTextPopupDelegate {
public:
    static SetFolderPopup* create(int p0, bool p1, std::string p2);
    bool init(int p0, bool p1, std::string p2);
    void onSetFolderName(cocos2d::CCObject* sender);
    virtual void valueChanged();
    virtual void setTextPopupClosed(SetTextPopup* p0, std::string p1);
};

#endif /* __SETFOLDERPOPUP_H__ */