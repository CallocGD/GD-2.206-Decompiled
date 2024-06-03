#ifndef __SFXSEARCHRESULT_H__
#define __SFXSEARCHRESULT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class MusicSearchResult;

class SFXSearchResult: public MusicSearchResult {
public:
    static SFXSearchResult* create(int p0);
    TodoReturn getActiveFolder();
    TodoReturn getSelectedPage(int p0, int p1);
    bool init(int p0);
    void setActiveFolder(SFXFolderObject* p0);
    virtual TodoReturn updateObjects(AudioSortType p0);
};

#endif /* __SFXSEARCHRESULT_H__ */