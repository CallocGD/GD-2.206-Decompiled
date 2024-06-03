#ifndef __LEVELSELECTLAYER_H__
#define __LEVELSELECTLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class BoomScrollLayerDelegate;
class DynamicScrollDelegate;

class LevelSelectLayer: public cocos2d::CCLayer, public BoomScrollLayerDelegate, public DynamicScrollDelegate {
public:
     ~LevelSelectLayer();
    static LevelSelectLayer* create(int p0);
    cocos2d::ccColor3B colorForPage(int page);
    TodoReturn getColorValue(int p0, int p1, float p2);
    bool init(int page);
    void onBack(cocos2d::CCObject* sender);
    void onDownload(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onNext(cocos2d::CCObject* sender);
    void onPlay(cocos2d::CCObject* sender);
    void onPrev(cocos2d::CCObject* sender);
    static cocos2d::CCScene* scene(int p0);
    TodoReturn tryShowAd();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual void updatePageWithObject(cocos2d::CCObject* p0, cocos2d::CCObject* p1);
    virtual void scrollLayerMoved(cocos2d::CCPoint p0);
};

#endif /* __LEVELSELECTLAYER_H__ */