#ifndef __GJCOMMENTLISTLAYER_H__
#define __GJCOMMENTLISTLAYER_H__


#include "../includes.h"

class GJCommentListLayer: public cocos2d::CCLayerColor {
public:
    static GJCommentListLayer* create(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder);
    bool init(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder);
    BoomListView* m_list;
};

#endif /* __GJCOMMENTLISTLAYER_H__ */