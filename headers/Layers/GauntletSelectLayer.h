#ifndef __GAUNTLETSELECTLAYER_H__
#define __GAUNTLETSELECTLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class BoomScrollLayerDelegate;
class LevelManagerDelegate;

class GauntletSelectLayer: public cocos2d::CCLayer, public BoomScrollLayerDelegate, public LevelManagerDelegate {
public:
    static GauntletSelectLayer* create(int p0);
    void goToPage(int p0, bool p1);
    bool init(int p0);
    void onBack(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onNext(cocos2d::CCObject* sender);
    void onPlay(cocos2d::CCObject* sender);
    void onPrev(cocos2d::CCObject* sender);
    void onRefresh(cocos2d::CCObject* sender);
    TodoReturn scene(int p0);
    void setupGauntlets();
    TodoReturn unblockPlay();
    TodoReturn updateArrows();
    virtual void onExit();
    virtual void keyBackClicked();
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer* p0, int p1);
    virtual void scrollLayerScrolledToPage(BoomScrollLayer* p0, int p1);
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);
    virtual void loadLevelsFailed(char const* p0, int p1);
};

#endif /* __GAUNTLETSELECTLAYER_H__ */