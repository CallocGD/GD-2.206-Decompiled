#ifndef __SONGCELL_H__
#define __SONGCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;

class SongCell: public TableViewCell {
public:
     SongCell(char const* p0, float p1, float p2);
    void loadFromObject(SongObject* p0);
    void onClick(cocos2d::CCObject* sender);
    TodoReturn updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
};

#endif /* __SONGCELL_H__ */