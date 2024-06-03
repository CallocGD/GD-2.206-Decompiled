#ifndef __GJDROPDOWNLAYER_H__
#define __GJDROPDOWNLAYER_H__


#include "../includes.h"

class GJDropDownLayer: public cocos2d::CCLayerColor {
public:
    bool init(char const* p0, float p1, bool p2);
    bool init(char const* title);
    static GJDropDownLayer* create(const char* title, float height, bool p2);
    static GJDropDownLayer* create(const char* title);
    virtual void draw();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void customSetup();
    virtual void enterLayer();
    virtual void exitLayer(cocos2d::CCObject* p0);
    virtual void showLayer(bool p0);
    virtual void hideLayer(bool p0);
    virtual void layerVisible();
    virtual void layerHidden();
    virtual void enterAnimFinished();
    virtual void disableUI();
    virtual void enableUI();
    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    cocos2d::CCMenu* m_buttonMenu;
    GJListLayer* m_listLayer;
    cocos2d::CCLayer* m_mainLayer;
    bool m_hidden;
    GJDropDownLayerDelegate* m_delegate;
    bool m_unknown;
};

#endif /* __GJDROPDOWNLAYER_H__ */