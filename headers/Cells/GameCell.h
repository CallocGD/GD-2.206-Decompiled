#ifndef __GAMECELL_H__
#define __GAMECELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;

class GameCell: public TableViewCell {
public:
     GameCell(char const* p0, float p1, float p2);
    void loadFromString(std::string p0);
    void onTouch(cocos2d::CCObject* sender);
    void updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
};

#endif /* __GAMECELL_H__ */