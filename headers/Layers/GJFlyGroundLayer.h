#ifndef __GJFLYGROUNDLAYER_H__
#define __GJFLYGROUNDLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJGroundLayer;

class GJFlyGroundLayer: public GJGroundLayer {
public:
    static GJFlyGroundLayer* create();
    virtual bool init();
};

#endif /* __GJFLYGROUNDLAYER_H__ */