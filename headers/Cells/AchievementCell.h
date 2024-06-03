#ifndef __ACHIEVEMENTCELL_H__
#define __ACHIEVEMENTCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;

class AchievementCell: public TableViewCell {
public:
     AchievementCell(char const* p0, float p1, float p2);
    void loadFromDict(cocos2d::CCDictionary* p0);
    void updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
};

#endif /* __ACHIEVEMENTCELL_H__ */