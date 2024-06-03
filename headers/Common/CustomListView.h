#ifndef __CUSTOMLISTVIEW_H__
#define __CUSTOMLISTVIEW_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class BoomListView;

class CustomListView: public BoomListView {
public:
     ~CustomListView();
    static CustomListView* create(cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5, float p6);
    static CustomListView* create(cocos2d::CCArray* entries, BoomListType type, float width, float height);
    TodoReturn getCellHeight(BoomListType p0);
    TodoReturn reloadAll();
    virtual void setupList(float p0);
    virtual TableViewCell* getListCell(char const* p0);
    virtual void loadCell(TableViewCell* p0, int p1);
    int m_unknown;
};

#endif /* __CUSTOMLISTVIEW_H__ */