#ifndef __BOOMLISTVIEW_H__
#define __BOOMLISTVIEW_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewDelegate;
class TableViewDataSource;

class BoomListView: public cocos2d::CCLayer, public TableViewDelegate, public TableViewDataSource {
public:
     BoomListView();
     ~BoomListView();
    static BoomListView* create(cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5, float p6);
    TodoReturn addObjectToList(cocos2d::CCNode* p0);
    bool init(cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5, float p6);
    TodoReturn lockList(bool p0);
    bool init(cocos2d::CCArray* entries, BoomListType type, float width, float height);
    virtual void draw();
    virtual void setupList(float p0);
    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);
    virtual float cellHeightForRowAtIndexPath(CCIndexPath& p0, TableView* p1);
    virtual void didSelectRowAtIndexPath(CCIndexPath& p0, TableView* p1);
    virtual int numberOfRowsInSection(unsigned p0, TableView* p1);
    virtual unsigned int numberOfSectionsInTableView(TableView* p0);
    virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1);
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2);
    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);
    virtual TableViewCell* getListCell(char const* p0);
    virtual void loadCell(TableViewCell* p0, int p1);
    TableView* m_tableView;
    cocos2d::CCArray* m_entries;
    BoomListType m_type;
    float m_height;
    float m_width;
    float m_itemSeparation;
    int m_currentPage;
    bool m_locked;
};

#endif /* __BOOMLISTVIEW_H__ */