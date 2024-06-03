#ifndef __GJUSERSCORE_H__
#define __GJUSERSCORE_H__


#include "../includes.h"

class GJUserScore: public cocos2d::CCNode {
public:
    static GJUserScore* create();
    static GJUserScore* create(cocos2d::CCDictionary* p0);
    bool isCurrentUser();
    TodoReturn mergeWithScore(GJUserScore* p0);
    virtual bool init();
    std::string m_userName;
    std::string m_userUDID;
    int m_scoreType;
    int m_userID;
    int m_accountID;
    int m_stars;
    int m_moons;
    int m_diamonds;
    int m_demons;
    int m_playerRank;
    int m_creatorPoints;
    int m_secretCoins;
    int m_userCoins;
    int m_iconID;
    int m_color1;
    int m_color2;
    int m_color3;
    int m_special;
    IconType m_iconType;
    int m_messageState;
    int m_friendStatus;
    int m_commentHistoryStatus;
    std::string m_youtubeURL;
    std::string m_twitterURL;
    std::string m_twitchURL;
    int m_playerCube;
    int m_playerShip;
    int m_playerBall;
    int m_playerUfo;
    int m_playerWave;
    int m_playerRobot;
    int m_playerSpider;
    int m_playerSwing;
    int m_playerJetpack;
    int m_playerStreak;
    bool m_glowEnabled;
    int m_playerExplosion;
    int m_modBadge;
    int m_globalRank;
    int m_friendReqStatus;
    int m_newMsgCount;
    int m_friendReqCount;
    int m_newFriendCount;
    bool m_newFriendRequest;
};

#endif /* __GJUSERSCORE_H__ */