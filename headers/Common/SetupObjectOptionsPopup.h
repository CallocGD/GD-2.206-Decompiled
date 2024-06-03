#ifndef __SETUPOBJECTOPTIONSPOPUP_H__
#define __SETUPOBJECTOPTIONSPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;

class SetupObjectOptionsPopup: public FLAlertLayer, public TextInputDelegate {
public:
    static SetupObjectOptionsPopup* create(GameObject* p0, cocos2d::CCArray* p1, SetGroupIDLayer* p2);
    bool init(GameObject* p0, cocos2d::CCArray* p1, SetGroupIDLayer* p2);
    void onAlwaysHide(cocos2d::CCObject* sender);
    void onApplyScaleStick(cocos2d::CCObject* sender);
    void onCenterEffect(cocos2d::CCObject* sender);
    void onDisableGlow(cocos2d::CCObject* sender);
    void onDisableObject(cocos2d::CCObject* sender);
    void onDontBoost(cocos2d::CCObject* sender);
    void onDontBoostX(cocos2d::CCObject* sender);
    void onDontEnter(cocos2d::CCObject* sender);
    void onDontFade(cocos2d::CCObject* sender);
    void onExtendedCollision(cocos2d::CCObject* sender);
    void onExtraSticky(cocos2d::CCObject* sender);
    void onGripSlope(cocos2d::CCObject* sender);
    void onHideEffects(cocos2d::CCObject* sender);
    void onHighDetail(cocos2d::CCObject* sender);
    void onIceBlock(cocos2d::CCObject* sender);
    void onNoAudioScale(cocos2d::CCObject* sender);
    void onNonStickX(cocos2d::CCObject* sender);
    void onNonStickY(cocos2d::CCObject* sender);
    void onNoParticle(cocos2d::CCObject* sender);
    void onPassable(cocos2d::CCObject* sender);
    void onReverse(cocos2d::CCObject* sender);
    void onSinglePlayerTouch(cocos2d::CCObject* sender);
    void onToggleAreaParent(cocos2d::CCObject* sender);
    void onToggleGroupParent(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
    virtual void show();
    virtual TodoReturn determineStartValues();
    virtual void onClose(cocos2d::CCObject* sender);
};

#endif /* __SETUPOBJECTOPTIONSPOPUP_H__ */