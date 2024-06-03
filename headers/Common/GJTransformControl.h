#ifndef __GJTRANSFORMCONTROL_H__
#define __GJTRANSFORMCONTROL_H__


#include "../includes.h"

class GJTransformControl: public cocos2d::CCLayer {
public:
    static GJTransformControl* create();
    TodoReturn applyRotation(float p0);
    TodoReturn calculateRotationOffset();
    TodoReturn finishTouch();
    void loadFromState(GJTransformState& p0);
    TodoReturn loadValues(GameObject* p0, cocos2d::CCArray* p1, std::unordered_map<int, GameObjectEditorState>& p2);
    TodoReturn logCurrentZeroPos();
    void onToggleLockScale(cocos2d::CCObject* sender);
    TodoReturn refreshControl();
    void saveToState(GJTransformState& p0);
    TodoReturn scaleButtons(float p0);
    TodoReturn spriteByTag(int p0);
    TodoReturn updateAnchorSprite(cocos2d::CCPoint p0);
    void updateButtons(bool p0, bool p1);
    TodoReturn updateMinMaxPositions();
    virtual bool init();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
};

#endif /* __GJTRANSFORMCONTROL_H__ */