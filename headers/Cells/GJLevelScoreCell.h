#ifndef __GJLEVELSCORECELL_H__
#define __GJLEVELSCORECELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;

class GJLevelScoreCell: public TableViewCell {
public:
     GJLevelScoreCell(char const* p0, float p1, float p2);
    void loadFromScore(GJUserScore* p0);
    void onViewProfile(cocos2d::CCObject* sender);
    void updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
};

#endif /* __GJLEVELSCORECELL_H__ */