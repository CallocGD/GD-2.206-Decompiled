#ifndef __MENUGAMELAYER_H__
#define __MENUGAMELAYER_H__


#include "../includes.h"

class MenuGameLayer: public cocos2d::CCLayer {
public:
    static MenuGameLayer* create();
    void destroyPlayer();
    TodoReturn getBGColor(int p0);
    void resetPlayer();
    void tryJump(float p0);
    TodoReturn updateColor(float p0);
    void updateColors();
    virtual void update(float p0);
    virtual bool init();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    bool m_unkBool1;
    float m_deltaCount;
    bool m_isDestroyingPlayer;
    int m_initCount;
    cocos2d::CCPoint* m_unused1;
    int m_unused2;
    PlayerObject* m_playerObject;
    cocos2d::CCSprite* m_backgroundSprite;
    GJGroundLayer* m_groundLayer;
    float m_backgroundSpeed;
};

#endif /* __MENUGAMELAYER_H__ */