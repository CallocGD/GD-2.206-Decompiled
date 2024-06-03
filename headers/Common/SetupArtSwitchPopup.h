#ifndef __SETUPARTSWITCHPOPUP_H__
#define __SETUPARTSWITCHPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;
class SelectArtDelegate;

class SetupArtSwitchPopup: public SetupTriggerPopup, public SelectArtDelegate {
public:
    static SetupArtSwitchPopup* create(ArtTriggerGameObject* p0, cocos2d::CCArray* p1, int p2);
    bool init(ArtTriggerGameObject* p0, cocos2d::CCArray* p1, int p2);
    void onArt(cocos2d::CCObject* sender);
    virtual void selectArtClosed(SelectArtLayer* p0);
};

#endif /* __SETUPARTSWITCHPOPUP_H__ */