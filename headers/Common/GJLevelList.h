#ifndef __GJLEVELLIST_H__
#define __GJLEVELLIST_H__


#include "../includes.h"

class GJLevelList: public cocos2d::CCNode {
public:
    static GJLevelList* create();
    static GJLevelList* create(cocos2d::CCDictionary* p0);
    TodoReturn addLevelToList(GJGameLevel* p0);
    TodoReturn completedLevels();
    TodoReturn createWithCoder(DS_Dictionary* p0);
    void dataLoaded(DS_Dictionary* p0);
    TodoReturn duplicateListLevels(GJLevelList* p0);
    TodoReturn frameForListDifficulty(int p0, DifficultyIconType p1);
    cocos2d::CCArray* getListLevelsArray(cocos2d::CCArray* p0);
    gd::string getUnpackedDescription();
    TodoReturn orderForLevel(int p0);
    TodoReturn parseListLevels(std::string p0);
    TodoReturn removeLevelFromList(int p0);
    TodoReturn reorderLevel(int p0, int p1);
    TodoReturn reorderLevelStep(int p0, bool p1);
    void showListInfo();
    TodoReturn totalLevels();
    TodoReturn updateLevelsString();
    virtual void encodeWithCoder(DS_Dictionary* p0);
    virtual bool canEncode();
    virtual bool init();
    std::vector<int> m_levels;
    int m_listID;
    int m_listVersion;
    int m_downloads;
    int m_likes;
    int m_difficulty;
    int m_accountID;
    int m_folder;
    int m_listRevision;
    int m_listOrder;
    int m_original;
    int m_diamonds;
    int m_levelsToClaim;
    bool m_isEditable;
    bool m_unlisted;
    bool m_friendsOnly;
    bool m_uploaded;
    bool m_favorite;
    bool m_featured;
    bool m_k100;
    std::string m_creatorName;
    std::string m_listName;
    std::string m_unkString;
    std::string m_levelsString;
    std::string m_listDesc;
    int m_uploadDate;
    int m_updateDate;
    cocos2d::CCDictionary* m_k97;
    int m_listType;
    int m_M_ID;
};

#endif /* __GJLEVELLIST_H__ */