#ifndef __CCSCROLLLAYEREXT_H__
#define __CCSCROLLLAYEREXT_H__


#include "../includes.h"

class CCScrollLayerExt: public cocos2d::CCLayer {
public:
     CCScrollLayerExt(cocos2d::CCRect p0);
    TodoReturn constraintContent();
    TodoReturn doConstraintContent(bool p0);
    TodoReturn getMaxY();
    TodoReturn getMinY();
    void moveToTop();
    void moveToTopWithOffset(float p0);
    TodoReturn scrollingEnd();
    void scrollLayer(float p0);
    void setContentLayerSize(cocos2d::CCSize p0);
    void setContentOffset(cocos2d::CCPoint p0, bool p1);
    TodoReturn updateIndicators(float p0);
    virtual void visit();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    virtual TodoReturn preVisitWithClippingRect(cocos2d::CCRect p0);
    virtual TodoReturn postVisit();
    cocos2d::CCTouch* m_touch;
    cocos2d::CCPoint m_touchPosition;
    cocos2d::CCPoint m_touchStartPosition;
    cocos2d::cc_timeval m_timeValue;
    bool m_touchDown;
    bool m_notAtEndOfScroll;
    cocos2d::CCLayerColor* m_verticalScrollbar;
    cocos2d::CCLayerColor* m_horizontalScrollbar;
    CCScrollLayerExtDelegate* m_delegate;
    CCContentLayer* m_contentLayer;
    bool m_cutContent;
    bool m_vScrollbarVisible;
    bool m_hScrollbarVisible;
    bool m_disableHorizontal;
    bool m_disableVertical;
    bool m_disableMovement;
    float m_scrollLimitTop;
    float m_scrollLimitBottom;
    float m_peekLimitTop;
    float m_peekLimitBottom;
};

#endif /* __CCSCROLLLAYEREXT_H__ */