#ifndef __MUSICSEARCHRESULT_H__
#define __MUSICSEARCHRESULT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class OptionsObjectDelegate;

class MusicSearchResult: public cocos2d::CCObject, public OptionsObjectDelegate {
public:
    static MusicSearchResult* create(GJSongType p0);
    TodoReturn applyArtistFilters(cocos2d::CCArray* p0);
    TodoReturn applyTagFilters(cocos2d::CCArray* p0);
    TodoReturn createArtistFilterObjects();
    TodoReturn createTagFilterObjects();
    TodoReturn getFilesMatchingSearch(cocos2d::CCArray* p0, std::string p1);
    bool init(GJSongType p0);
    TodoReturn updateFutureCount(cocos2d::CCArray* p0, cocos2d::CCArray* p1);
    TodoReturn updateObjects();
    virtual TodoReturn updateObjects(AudioSortType p0);
    virtual TodoReturn stateChanged(OptionsObject* p0);
};

#endif /* __MUSICSEARCHRESULT_H__ */