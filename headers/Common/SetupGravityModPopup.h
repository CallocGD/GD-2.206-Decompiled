#ifndef __SETUPGRAVITYMODPOPUP_H__
#define __SETUPGRAVITYMODPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;

class SetupGravityModPopup: public FLAlertLayer, public TextInputDelegate {
public:
    static SetupGravityModPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);
    TodoReturn determineStartValues();
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);
    void onClose(cocos2d::CCObject* sender);
    void onItemIDArrow(cocos2d::CCObject* sender);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn updateItemID();
    TodoReturn updateTextInputLabel();
    TodoReturn updateValue();
    TodoReturn updateValueLabel();
    virtual void keyBackClicked();
    virtual void show();
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __SETUPGRAVITYMODPOPUP_H__ */