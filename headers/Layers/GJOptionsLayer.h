#ifndef __GJOPTIONSLAYER_H__
#define __GJOPTIONSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class GJOptionsLayer: public SetupTriggerPopup {
public:
    static GJOptionsLayer* create(int p0);
    TodoReturn addGVToggle(char const* p0, char const* p1, char const* p2);
    TodoReturn addToggle(char const* p0, int p1, bool p2, char const* p3);
    TodoReturn addToggleInternal(char const* p0, int p1, bool p2, char const* p3);
    TodoReturn countForPage(int p0);
    void goToPage(int p0);
    TodoReturn incrementCountForPage(int p0);
    TodoReturn infoKey(int p0);
    bool init(int p0);
    TodoReturn layerForPage(int p0);
    TodoReturn layerKey(int p0);
    TodoReturn nextPosition(int p0);
    TodoReturn objectKey(int p0);
    TodoReturn objectsForPage(int p0);
    TodoReturn offsetToNextPage();
    void onInfo(cocos2d::CCObject* sender);
    void onNextPage(cocos2d::CCObject* sender);
    void onPrevPage(cocos2d::CCObject* sender);
    void onToggle(cocos2d::CCObject* sender);
    TodoReturn pageKey(int p0);
    virtual void setupOptions();
    virtual TodoReturn didToggleGV(std::string p0);
    virtual void didToggle(int p0);
};

#endif /* __GJOPTIONSLAYER_H__ */