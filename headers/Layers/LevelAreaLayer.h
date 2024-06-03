#ifndef __LEVELAREALAYER_H__
#define __LEVELAREALAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class DialogDelegate;

class LevelAreaLayer: public cocos2d::CCLayer, public DialogDelegate {
public:
    static LevelAreaLayer* create();
    cocos2d::CCAction* addGodRay(float p0, float p1, float p2, float p3, float p4, cocos2d::CCPoint p5);
    void addTorch(cocos2d::CCNode* p0, cocos2d::CCPoint p1, int p2, float p3, int p4, bool p5);
    cocos2d::CCAction* fadeInsideTower();
    void onBack(cocos2d::CCObject* sender);
    void onClickDoor(cocos2d::CCObject* sender);
    bool onEnterTower();
    TodoReturn scene();
    cocos2d::CCAction* showDialog();
    virtual bool init();
    virtual void keyBackClicked();
    virtual void dialogClosed(DialogLayer* p0);
};

#endif /* __LEVELAREALAYER_H__ */