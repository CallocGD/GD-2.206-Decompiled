#ifndef __KEYBINDINGSLAYER_H__
#define __KEYBINDINGSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class KeybindingsLayer: public FLAlertLayer {
public:
    static KeybindingsLayer* create();
    TodoReturn addKeyPair(char const* p0, char const* p1);
    TodoReturn countForPage(int p0);
    void goToPage(int p0);
    TodoReturn incrementCountForPage(int p0);
    TodoReturn infoKey(int p0);
    TodoReturn layerForPage(int p0);
    TodoReturn layerKey(int p0);
    TodoReturn nextPosition(int p0);
    TodoReturn objectKey(int p0);
    TodoReturn objectsForPage(int p0);
    void onClose(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onNextPage(cocos2d::CCObject* sender);
    void onPrevPage(cocos2d::CCObject* sender);
    void onToggle(cocos2d::CCObject* sender);
    TodoReturn pageKey(int p0);
    virtual bool init();
    virtual void keyBackClicked();
};

#endif /* __KEYBINDINGSLAYER_H__ */