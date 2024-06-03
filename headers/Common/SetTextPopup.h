#ifndef __SETTEXTPOPUP_H__
#define __SETTEXTPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;

class SetTextPopup: public FLAlertLayer, public TextInputDelegate {
public:
    static SetTextPopup* create(std::string value, std::string placeholder, int maxLength, std::string title, std::string okBtnText, bool showResetBtn, float p6);
    bool init(std::string p0, std::string p1, int p2, std::string p3, std::string p4, bool p5, float p6);
    void onCancel(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onResetValue(cocos2d::CCObject* sender);
    TodoReturn updateTextInputLabel();
    virtual void keyBackClicked();
    virtual void show();
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    CCTextInputNode* m_input;
    bool m_disableDelegate;
    std::string m_value;
    SetTextPopupDelegate* m_delegate;
};

#endif /* __SETTEXTPOPUP_H__ */