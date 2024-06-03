#ifndef __CCCIRCLEALERT_H__
#define __CCCIRCLEALERT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCCircleWave;

class CCCircleAlert: public CCCircleWave {
public:
    static CCCircleAlert* create(float p0, float p1, float p2);
    bool init(float p0, float p1, float p2);
};

#endif /* __CCCIRCLEALERT_H__ */