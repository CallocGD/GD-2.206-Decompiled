#ifndef __CUSTOMSONGLAYER_H__
#define __CUSTOMSONGLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;
class GJDropDownLayerDelegate;
class MusicBrowserDelegate;

class CustomSongLayer: public FLAlertLayer, public TextInputDelegate, public GJDropDownLayerDelegate, public MusicBrowserDelegate {
public:
    static CustomSongLayer* create(CustomSongDelegate* p0);
    bool init(CustomSongDelegate* p0);
    void onClose(cocos2d::CCObject* sender);
    void onCreateLines(cocos2d::CCObject* sender);
    void onMusicBrowser(cocos2d::CCObject* sender);
    void onNewgroundsBrowser(cocos2d::CCObject* sender);
    void onOptions(cocos2d::CCObject* sender);
    void onSearch(cocos2d::CCObject* sender);
    void onSongBrowser(cocos2d::CCObject* sender);
    void showNewgroundsMessage();
    virtual void keyBackClicked();
    virtual void show();
    virtual void textChanged(CCTextInputNode* p0);
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
    virtual void textInputReturn(CCTextInputNode* p0);
    virtual void dropDownLayerWillClose(GJDropDownLayer* p0);
    virtual void musicBrowserClosed(MusicBrowser* p0);
};

#endif /* __CUSTOMSONGLAYER_H__ */