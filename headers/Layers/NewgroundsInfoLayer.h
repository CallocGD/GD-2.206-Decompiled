#ifndef __NEWGROUNDSINFOLAYER_H__
#define __NEWGROUNDSINFOLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class FLAlertLayerProtocol;

class NewgroundsInfoLayer: public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static NewgroundsInfoLayer* create();
    void onArtists(cocos2d::CCObject* sender);
    void onChanges(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onGuidelines(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onNewgrounds(cocos2d::CCObject* sender);
    void onSupporter(cocos2d::CCObject* sender);
    virtual bool init();
    virtual void keyBackClicked();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};

#endif /* __NEWGROUNDSINFOLAYER_H__ */