#ifndef __UILAYER_H__
#define __UILAYER_H__


#include "../includes.h"

class UILayer: public cocos2d::CCLayerColor {
public:
    static UILayer* create(GJBaseGameLayer* p0);
    TodoReturn disableMenu();
    TodoReturn editorPlaytest(bool p0);
    void enableEditorMode();
    TodoReturn enableMenu();
    void handleKeypress(cocos2d::enumKeyCodes p0, bool p1);
    bool init(GJBaseGameLayer* p0);
    bool isJumpButtonPressed(bool p0);
    void onCheck(cocos2d::CCObject* sender);
    void onDeleteCheck(cocos2d::CCObject* sender);
    void onPause(cocos2d::CCObject* sender);
    TodoReturn processUINodesTouch(GJUITouchEvent p0, cocos2d::CCTouch* p1);
    TodoReturn processUINodeTouch(GJUITouchEvent p0, int p1, cocos2d::CCPoint p2, GJUINode* p3);
    TodoReturn refreshDpad();
    void resetAllButtons();
    void resetUINodeState();
    TodoReturn toggleCheckpointsMenu(bool p0);
    void toggleMenuVisibility(bool p0);
    void togglePlatformerMode(bool p0);
    TodoReturn updateDualMode(bool p0);
    TodoReturn updateUINodeVisibility(bool p0);
    virtual void draw();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual void keyUp(cocos2d::enumKeyCodes p0);
    void* m_stupidDelegate;
    void* m_pUnknown1;
    cocos2d::CCMenu* m_checkpointMenu;
    CCMenuItemSpriteExtra* m_pauseBtn;
    bool m_bUnknown2;
    bool m_bUnknown3;
    bool m_p1Jumping;
    bool m_p2Jumping;
    bool m_checkpointBtnDown;
    int m_p1TouchId;
    int m_p2TouchId;
    float m_clkTimer;
    bool m_inPlatformer;
    GJBaseGameLayer* m_gameLayer;
    bool m_initialized;
    cocos2d::CCArray* m_uiNodes;
    bool m_dualMode;
    bool m_dpadType;
    bool m_editorMode;
};

#endif /* __UILAYER_H__ */