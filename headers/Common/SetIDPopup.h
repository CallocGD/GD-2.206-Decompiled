#ifndef __SETIDPOPUP_H__
#define __SETIDPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;

class SetIDPopup: public FLAlertLayer, public TextInputDelegate {
public:
    static SetIDPopup* create(int p0, int p1, int p2, std::string p3, std::string p4, bool p5, int p6, float p7, bool p8, bool p9);
    bool init(int p0, int p1, int p2, std::string p3, std::string p4, bool p5, int p6, float p7, bool p8, bool p9);
    void onCancel(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onItemIDArrow(cocos2d::CCObject* sender);
    void onResetValue(cocos2d::CCObject* sender);
    TodoReturn updateTextInputLabel();
    virtual void keyBackClicked();
    virtual void show();
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    virtual void valueChanged();
    CCTextInputNode* m_inputNode;
    int m_value;
    bool m_unkBool;
    bool m_cancelled;
    int m_minimum;
    int m_maximum;
    int m_default;
    SetIDPopupDelegate* m_delegate;
};

#endif /* __SETIDPOPUP_H__ */