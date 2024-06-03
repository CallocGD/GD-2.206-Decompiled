#ifndef __FMODLEVELVISUALIZER_H__
#define __FMODLEVELVISUALIZER_H__


#include "../includes.h"

class FMODLevelVisualizer: public cocos2d::CCNode {
public:
    static FMODLevelVisualizer* create();
    void updateVisualizer(float p0, float p1, float p2);
    virtual bool init();
};

#endif /* __FMODLEVELVISUALIZER_H__ */