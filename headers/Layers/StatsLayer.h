#ifndef __STATSLAYER_H__
#define __STATSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJDropDownLayer;

class StatsLayer: public GJDropDownLayer {
public:
    static StatsLayer* create();
    virtual void customSetup();
};

#endif /* __STATSLAYER_H__ */