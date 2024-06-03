#ifndef __GJLOCALLEVELSCORECELL_H__
#define __GJLOCALLEVELSCORECELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;

class GJLocalLevelScoreCell: public TableViewCell {
public:
     GJLocalLevelScoreCell(char const* p0, float p1, float p2);
    void loadFromScore(GJLocalScore* p0);
    void updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
};

#endif /* __GJLOCALLEVELSCORECELL_H__ */