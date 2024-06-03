#ifndef __FILESAVEMANAGER_H__
#define __FILESAVEMANAGER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GManager;

class FileSaveManager: public GManager {
public:
    static FileSaveManager* sharedState();
    TodoReturn getStoreData();
    TodoReturn loadDataFromFile(char const* p0);
    virtual bool init();
    virtual void firstLoad();
};

#endif /* __FILESAVEMANAGER_H__ */