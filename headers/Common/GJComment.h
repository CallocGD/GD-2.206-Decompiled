#ifndef __GJCOMMENT_H__
#define __GJCOMMENT_H__


#include "../includes.h"

class GJComment: public cocos2d::CCNode {
public:
    static GJComment* create();
    static GJComment* create(cocos2d::CCDictionary* p0);
    virtual bool init();
    std::string m_commentString;
    std::string m_userName;
    int m_commentID;
    int m_userID;
    int m_likeCount;
    int m_levelID;
    bool m_isSpam;
    int m_accountID;
    std::string m_uploadDate;
    bool m_commentDeleted;
    int m_percentage;
    int m_modBadge;
    cocos2d::ccColor3B m_color;
    bool m_hasLevelID;
    bool m_unkMultiplayerBool;
    GJUserScore* m_userScore;
};

#endif /* __GJCOMMENT_H__ */