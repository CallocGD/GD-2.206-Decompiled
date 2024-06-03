#ifndef __OPTIONSLAYER_H__
#define __OPTIONSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJDropDownLayer;
class FLAlertLayerProtocol;

class OptionsLayer: public GJDropDownLayer, public FLAlertLayerProtocol {
public:
    static OptionsLayer* create();
    TodoReturn createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
    TodoReturn exitLayer();
    TodoReturn musicSliderChanged(cocos2d::CCObject* p0);
    void onAccount(cocos2d::CCObject* sender);
    void onHelp(cocos2d::CCObject* sender);
    void onMenuMusic(cocos2d::CCObject* sender);
    void onOptions(cocos2d::CCObject* sender);
    void onProgressBar(cocos2d::CCObject* sender);
    void onRate(cocos2d::CCObject* sender);
    void onRecordReplays(cocos2d::CCObject* sender);
    void onSecretVault(cocos2d::CCObject* sender);
    void onSoundtracks(cocos2d::CCObject* sender);
    void onSupport(cocos2d::CCObject* sender);
    void onVideo(cocos2d::CCObject* sender);
    TodoReturn sfxSliderChanged(cocos2d::CCObject* p0);
    TodoReturn tryEnableRecord();
    virtual void customSetup();
    virtual void layerHidden();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};

#endif /* __OPTIONSLAYER_H__ */