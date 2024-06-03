#ifndef __CUSTOMMUSICCELL_H__
#define __CUSTOMMUSICCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CustomSongCell;

class CustomMusicCell: public CustomSongCell {
public:
     CustomMusicCell(char const* p0, float p1, float p2);
    void loadFromObject(SongInfoObject* p0);
    void updateBGColor(int p0);
};

#endif /* __CUSTOMMUSICCELL_H__ */