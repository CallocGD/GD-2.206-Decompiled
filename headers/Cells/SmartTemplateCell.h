#ifndef __SMARTTEMPLATECELL_H__
#define __SMARTTEMPLATECELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;

class SmartTemplateCell: public TableViewCell {
public:
     SmartTemplateCell(char const* p0, float p1, float p2);
    void loadFromObject(GJSmartTemplate* p0);
    void onClick(cocos2d::CCObject* sender);
    void updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
};

#endif /* __SMARTTEMPLATECELL_H__ */