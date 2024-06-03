#ifndef __GJPATHSLAYER_H__
#define __GJPATHSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class FLAlertLayerProtocol;

class GJPathsLayer: public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static GJPathsLayer* create();
    TodoReturn darkenButtons(bool p0);
    static gd::string nameForPath(int p0);
    void onClose(cocos2d::CCObject* sender);
    void onPath(cocos2d::CCObject* sender);
    virtual bool init();
    virtual void onExit();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void show();
};

#endif /* __GJPATHSLAYER_H__ */