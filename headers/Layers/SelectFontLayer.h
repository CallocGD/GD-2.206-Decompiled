#ifndef __SELECTFONTLAYER_H__
#define __SELECTFONTLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class SelectFontLayer: public FLAlertLayer {
public:
    static SelectFontLayer* create(LevelEditorLayer* p0);
    bool init(LevelEditorLayer* p0);
    void onChangeFont(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    TodoReturn updateFontLabel();
    virtual void keyBackClicked();
};

#endif /* __SELECTFONTLAYER_H__ */