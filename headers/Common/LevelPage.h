#ifndef __LEVELPAGE_H__
#define __LEVELPAGE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class DialogDelegate;

class LevelPage: public cocos2d::CCLayer, public DialogDelegate {
public:
    static LevelPage* create(GJGameLevel* p0);
    TodoReturn addSecretCoin();
    TodoReturn addSecretDoor();
    bool init(GJGameLevel* p0);
    void onInfo(cocos2d::CCObject* sender);
    void onMoreGames(cocos2d::CCObject* sender);
    void onPlay(cocos2d::CCObject* sender);
    void onSecretDoor(cocos2d::CCObject* sender);
    void onTheTower(cocos2d::CCObject* sender);
    TodoReturn playCoinEffect();
    TodoReturn playStep2();
    TodoReturn playStep3();
    void updateDynamicPage(GJGameLevel* p0);
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    virtual void dialogClosed(DialogLayer* p0);
    void* m_unk;
    GJGameLevel* m_level;
};

#endif /* __LEVELPAGE_H__ */