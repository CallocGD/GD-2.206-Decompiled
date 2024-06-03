#ifndef __CUSTOMSFXCELL_H__
#define __CUSTOMSFXCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;
class CustomSFXDelegate;

class CustomSFXCell: public TableViewCell, public CustomSFXDelegate {
public:
     CustomSFXCell(char const* p0, float p1, float p2);
    void loadFromObject(SFXInfoObject* p0);
    TodoReturn shouldReload();
    void updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
    virtual void sfxObjectSelected(SFXInfoObject* p0);
    virtual TodoReturn getActiveSFXID();
};

#endif /* __CUSTOMSFXCELL_H__ */