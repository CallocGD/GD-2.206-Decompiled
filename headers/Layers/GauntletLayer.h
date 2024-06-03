#ifndef __GAUNTLETLAYER_H__
#define __GAUNTLETLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class LevelManagerDelegate;

class GauntletLayer: public cocos2d::CCLayer, public LevelManagerDelegate {
public:
    static GauntletLayer* create(GauntletType p0);
    bool init(GauntletType p0);
    void onBack(cocos2d::CCObject* sender);
    void onLevel(cocos2d::CCObject* sender);
    TodoReturn scene(GauntletType p0);
    TodoReturn setupGauntlet(cocos2d::CCArray* p0);
    TodoReturn unlockActiveItem();
    virtual void keyBackClicked();
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);
    virtual void loadLevelsFailed(char const* p0, int p1);
};

#endif /* __GAUNTLETLAYER_H__ */