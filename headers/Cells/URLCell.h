#ifndef __URLCELL_H__
#define __URLCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;

class URLCell: public TableViewCell {
public:
     URLCell(char const* p0, float p1, float p2);
    void loadFromObject(CCURLObject* p0);
    void onURL(cocos2d::CCObject* sender);
    TodoReturn updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
};

#endif /* __URLCELL_H__ */