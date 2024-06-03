#ifndef __POINTNODE_H__
#define __POINTNODE_H__


#include "../includes.h"

class PointNode: public cocos2d::CCObject {
public:
    static PointNode* create(cocos2d::CCPoint p0);
    bool init(cocos2d::CCPoint p0);
    cocos2d::CCPoint m_point;
};

#endif /* __POINTNODE_H__ */