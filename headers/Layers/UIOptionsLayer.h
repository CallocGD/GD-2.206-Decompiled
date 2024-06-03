#ifndef __UIOPTIONSLAYER_H__
#define __UIOPTIONSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class UIOptionsLayer: public SetupTriggerPopup {
public:
    static UIOptionsLayer* create(bool p0);
    TodoReturn getNode(int p0);
    bool init(bool p0);
    void onReset(cocos2d::CCObject* sender);
    void onSaveLoad(cocos2d::CCObject* sender);
    TodoReturn toggleUIGroup(int p0);
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void valueDidChange(int p0, float p1);
    virtual TodoReturn getValue(int p0);
};

#endif /* __UIOPTIONSLAYER_H__ */