#ifndef __CCSPRITEPART_H__
#define __CCSPRITEPART_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCSpritePlus;

class CCSpritePart: public CCSpritePlus {
public:
    static CCSpritePart* create(cocos2d::CCTexture2D* texture);
    static CCSpritePart* createWithSpriteFrameName(char const* frameName);
    void frameChanged(std::string frame);
    bool getBeingUsed();
    void hideInactive();
    void markAsNotBeingUsed();
    void resetTextureRect();
    void setBeingUsed(bool used);
    void updateDisplayFrame(std::string frame);
    virtual void setVisible(bool visible);
    
    bool m_isBeingUsed;
    std::string m_spriteFrameName;
    SpritePartDelegate* m_delegate;
};

#endif /* __CCSPRITEPART_H__ */
