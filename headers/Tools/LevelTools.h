#ifndef __LEVELTOOLS_H__
#define __LEVELTOOLS_H__


#include "../includes.h"

class LevelTools {
public:
    static int artistForAudio(int p0);
    static gd::string base64DecodeString(std::string p0);
    static gd::string base64EncodeString(std::string p0);
    static cocos2d::CCDictionary* createStarPackDict();
    static gd::string fbURLForArtist(int p0);
    static int getAudioBPM(int p0);
    static gd::string getAudioFileName(int p0);
    static gd::string getAudioString(int p0);
    static gd::string getAudioTitle(int p0);
    static TodoReturn getLastGameplayReversed();
    static TodoReturn getLastGameplayRotated();
    static TodoReturn getLastTimewarp();
    static GJGameLevel* getLevel(int p0, bool p1);
    static TodoReturn getLevelList();
    static SongInfoObject* getSongObject(int p0);
    static TodoReturn moveTriggerObjectsToArray(cocos2d::CCArray* p0, cocos2d::CCDictionary* p1, int p2);
    static gd::string nameForArtist(int p0);
    static gd::string ngURLForArtist(int p0);
    static TodoReturn offsetBPMForTrack(int p0);
    static float posForTime(float p0, cocos2d::CCArray* p1, int p2, bool p3, int& p4);
    static float posForTimeInternal(float p0, cocos2d::CCArray* p1, int p2, bool p3, bool p4, bool p5, int& p6, int p7);
    static TodoReturn sortChannelOrderObjects(cocos2d::CCArray* p0, cocos2d::CCDictionary* p1, bool p2);
    static TodoReturn sortSpeedObjects(cocos2d::CCArray* p0, GJBaseGameLayer* p1);
    static float timeForPos(cocos2d::CCPoint p0, cocos2d::CCArray* p1, int p2, int p3, int p4, bool p5, bool p6, bool p7, bool p8, int p9);
    static TodoReturn toggleDebugLogging(bool p0);
    static gd::string urlForAudio(int p0);
    static TodoReturn valueForSpeedMod(int p0);
    static bool verifyLevelIntegrity(std::string p0, int p1);
    static gd::string ytURLForArtist(int p0);
};

#endif /* __LEVELTOOLS_H__ */