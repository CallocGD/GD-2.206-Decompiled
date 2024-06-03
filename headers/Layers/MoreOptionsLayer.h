#ifndef __MOREOPTIONSLAYER_H__
#define __MOREOPTIONSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;
class GooglePlayDelegate;
class GJDropDownLayerDelegate;

class MoreOptionsLayer: public FLAlertLayer, public TextInputDelegate, public GooglePlayDelegate, public GJDropDownLayerDelegate {
public:
    static MoreOptionsLayer* create();
    TodoReturn addToggle(char const* p0, char const* p1, char const* p2);
    TodoReturn countForPage(int p0);
    void goToPage(int p0);
    TodoReturn incrementCountForPage(int p0);
    TodoReturn infoKey(int p0);
    TodoReturn layerForPage(int p0);
    TodoReturn layerKey(int p0);
    TodoReturn nextPosition(int p0);
    TodoReturn objectKey(int p0);
    TodoReturn objectsForPage(int p0);
    TodoReturn offsetToNextPage();
    void onClose(cocos2d::CCObject* sender);
    void onFMODDebug(cocos2d::CCObject* sender);
    void onGPSignIn(cocos2d::CCObject* sender);
    void onGPSignOut(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onKeybindings(cocos2d::CCObject* sender);
    void onNextPage(cocos2d::CCObject* sender);
    void onParental(cocos2d::CCObject* sender);
    void onPrevPage(cocos2d::CCObject* sender);
    void onSongBrowser(cocos2d::CCObject* sender);
    void onToggle(cocos2d::CCObject* sender);
    TodoReturn pageKey(int p0);
    TodoReturn toggleGP();
    virtual bool init();
    virtual void keyBackClicked();
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
    virtual void textInputReturn(CCTextInputNode* p0);
    virtual void googlePlaySignedIn();
    virtual void dropDownLayerWillClose(GJDropDownLayer* p0);
};

#endif /* __MOREOPTIONSLAYER_H__ */