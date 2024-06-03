#ifndef __PAUSELAYER_H__
#define __PAUSELAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCBlockLayer;

class PauseLayer: public CCBlockLayer {
public:
    static PauseLayer* create(bool p0);
    TodoReturn createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
    void goEdit();
    bool init(bool p0);
    void musicSliderChanged(cocos2d::CCObject* p0);
    void onEdit(cocos2d::CCObject* sender);
    void onHelp(cocos2d::CCObject* sender);
    void onNormalMode(cocos2d::CCObject* sender);
    void onPracticeMode(cocos2d::CCObject* sender);
    void onQuit(cocos2d::CCObject* sender);
    void onRecordReplays(cocos2d::CCObject* sender);
    void onReplay(cocos2d::CCObject* sender);
    void onRestart(cocos2d::CCObject* sender);
    void onRestartFull(cocos2d::CCObject* sender);
    void onResume(cocos2d::CCObject* sender);
    void onSettings(cocos2d::CCObject* sender);
    void onTime(cocos2d::CCObject* sender);
    void setupProgressBars();
    void sfxSliderChanged(cocos2d::CCObject* p0);
    TodoReturn tryShowBanner(float p0);
    void tryQuit(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual void customSetup();
    virtual void keyUp(cocos2d::enumKeyCodes p0);
};

#endif /* __PAUSELAYER_H__ */