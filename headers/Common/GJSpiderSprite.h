#ifndef __GJSPIDERSPRITE_H__
#define __GJSPIDERSPRITE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJRobotSprite;

class GJSpiderSprite: public GJRobotSprite {
public:
    static GJSpiderSprite* create(int p0);
    bool init(int p0);
};

#endif /* __GJSPIDERSPRITE_H__ */