#ifndef __LEVELLISTCELL_H__
#define __LEVELLISTCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;

class LevelListCell: public TableViewCell {
public:
     LevelListCell(char const* p0, float p1, float p2);
    static LevelListCell* create(float p0, float p1);
    void loadFromList(GJLevelList* p0);
    void onClick(cocos2d::CCObject* sender);
    void onListInfo(cocos2d::CCObject* sender);
    void onViewProfile(cocos2d::CCObject* sender);
    TodoReturn updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
    GJLevelList* m_levelList;
    bool m_addingLevel;
};

#endif /* __LEVELLISTCELL_H__ */