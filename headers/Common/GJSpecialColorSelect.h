#ifndef __GJSPECIALCOLORSELECT_H__
#define __GJSPECIALCOLORSELECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class GJSpecialColorSelect: public FLAlertLayer {
public:
    static GJSpecialColorSelect* create(int p0, GJSpecialColorSelectDelegate* p1, ColorSelectType p2);
    TodoReturn getButtonByTag(int p0);
    TodoReturn highlightSelected(ButtonSprite* p0);
    bool init(int p0, GJSpecialColorSelectDelegate* p1, ColorSelectType p2);
    void onClose(cocos2d::CCObject* sender);
    void onSelectColor(cocos2d::CCObject* sender);
    static const char* textForColorIdx(int p0);
    TodoReturn tryShowAd();
    virtual void keyBackClicked();
};

#endif /* __GJSPECIALCOLORSELECT_H__ */