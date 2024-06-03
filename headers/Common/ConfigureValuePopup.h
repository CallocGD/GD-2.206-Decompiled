#ifndef __CONFIGUREVALUEPOPUP_H__
#define __CONFIGUREVALUEPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;

class ConfigureValuePopup: public FLAlertLayer, public TextInputDelegate {
public:
    TodoReturn positionInfoObjects();
    static ConfigureValuePopup* create(ConfigureValuePopupDelegate* p0, float p1, float p2, float p3, std::string p4, std::string p5);
    bool init(ConfigureValuePopupDelegate* p0, float p1, float p2, float p3, std::string p4, std::string p5);
    void onClose(cocos2d::CCObject* sender);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn updateTextInputLabel();
    virtual void keyBackClicked();
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __CONFIGUREVALUEPOPUP_H__ */