#ifndef __GJGRADIENTLAYER_H__
#define __GJGRADIENTLAYER_H__


#include "../includes.h"

class GJGradientLayer: public cocos2d::CCLayerGradient {
public:
    static GJGradientLayer* create();
    virtual bool init();
};

#endif /* __GJGRADIENTLAYER_H__ */