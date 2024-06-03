#ifndef __GJPATHSPRITE_H__
#define __GJPATHSPRITE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCSpriteCOpacity;

class GJPathSprite: public CCSpriteCOpacity {
public:
    static GJPathSprite* create(int p0);
    TodoReturn addRankLabel(int p0);
    TodoReturn addShardSprite();
    TodoReturn changeToLockedArt();
    bool init(int p0);
    TodoReturn updateState();
    int m_pathNumber;
};

#endif /* __GJPATHSPRITE_H__ */