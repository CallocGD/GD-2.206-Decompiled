#ifndef __OPTIONSCELL_H__
#define __OPTIONSCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;

class OptionsCell: public TableViewCell {
public:
     OptionsCell(char const* p0, float p1, float p2);
    void loadFromObject(OptionsObject* p0);
    void onToggleOption(cocos2d::CCObject* sender);
    TodoReturn updateBGColor(int p0);
};

#endif /* __OPTIONSCELL_H__ */