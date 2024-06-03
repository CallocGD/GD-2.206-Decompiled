#ifndef __SHARELISTLAYER_H__
#define __SHARELISTLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class ShareListLayer: public FLAlertLayer {
public:
    static ShareListLayer* create(GJLevelList* p0);
    bool init(GJLevelList* p0);
    void onClose(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onShare(cocos2d::CCObject* sender);
    void onUnlisted(cocos2d::CCObject* sender);
    TodoReturn updateUnlistedF();
    virtual void keyBackClicked();
};

#endif /* __SHARELISTLAYER_H__ */