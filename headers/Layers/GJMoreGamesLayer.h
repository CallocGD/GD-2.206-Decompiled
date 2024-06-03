#ifndef __GJMOREGAMESLAYER_H__
#define __GJMOREGAMESLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJDropDownLayer;

class GJMoreGamesLayer: public GJDropDownLayer {
public:
    static GJMoreGamesLayer* create();
    TodoReturn getMoreGamesList();
    virtual void customSetup();
};

#endif /* __GJMOREGAMESLAYER_H__ */