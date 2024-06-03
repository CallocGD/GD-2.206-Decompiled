#ifndef __LOCALLEVELMANAGER_H__
#define __LOCALLEVELMANAGER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GManager;

class LocalLevelManager: public GManager {
public:
    static LocalLevelManager* sharedState();
    cocos2d::CCDictionary* getAllLevelsInDict();
    TodoReturn getAllLevelsWithName(std::string p0);
    TodoReturn getCreatedLevels(int p0);
    TodoReturn getCreatedLists(int p0);
    TodoReturn getLevelsInNameGroups();
    gd::string getMainLevelString(int p0);
    TodoReturn markLevelsAsUnmodified();
    TodoReturn moveLevelToTop(GJGameLevel* p0);
    TodoReturn reorderLevels();
    TodoReturn tryLoadMainLevelString(int p0);
    TodoReturn updateLevelOrder();
    TodoReturn updateLevelRevision();
    virtual bool init();
    virtual void encodeDataTo(DS_Dictionary* p0);
    virtual void dataLoaded(DS_Dictionary* p0);
    virtual void firstLoad();
    cocos2d::CCArray* m_localLevels;
    cocos2d::CCArray* m_localLists;
    std::map<int, std::string> m_mainLevels;
};

#endif /* __LOCALLEVELMANAGER_H__ */