#ifndef __SECRETNUMBERLAYER_H__
#define __SECRETNUMBERLAYER_H__


#include "../includes.h"

class SecretNumberLayer: public cocos2d::CCLayer {
public:
    static SecretNumberLayer* create();
    TodoReturn playNumberEffect(int p0);
    virtual bool init();
};

#endif /* __SECRETNUMBERLAYER_H__ */