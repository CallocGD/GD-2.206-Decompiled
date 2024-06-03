#ifndef __BOOMSCROLLLAYER_H__
#define __BOOMSCROLLLAYER_H__


#include "../includes.h"

class BoomScrollLayer: public cocos2d::CCLayer {
public:
     BoomScrollLayer();
    static BoomScrollLayer* create(cocos2d::CCArray* pages, int unk1, bool unk2, cocos2d::CCArray* unk3, DynamicScrollDelegate* delegate);
    static BoomScrollLayer* create(cocos2d::CCArray* pages, int unk1, bool unk2);
    TodoReturn addPage(cocos2d::CCLayer* p0, int p1);
    TodoReturn addPage(cocos2d::CCLayer* p0);
    TodoReturn cancelAndStoleTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    TodoReturn claimTouch(cocos2d::CCTouch* p0);
    TodoReturn getPage(int p0);
    int getRelativePageForNum(int p0);
    TodoReturn getRelativePosForPage(int p0);
    TodoReturn getTotalPages();
    bool init(cocos2d::CCArray* p0, int p1, bool p2, cocos2d::CCArray* p3, DynamicScrollDelegate* p4);
    void instantMoveToPage(int p0);
    void moveToPage(int p0);
    void moveToPageEnded();
    int pageNumberForPosition(cocos2d::CCPoint p0);
    TodoReturn positionForPageWithNumber(int p0);
    TodoReturn quickUpdate();
    TodoReturn removePage(cocos2d::CCLayer* p0);
    TodoReturn removePageWithNumber(int p0);
    void repositionPagesLooped();
    void selectPage(int p0);
    void setDotScale(float p0);
    void setPagesIndicatorPosition(cocos2d::CCPoint p0);
    void setupDynamicScrolling(cocos2d::CCArray* p0, DynamicScrollDelegate* p1);
    void togglePageIndicators(bool p0);
    void updateDots(float p0);
    void updatePages();
    virtual void visit();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
};

#endif /* __BOOMSCROLLLAYER_H__ */