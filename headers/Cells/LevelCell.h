#ifndef __LEVELCELL_H__
#define __LEVELCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;

class LevelCell: public TableViewCell {
public:
     LevelCell(char const* p0, float p1, float p2);
    static LevelCell* create(float p0, float p1);
    void loadCustomLevelCell();
    void loadFromLevel(GJGameLevel* p0);
    void loadLocalLevelCell();
    void onClick(cocos2d::CCObject* sender);
    void onToggle(cocos2d::CCObject* sender);
    void onViewProfile(cocos2d::CCObject* sender);
    void updateBGColor(int p0);
    TodoReturn updateCellMode(int p0);
    TodoReturn updateToggle();
    virtual bool init();
    virtual void draw();
    CCMenuItemSpriteExtra* m_button;
    GJGameLevel* m_level;
    bool m_cellDrawn;
    CCMenuItemToggler* m_toggler;
    cocos2d::CCPoint m_point;
    cocos2d::CCMenu* m_mainMenu;
    bool m_compactView;
    int m_cellMode;
};

#endif /* __LEVELCELL_H__ */