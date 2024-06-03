#ifndef __BITMAPFONTCACHE_H__
#define __BITMAPFONTCACHE_H__


#include "../includes.h"

class BitmapFontCache: public cocos2d::CCObject {
public:
    static BitmapFontCache* sharedFontCache();
    TodoReturn fontWithConfigFile(char const* p0, float p1);
    bool init();
    TodoReturn purgeSharedFontCache();
};

#endif /* __BITMAPFONTCACHE_H__ */