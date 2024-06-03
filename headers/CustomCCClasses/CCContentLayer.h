#ifndef __CCCONTENTLAYER_H__
#define __CCCONTENTLAYER_H__


#include "../includes.h"

class CCContentLayer: public cocos2d::CCLayerColor {
public:
     ~CCContentLayer();
    static CCContentLayer* create(cocos2d::ccColor4B const& p0, float p1, float p2);
    virtual void setPosition(cocos2d::CCPoint const& p0);
};

#endif /* __CCCONTENTLAYER_H__ */