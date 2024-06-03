#ifndef __GJSMARTBLOCKPREVIEWSPRITE_H__
#define __GJSMARTBLOCKPREVIEWSPRITE_H__


#include "../includes.h"

class GJSmartBlockPreviewSprite: public cocos2d::CCNode {
public:
    static GJSmartBlockPreviewSprite* create();
    virtual bool init();
    virtual void visit();
};

#endif /* __GJSMARTBLOCKPREVIEWSPRITE_H__ */