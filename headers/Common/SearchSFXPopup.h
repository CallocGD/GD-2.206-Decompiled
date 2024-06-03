#ifndef __SEARCHSFXPOPUP_H__
#define __SEARCHSFXPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetTextPopup;

class SearchSFXPopup: public SetTextPopup {
public:
    static SearchSFXPopup* create(std::string p0);
    bool init(std::string p0);
    void onSearchFolders(cocos2d::CCObject* sender);
};

#endif /* __SEARCHSFXPOPUP_H__ */