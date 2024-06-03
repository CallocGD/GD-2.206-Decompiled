#ifndef __HARDSTREAK_H__
#define __HARDSTREAK_H__


#include "../includes.h"

class HardStreak: public cocos2d::CCDrawNode {
public:
    static HardStreak* create();
    void addPoint(cocos2d::CCPoint p0);
    TodoReturn clearAboveXPos(float p0);
    TodoReturn clearBehindXPos(float p0);
    TodoReturn createDuplicate();
    void firstSetup();
    TodoReturn normalizeAngle(double p0);
    TodoReturn quadCornerOffset(cocos2d::CCPoint p0, cocos2d::CCPoint p1, float p2);
    TodoReturn resumeStroke();
    TodoReturn scheduleAutoUpdate();
    void stopStroke();
    void updateStroke(float p0);
    virtual bool init();
    /* PAD */

    cocos2d::CCArray* m_pointArray;
    cocos2d::CCPoint m_currentPoint;
    float m_waveSize;
    float m_pulseSize;
};

#endif /* __HARDSTREAK_H__ */