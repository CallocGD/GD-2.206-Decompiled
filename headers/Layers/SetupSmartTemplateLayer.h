#ifndef __SETUPSMARTTEMPLATELAYER_H__
#define __SETUPSMARTTEMPLATELAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;
class FLAlertLayerProtocol;

class SetupSmartTemplateLayer: public FLAlertLayer, public TextInputDelegate, public FLAlertLayerProtocol {
public:
    static SetupSmartTemplateLayer* create(GJSmartTemplate* p0);
    bool init(GJSmartTemplate* p0);
    void onBack(cocos2d::CCObject* sender);
    void onClick(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __SETUPSMARTTEMPLATELAYER_H__ */