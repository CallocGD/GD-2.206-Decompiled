#ifndef __CCANIMATEFRAMECACHE_H__
#define __CCANIMATEFRAMECACHE_H__


#include "../includes.h"

class CCAnimateFrameCache: public cocos2d::CCObject {
public:
    static CCAnimateFrameCache* sharedSpriteFrameCache();
    TodoReturn addCustomSpriteFramesWithFile(char const* p0);
    TodoReturn addDict(cocos2d::CCDictionary* p0, char const* p1);
    TodoReturn addDict(DS_Dictionary* p0, char const* p1);
    TodoReturn addSpriteFramesWithFile(char const* p0);
    bool init();
    TodoReturn purgeSharedSpriteFrameCache();
    TodoReturn removeSpriteFrames();
    TodoReturn spriteFrameByName(char const* p0);
};

#endif /* __CCANIMATEFRAMECACHE_H__ */