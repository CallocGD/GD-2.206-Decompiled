#ifndef __ARTISTCELL_H__
#define __ARTISTCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;

class ArtistCell: public TableViewCell {
public:
     ArtistCell(char const* p0, float p1, float p2);
    void loadFromObject(SongInfoObject* p0);
    void onNewgrounds(cocos2d::CCObject* sender);
    void onYouTube(cocos2d::CCObject* sender);
    void updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
};

#endif /* __ARTISTCELL_H__ */