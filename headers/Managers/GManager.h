#ifndef __GMANAGER_H__
#define __GMANAGER_H__


#include "../includes.h"

class GManager: public cocos2d::CCNode {
public:
    TodoReturn getCompressedSaveString();
    TodoReturn getSaveString();
    TodoReturn load();
    void loadDataFromFile(std::string const& p0);
    void loadFromCompressedString(std::string& p0);
    void loadFromString(std::string& p0);
    TodoReturn saveData(DS_Dictionary* p0, std::string p1);
    void saveGMTo(std::string p0);
    TodoReturn tryLoadData(DS_Dictionary* p0, std::string const& p1);
    virtual bool init();
    virtual void setup();
    virtual void encodeDataTo(DS_Dictionary* p0);
    virtual void dataLoaded(DS_Dictionary* p0);
    virtual void firstLoad();
    std::string m_fileName;
    bool m_setup;
    bool m_saved;
    bool m_quickSave;
};

#endif /* __GMANAGER_H__ */