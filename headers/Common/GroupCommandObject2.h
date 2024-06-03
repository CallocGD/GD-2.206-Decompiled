#ifndef __GROUPCOMMANDOBJECT2_H__
#define __GROUPCOMMANDOBJECT2_H__


#include "../includes.h"

class GroupCommandObject2 {
public:
    TodoReturn reset();
    TodoReturn resetDelta(bool p0);
    TodoReturn runFollowCommand(double p0, double p1, double p2);
    TodoReturn runMoveCommand(cocos2d::CCPoint p0, double p1, int p2, double p3, bool p4, bool p5, bool p6, bool p7, double p8, double p9);
    TodoReturn runPlayerFollowCommand(double p0, double p1, int p2, double p3, double p4);
    TodoReturn runRotateCommand(double p0, double p1, int p2, double p3, bool p4, int p5);
    TodoReturn runTransformCommand(double p0, int p1, double p2);
    TodoReturn step(float p0);
    TodoReturn stepTransformCommand(float p0, bool p1, bool p2);
    TodoReturn updateAction(int p0, float p1);
    TodoReturn updateEffectAction(float p0, int p1);
    /* PAD */

    std::vector<KeyframeObject> m_unkVecKeyframeObject;
    /* PAD */

    std::vector<int> m_unkVecInt;
    /* PAD */

};

#endif /* __GROUPCOMMANDOBJECT2_H__ */