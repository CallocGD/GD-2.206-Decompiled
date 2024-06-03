#ifndef __GRAPHICSRELOADLAYER_H__
#define __GRAPHICSRELOADLAYER_H__


#include "../includes.h"

class GraphicsReloadLayer: public cocos2d::CCLayer {
public:
    static GraphicsReloadLayer* create(cocos2d::TextureQuality p0, cocos2d::CCSize p1, bool p2, bool p3);
    bool init(cocos2d::TextureQuality p0, cocos2d::CCSize p1, bool p2, bool p3);
    TodoReturn performReload();
    TodoReturn scene(cocos2d::TextureQuality p0, cocos2d::CCSize p1, bool p2, bool p3);
};

#endif /* __GRAPHICSRELOADLAYER_H__ */