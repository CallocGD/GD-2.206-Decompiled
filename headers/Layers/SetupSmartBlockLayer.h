#ifndef __SETUPSMARTBLOCKLAYER_H__
#define __SETUPSMARTBLOCKLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;
class SelectArtDelegate;

class SetupSmartBlockLayer: public FLAlertLayer, public TextInputDelegate, public SelectArtDelegate {
public:
    static SetupSmartBlockLayer* create(SmartGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn determineStartValues();
    bool init(SmartGameObject* p0, cocos2d::CCArray* p1);
    void onAllowFlipping(cocos2d::CCObject* sender);
    void onAllowRotation(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onCreate(cocos2d::CCObject* sender);
    void onCreateAll(cocos2d::CCObject* sender);
    void onCreateTemplate(cocos2d::CCObject* sender);
    void onDontDelete(cocos2d::CCObject* sender);
    void onIgnoreCorners(cocos2d::CCObject* sender);
    void onNearbyReference(cocos2d::CCObject* sender);
    void onPasteTemplate(cocos2d::CCObject* sender);
    void onReferenceOnly(cocos2d::CCObject* sender);
    void onSelectPremade(cocos2d::CCObject* sender);
    void onSelectTemplate(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
    virtual void show();
    virtual void selectArtClosed(SelectArtLayer* p0);
};

#endif /* __SETUPSMARTBLOCKLAYER_H__ */