#ifndef __DIALOGLAYER_H__
#define __DIALOGLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TextAreaDelegate;

class DialogLayer: public cocos2d::CCLayerColor, public TextAreaDelegate {
public:
    static DialogLayer* create(DialogObject* p0, int p1);
    TodoReturn addToMainScene();
    void animateIn(DialogAnimationType p0);
    void animateInDialog();
    void animateInRandomSide();
    static DialogLayer* createDialogLayer(DialogObject* p0, cocos2d::CCArray* p1, int p2);
    TodoReturn createWithObjects(cocos2d::CCArray* p0, int p1);
    TodoReturn displayDialogObject(DialogObject* p0);
    TodoReturn displayNextObject();
    TodoReturn finishCurrentAnimation();
    TodoReturn handleDialogTap();
    bool init(DialogObject* p0, cocos2d::CCArray* p1, int p2);
    TodoReturn onClose();
    TodoReturn updateChatPlacement(DialogChatPlacement p0);
    TodoReturn updateNavButtonFrame();
    virtual void onEnter();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual TodoReturn fadeInTextFinished(TextArea* p0);
};

#endif /* __DIALOGLAYER_H__ */