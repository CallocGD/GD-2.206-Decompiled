#ifndef __SFXFOLDEROBJECT_H__
#define __SFXFOLDEROBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SFXInfoObject;

class SFXFolderObject: public SFXInfoObject {
public:
    static SFXFolderObject* create(int p0, std::string p1, int p2);
    bool init(int p0, std::string p1, int p2);
};

#endif /* __SFXFOLDEROBJECT_H__ */