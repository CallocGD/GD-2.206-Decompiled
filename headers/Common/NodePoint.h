#ifndef __NODEPOINT_H__
#define __NODEPOINT_H__


#include "../includes.h"

class NodePoint: public cocos2d::CCObject {
public:
    static NodePoint* create(cocos2d::CCPoint p0);
    bool init(cocos2d::CCPoint p0);
};

#endif /* __NODEPOINT_H__ */