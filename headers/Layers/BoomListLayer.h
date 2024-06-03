#ifndef __BOOMLISTLAYER_H__
#define __BOOMLISTLAYER_H__


#include "../includes.h"

class BoomListLayer: public cocos2d::CCLayerColor {
public:
    static BoomListLayer* create(BoomListView* p0, char const* p1);
    bool init(BoomListView* p0, char const* p1);
};

#endif /* __BOOMLISTLAYER_H__ */