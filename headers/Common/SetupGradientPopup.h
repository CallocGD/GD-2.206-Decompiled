#ifndef __SETUPGRADIENTPOPUP_H__
#define __SETUPGRADIENTPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupGradientPopup: public SetupTriggerPopup {
public:
    static SetupGradientPopup* create(GradientTriggerObject* p0, cocos2d::CCArray* p1);
    bool init(GradientTriggerObject* p0, cocos2d::CCArray* p1);
    void onBlending(cocos2d::CCObject* sender);
    void onZLayer(cocos2d::CCObject* sender);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn updateBlending();
    TodoReturn updateBlendingLabel();
    TodoReturn updateGradientLabels(bool p0);
    TodoReturn updateZLayerButtons();
    virtual TodoReturn determineStartValues();
    virtual void onPlusButton(cocos2d::CCObject* sender);
    virtual TodoReturn updateToggleItem(int p0, bool p1);
    virtual void valueDidChange(int p0, float p1);
};

#endif /* __SETUPGRADIENTPOPUP_H__ */