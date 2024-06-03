#ifndef __GJCOLORSETUPLAYER_H__
#define __GJCOLORSETUPLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class ColorSelectDelegate;
class FLAlertLayerProtocol;

class GJColorSetupLayer: public FLAlertLayer, public ColorSelectDelegate, public FLAlertLayerProtocol {
public:
    static GJColorSetupLayer* create(LevelSettingsObject* p0);
    bool init(LevelSettingsObject* p0);
    void onClose(cocos2d::CCObject* sender);
    void onColor(cocos2d::CCObject* sender);
    void onPage(cocos2d::CCObject* sender);
    void showPage(int p0);
    TodoReturn updateSpriteColor(ColorChannelSprite* p0, cocos2d::CCLabelBMFont* p1, int p2);
    TodoReturn updateSpriteColors();
    virtual void keyBackClicked();
    virtual void colorSelectClosed(cocos2d::CCNode* p0);
};

#endif /* __GJCOLORSETUPLAYER_H__ */