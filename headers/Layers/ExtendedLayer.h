#ifndef __EXTENDEDLAYER_H__
#define __EXTENDEDLAYER_H__


#include "../includes.h"

class ExtendedLayer: public cocos2d::CCLayer {
public:
    static ExtendedLayer* create();
    virtual bool init();
    virtual void setPosition(cocos2d::CCPoint const& p0);
};

#endif /* __EXTENDEDLAYER_H__ */