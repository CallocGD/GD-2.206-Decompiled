#ifndef __GJPATHSPRITE_H__
#define __GJPATHSPRITE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCSpriteCOpacity;

class GJPathSprite: public CCSpriteCOpacity {
public:
    GJPathSprite(){
        m_pathNumber = 0;
    }
    static GJPathSprite* create(int pathNumber);
    void addRankLabel(int ID);
    void addShardSprite();
    void changeToLockedArt();
    bool init(int pathNumber);
    void updateState();
    int m_pathNumber;
};

#endif /* __GJPATHSPRITE_H__ */