#ifndef __CONFIGUREHSVWIDGET_H__
#define __CONFIGUREHSVWIDGET_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TextInputDelegate;

class ConfigureHSVWidget: public cocos2d::CCNode, public TextInputDelegate {
public:
    static ConfigureHSVWidget* create(cocos2d::ccHSVValue p0, bool p1, bool p2);
    TodoReturn createTextInputNode(cocos2d::CCPoint p0, int p1);
    TodoReturn getHSV(GameObject* p0, cocos2d::CCArray* p1, int p2);
    bool init(cocos2d::ccHSVValue p0, bool p1, bool p2);
    TodoReturn onClose();
    void onResetHSV(cocos2d::CCObject* sender);
    void onToggleSConst(cocos2d::CCObject* sender);
    void onToggleVConst(cocos2d::CCObject* sender);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn updateLabels();
    TodoReturn updateSliders();
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __CONFIGUREHSVWIDGET_H__ */