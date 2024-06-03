#ifndef __TABLEVIEWCELL_H__
#define __TABLEVIEWCELL_H__


#include "../includes.h"

class TableViewCell: public cocos2d::CCLayer {
public:
     TableViewCell(char const* p0, float p1, float p2);
    TodoReturn updateVisibility();
    bool m_unknown;
    TableView* m_tableView;
    CCIndexPath m_indexPath;
    void* m_unknown2;
    void* m_unknown3;
    int m_unknownThing;
    std::string m_unknownString;
    float m_width;
    float m_height;
    cocos2d::CCLayerColor* m_backgroundLayer;
    cocos2d::CCLayer* m_mainLayer;
    BoomListType m_listType;
};

#endif /* __TABLEVIEWCELL_H__ */