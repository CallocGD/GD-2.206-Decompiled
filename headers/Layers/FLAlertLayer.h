#ifndef __FLALERTLAYER_H__
#define __FLALERTLAYER_H__


#include "../includes.h"

class FLAlertLayer: public cocos2d::CCLayerColor {
public:
     ~FLAlertLayer();
     FLAlertLayer();
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale);
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width);
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2);
    static FLAlertLayer* create(char const* title, const std::string& desc, char const* btn);
    TodoReturn incrementForcePrio();
    bool init(FLAlertLayerProtocol* p0, char const* p1, std::string p2, char const* p3, char const* p4, float p5, bool p6, float p7, float p8);
    bool init(int p0);
    void onBtn1(cocos2d::CCObject* sender);
    void onBtn2(cocos2d::CCObject* sender);
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual void show();
    cocos2d::CCMenu* m_buttonMenu;
    FLAlertLayerProtocol* m_alertProtocol;
    cocos2d::CCNode* m_scene;
    bool m_reverseKeyBack;
    cocos2d::ccColor3B m_color;
    cocos2d::CCLayer* m_mainLayer;
    int m_ZOrder;
    bool m_noElasticity;
    cocos2d::ccColor3B m_color2;
    ButtonSprite* m_button1;
    ButtonSprite* m_button2;
    ScrollingLayer* m_scrollingLayer;
    int m_controlConnected;
    bool m_containsBorder;
    bool m_noAction;
    int m_joystickConnected;
    bool m_forcePrioRegistered;
};

#endif /* __FLALERTLAYER_H__ */