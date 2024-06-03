#ifndef __MUSICARTISTOBJECT_H__
#define __MUSICARTISTOBJECT_H__


#include "../includes.h"

class MusicArtistObject: public cocos2d::CCObject {
public:
    static MusicArtistObject* create(int p0, std::string p1, std::string p2, std::string p3);
    bool init(int p0, std::string p1, std::string p2, std::string p3);
};

#endif /* __MUSICARTISTOBJECT_H__ */