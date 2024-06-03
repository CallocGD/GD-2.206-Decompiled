#ifndef __CCSPRITEPART_H__
#define __CCSPRITEPART_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCSpritePlus;

class CCSpritePart: public CCSpritePlus {
public:
    static CCSpritePart* create(cocos2d::CCTexture2D* p0);
    TodoReturn createWithSpriteFrameName(char const* p0);
    TodoReturn frameChanged(std::string p0);
    TodoReturn getBeingUsed();
    TodoReturn hideInactive();
    TodoReturn markAsNotBeingUsed();
    TodoReturn resetTextureRect();
    void setBeingUsed(bool p0);
    TodoReturn updateDisplayFrame(std::string p0);
    virtual void setVisible(bool p0);
};

#endif /* __CCSPRITEPART_H__ */