#ifndef __GJGAMELOADINGLAYER_H__
#define __GJGAMELOADINGLAYER_H__


#include "../includes.h"

class GJGameLoadingLayer: public cocos2d::CCLayer {
public:
    static GJGameLoadingLayer* create(GJGameLevel* level, bool editor);
    void gameLayerDidUnload();
    bool init(GJGameLevel* level, bool editor);
    void loadLevel();
    static GJGameLoadingLayer* transitionToLoadingLayer(GJGameLevel* level, bool editor);
    virtual void onEnter();
    virtual void onEnterTransitionDidFinish();
    GJGameLevel* m_level;
    bool m_editor;
};

#endif /* __GJGAMELOADINGLAYER_H__ */