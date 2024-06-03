#ifndef __COLLISIONBLOCKPOPUP_H__
#define __COLLISIONBLOCKPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;

class CollisionBlockPopup: public FLAlertLayer, public TextInputDelegate {
public:
    static CollisionBlockPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    TodoReturn createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
    TodoReturn determineStartValues();
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onClose(cocos2d::CCObject* sender);
    void onDynamicBlock(cocos2d::CCObject* sender);
    void onItemIDArrow(cocos2d::CCObject* sender);
    void onNextItemID(cocos2d::CCObject* sender);
    TodoReturn updateEditorLabel();
    TodoReturn updateItemID();
    TodoReturn updateTextInputLabel();
    virtual void keyBackClicked();
    virtual void show();
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
    virtual void textInputReturn(CCTextInputNode* p0);
};

#endif /* __COLLISIONBLOCKPOPUP_H__ */