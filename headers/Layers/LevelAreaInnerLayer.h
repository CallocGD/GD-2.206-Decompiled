#ifndef __LEVELAREAINNERLAYER_H__
#define __LEVELAREAINNERLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class DialogDelegate;

class LevelAreaInnerLayer: public cocos2d::CCLayer, public DialogDelegate {
public:
    static LevelAreaInnerLayer* create(bool p0);
    bool init(bool p0);
    void onBack(cocos2d::CCObject* sender);
    void onDoor(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onNextFloor(cocos2d::CCObject* sender);
    bool playStep1();
    TodoReturn scene(bool p0);
    cocos2d::CCAction* showFloor1CompleteDialog();
    TodoReturn tryResumeTowerMusic();
    virtual void keyBackClicked();
    virtual void dialogClosed(DialogLayer* p0);
};

#endif /* __LEVELAREAINNERLAYER_H__ */