#ifndef __SPRITEDESCRIPTION_H__
#define __SPRITEDESCRIPTION_H__


#include "../includes.h"

class SpriteDescription: public cocos2d::CCObject {
public:
    TodoReturn createDescription(cocos2d::CCDictionary* p0);
    TodoReturn createDescription(DS_Dictionary* p0);
    TodoReturn initDescription(cocos2d::CCDictionary* p0);
    TodoReturn initDescription(DS_Dictionary* p0);
};

#endif /* __SPRITEDESCRIPTION_H__ */