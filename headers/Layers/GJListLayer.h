#ifndef __GJLISTLAYER_H__
#define __GJLISTLAYER_H__


#include "../includes.h"

class GJListLayer: public cocos2d::CCLayerColor {
public:
    static GJListLayer* create(BoomListView* p0, char const* p1, cocos2d::ccColor4B p2, float p3, float p4, int p5);
    bool init(BoomListView* p0, char const* p1, cocos2d::ccColor4B p2, float p3, float p4, int p5);
    BoomListView* m_listView;
};

#endif /* __GJLISTLAYER_H__ */