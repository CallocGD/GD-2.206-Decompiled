#ifndef __INFOALERTBUTTON_H__
#define __INFOALERTBUTTON_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCMenuItemSpriteExtra;

class InfoAlertButton: public CCMenuItemSpriteExtra {
public:
    static InfoAlertButton* create(std::string p0, std::string p1, float p2);
    bool init(std::string p0, std::string p1, float p2);
    virtual void activate();
};

#endif /* __INFOALERTBUTTON_H__ */