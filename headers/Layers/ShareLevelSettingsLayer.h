#ifndef __SHARELEVELSETTINGSLAYER_H__
#define __SHARELEVELSETTINGSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class NumberInputDelegate;

class ShareLevelSettingsLayer: public FLAlertLayer, public NumberInputDelegate {
public:
    static ShareLevelSettingsLayer* create(GJGameLevel* p0);
    bool init(GJGameLevel* p0);
    void onClose(cocos2d::CCObject* sender);
    void onCopyable(cocos2d::CCObject* sender);
    void onEditPassword(cocos2d::CCObject* sender);
    void onPassword(cocos2d::CCObject* sender);
    void onUnlisted(cocos2d::CCObject* sender);
    void onUnlistedFriendsOnly(cocos2d::CCObject* sender);
    TodoReturn updateSettingsState();
    virtual void keyBackClicked();
    virtual void numberInputClosed(NumberInputLayer* p0);
};

#endif /* __SHARELEVELSETTINGSLAYER_H__ */