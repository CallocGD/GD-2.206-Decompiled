#ifndef __WORLDSELECTLAYER_H__
#define __WORLDSELECTLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class BoomScrollLayerDelegate;

class WorldSelectLayer: public cocos2d::CCLayer, public BoomScrollLayerDelegate {
public:
    static WorldSelectLayer* create(int p0);
    TodoReturn animateInActiveIsland();
    cocos2d::ccColor3B colorForPage(int p0);
    TodoReturn getColorValue(int p0, int p1, float p2);
    void goToPage(int p0, bool p1);
    bool init(int p0);
    void onBack(cocos2d::CCObject* sender);
    void onFreeLevels(cocos2d::CCObject* sender);
    void onGarage(cocos2d::CCObject* sender);
    void onNext(cocos2d::CCObject* sender);
    void onPrev(cocos2d::CCObject* sender);
    TodoReturn scene(int p0);
    TodoReturn setupWorlds();
    void showCompleteDialog();
    TodoReturn tryShowAd();
    TodoReturn unblockButtons();
    TodoReturn updateArrows();
    virtual void onExit();
    virtual void keyBackClicked();
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer* p0, int p1);
    virtual void scrollLayerScrolledToPage(BoomScrollLayer* p0, int p1);
    virtual void scrollLayerMoved(cocos2d::CCPoint p0);
};

#endif /* __WORLDSELECTLAYER_H__ */