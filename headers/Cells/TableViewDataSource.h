#ifndef __TABLEVIEWDATASOURCE_H__
#define __TABLEVIEWDATASOURCE_H__


#include "../includes.h"

class TableViewDataSource {
public:
    virtual int numberOfRowsInSection(unsigned int p0, TableView* p1);
    virtual unsigned int numberOfSectionsInTableView(TableView* p0);
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2);
    virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1);
};

#endif /* __TABLEVIEWDATASOURCE_H__ */