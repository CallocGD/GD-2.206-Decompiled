#ifndef __LISTCELL_H__
#define __LISTCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;

class ListCell: public TableViewCell {
public:
     ListCell(char const* p0, float p1, float p2);
    void loadFromObject(cocos2d::CCObject* p0, int p1, int p2, int p3);
    TodoReturn updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
};

#endif /* __LISTCELL_H__ */