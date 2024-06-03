#ifndef __CUSTOMSONGCELL_H__
#define __CUSTOMSONGCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;
class CustomSongDelegate;

class CustomSongCell: public TableViewCell, public CustomSongDelegate {
public:
     CustomSongCell(char const* p0, float p1, float p2);
    void loadFromObject(SongInfoObject* p0);
    void onDelete(cocos2d::CCObject* sender);
    TodoReturn shouldReload();
    void updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
    virtual TodoReturn songIDChanged(int p0);
    virtual TodoReturn getActiveSongID();
    virtual TodoReturn getSongFileName();
    virtual TodoReturn getLevelSettings();
    SongInfoObject* m_songInfoObject;
    bool m_unkBool;
};

#endif /* __CUSTOMSONGCELL_H__ */