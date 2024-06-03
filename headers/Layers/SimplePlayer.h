#ifndef __SIMPLEPLAYER_H__
#define __SIMPLEPLAYER_H__


#include "../includes.h"

class SimplePlayer: public cocos2d::CCSprite {
public:
    static SimplePlayer* create(int p0);
    TodoReturn asyncLoadIcon(int p0, IconType p1);
    void createRobotSprite(int p0);
    void createSpiderSprite(int p0);
    TodoReturn hideAll();
    TodoReturn hideSecondary();
    TodoReturn iconFinishedLoading(int p0, IconType p1);
    bool init(int p0);
    void setColors(cocos2d::ccColor3B const& p0, cocos2d::ccColor3B const& p1);
    void setFrames(char const* p0, char const* p1, char const* p2, char const* p3, char const* p4);
    void updateColors();
    void updatePlayerFrame(int p0, IconType p1);
    virtual void setOpacity(unsigned char p0);
    virtual void setColor(cocos2d::ccColor3B const& p0);
    cocos2d::CCSprite* m_firstLayer;
    cocos2d::CCSprite* m_secondLayer;
    cocos2d::CCSprite* m_birdDome;
    cocos2d::CCSprite* m_outlineSprite;
    cocos2d::CCSprite* m_detailSprite;
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    int m_unknown;
    bool m_hasGlowOutline;
    /* PAD */

    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    /* PAD */

};

#endif /* __SIMPLEPLAYER_H__ */