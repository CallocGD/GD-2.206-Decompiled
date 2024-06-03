#ifndef __GJSEARCHOBJECT_H__
#define __GJSEARCHOBJECT_H__


#include "../includes.h"

class GJSearchObject: public cocos2d::CCNode {
public:
    static GJSearchObject* create(SearchType searchType, std::string searchQuery, std::string difficulty, std::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);
    static GJSearchObject* create(SearchType searchType, std::string searchQuery);
    static GJSearchObject* create(SearchType searchType);
    static GJSearchObject* createFromKey(char const* key);
    char const* getKey();
    char const* getNextPageKey();
    GJSearchObject* getNextPageObject();
    GJSearchObject* getPageObject(int page);
    GJSearchObject* getPrevPageObject();
    char const* getSearchKey(SearchType searchType, std::string searchQuery, std::string difficulty, std::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);
    bool init(SearchType searchType, std::string searchQuery, std::string difficulty, std::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);
    bool isLevelSearchObject();
    SearchType m_searchType;
    std::string m_searchQuery;
    std::string m_difficulty;
    std::string m_length;
    int m_page;
    bool m_starFilter;
    bool m_noStarFilter;
    int m_total;
    bool m_uncompletedFilter;
    bool m_completedFilter;
    bool m_featuredFilter;
    bool m_originalFilter;
    bool m_twoPlayerFilter;
    bool m_coinsFilter;
    bool m_epicFilter;
    bool m_legendaryFilter;
    bool m_mythicFilter;
    GJDifficulty m_demonFilter;
    int m_folder;
    int m_songID;
    bool m_customSongFilter;
    bool m_songFilter;
    bool m_searchIsOverlay;
    int m_searchMode;
};

#endif /* __GJSEARCHOBJECT_H__ */