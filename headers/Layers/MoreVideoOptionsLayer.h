#ifndef __MOREVIDEOOPTIONSLAYER_H__
#define __MOREVIDEOOPTIONSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;

class MoreVideoOptionsLayer: public FLAlertLayer, public TextInputDelegate {
public:
    static MoreVideoOptionsLayer* create();
    void addToggle(char const* p0, char const* p1, char const* p2);
    TodoReturn countForPage(int p0);
    void goToPage(int p0);
    TodoReturn incrementCountForPage(int p0);
    TodoReturn infoKey(int p0);
    TodoReturn layerForPage(int p0);
    TodoReturn layerKey(int p0);
    TodoReturn nextPosition(int p0);
    TodoReturn objectKey(int p0);
    TodoReturn objectsForPage(int p0);
    void onApplyFPS(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onNextPage(cocos2d::CCObject* sender);
    void onPrevPage(cocos2d::CCObject* sender);
    void onToggle(cocos2d::CCObject* sender);
    void pageKey(int p0);
    void updateFPSButtons();
    virtual bool init();
    virtual void keyBackClicked();
};

#endif /* __MOREVIDEOOPTIONSLAYER_H__ */