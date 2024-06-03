#ifndef __SONGSLAYER_H__
#define __SONGSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJDropDownLayer;

class SongsLayer: public GJDropDownLayer {
public:
    static SongsLayer* create();
    virtual void customSetup();
};

#endif /* __SONGSLAYER_H__ */