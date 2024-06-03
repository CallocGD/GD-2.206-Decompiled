#ifndef __VIDEOOPTIONSLAYER_H__
#define __VIDEOOPTIONSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class VideoOptionsLayer: public FLAlertLayer {
public:
    static VideoOptionsLayer* create();
    TodoReturn createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, float p5, float p6, bool p7);
    void onAdvanced(cocos2d::CCObject* sender);
    void onApply(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onFullscreen(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onResolutionNext(cocos2d::CCObject* sender);
    void onResolutionPrev(cocos2d::CCObject* sender);
    void onTextureQualityNext(cocos2d::CCObject* sender);
    void onTextureQualityPrev(cocos2d::CCObject* sender);
    TodoReturn reloadMenu();
    TodoReturn toggleResolution();
    TodoReturn updateResolution(int p0);
    TodoReturn updateTextureQuality(int p0);
    virtual bool init();
    virtual void keyBackClicked();
};

#endif /* __VIDEOOPTIONSLAYER_H__ */