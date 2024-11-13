#ifndef __OBB2D_H__
#define __OBB2D_H__


#include "../includes.h"

class OBB2D: public cocos2d::CCNode {
public:
    static OBB2D* create(cocos2d::CCPoint center, float width,float height,float rotationAngle);
    void calculateWithCenter(cocos2d::CCPoint center, float width,float height,float rotationAngle);
    void computeAxes();
    cocos2d::CCRect getBoundingRect();
    bool init(cocos2d::CCPoint center, float width,float height,float rotationAngle);
    void orderCorners();
    bool overlaps(OBB2D* other);
    bool overlaps1Way(OBB2D* other);

    cocos2d::CCPoint m_corners[4]; /* 0x108 */
    cocos2d::CCPoint m_positions[4]; /* 0x128 */
    cocos2d::CCPoint m_horizontalDifference;
    cocos2d::CCPoint m_verticalDifference;
    cocos2d::CCPoint m_axes[4];
    cocos2d::CCPoint m_center;
};


#endif /* __OBB2D_H__ */
