#ifndef __PLAYERCHECKPOINT_H__
#define __PLAYERCHECKPOINT_H__


#include "../includes.h"

class PlayerCheckpoint: public cocos2d::CCNode {
public:
    static PlayerCheckpoint* create();
    virtual bool init();
    cocos2d::CCPoint m_position;
    cocos2d::CCPoint m_lastPosition;
    int m_unkInt1;
    bool m_isUpsideDown;
    bool m_unk7b3;
    bool m_isShip;
    bool m_isBall;
    bool m_isBird;
    bool m_isSwing;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isOnGround;
    /* PAD */

    int m_hasGhostTrail;
    uint8_t m_unkBytes1;
    float m_speed;
    bool m_isHidden;
    bool m_isGoingLeft;
    uint8_t m_unkBytes2;
    float m_unkFloat1;
    int m_possiblyFlags;
    int m_timeOrPercentRelated;
    std::vector<float> m_yPositionVector;
    uint8_t m_unkBytes3;
};

#endif /* __PLAYERCHECKPOINT_H__ */