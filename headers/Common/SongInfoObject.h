#ifndef __SONGINFOOBJECT_H__
#define __SONGINFOOBJECT_H__


#include "../includes.h"

class SongInfoObject: public cocos2d::CCNode {
public:
    static SongInfoObject* create(cocos2d::CCDictionary* p0);
    static SongInfoObject* create(int songID, std::string songName, std::string artistName, int artistID, float filesize, std::string youtubeVideo, std::string youtubeChannel, std::string url, int priority, std::string unk1, bool unk2, int unk3, int unk4);
    static SongInfoObject* create(int p0);
    TodoReturn addTags(std::string p0);
    TodoReturn containsTag(int p0);
    TodoReturn createWithCoder(DS_Dictionary* p0);
    TodoReturn getArtistNames(int p0);
    TodoReturn getTagsString(bool p0);
    bool init(int songID, std::string songName, std::string artistName, int artistID, float filesize, std::string youtubeVideo, std::string youtubeChannel, std::string url, int priority, std::string unk1, bool unk2, int unk3, int unk4);
    virtual void encodeWithCoder(DS_Dictionary* p0);
    virtual bool canEncode();
    int m_songID;
    std::string m_songName;
    std::string m_artistName;
    std::string m_youtubeVideo;
    std::string m_youtubeChannel;
    std::string m_songUrl;
    std::string m_artistID;
    float m_fileSize;
    bool m_isUnkownSong;
    int m_priority;
};

#endif /* __SONGINFOOBJECT_H__ */