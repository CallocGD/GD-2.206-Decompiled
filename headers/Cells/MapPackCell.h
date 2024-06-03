#ifndef __MAPPACKCELL_H__
#define __MAPPACKCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;

class MapPackCell: public TableViewCell {
public:
     MapPackCell(char const* p0, float p1, float p2);
    void loadFromMapPack(GJMapPack* p0);
    void onClaimReward(cocos2d::CCObject* sender);
    void onClick(cocos2d::CCObject* sender);
    TodoReturn playCompleteEffect();
    TodoReturn reloadCell();
    TodoReturn updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
};

#endif /* __MAPPACKCELL_H__ */