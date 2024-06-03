#ifndef __STATSCELL_H__
#define __STATSCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;

class StatsCell: public TableViewCell {
public:
     StatsCell(char const* p0, float p1, float p2);
    TodoReturn getTitleFromKey(char const* p0);
    void loadFromObject(StatsObject* p0);
    void updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
};

#endif /* __STATSCELL_H__ */