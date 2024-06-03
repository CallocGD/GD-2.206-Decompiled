#ifndef __GJMAPPACK_H__
#define __GJMAPPACK_H__


#include "../includes.h"

class GJMapPack: public cocos2d::CCNode {
public:
    static GJMapPack* create();
    static GJMapPack* create(cocos2d::CCDictionary* p0);
    int completedMaps();
    bool hasCompletedMapPack();
    TodoReturn parsePackColors(std::string p0, std::string p1);
    TodoReturn parsePackLevels(std::string p0);
    int totalMaps();
    virtual bool init();
    cocos2d::CCArray* m_levels;
    int m_packID;
    GJDifficulty m_difficulty;
    int m_stars;
    int m_coins;
    std::string m_packName;
    std::string m_levelStrings;
    cocos2d::ccColor3B m_textColour;
    cocos2d::ccColor3B m_barColour;
    int m_MId;
    bool m_isGauntlet;
};

#endif /* __GJMAPPACK_H__ */