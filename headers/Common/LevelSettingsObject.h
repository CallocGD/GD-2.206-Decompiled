#ifndef __LEVELSETTINGSOBJECT_H__
#define __LEVELSETTINGSOBJECT_H__


#include "../includes.h"

class LevelSettingsObject: public cocos2d::CCNode {
public:
    static LevelSettingsObject* create();
    gd::string getSaveString();
    static LevelSettingsObject* objectFromDict(cocos2d::CCDictionary* p0);
    static LevelSettingsObject* objectFromString(std::string const& str);
    TodoReturn setupColorsFromLegacyMode(cocos2d::CCDictionary* p0);
    TodoReturn shouldUseYSection();
    virtual bool init();
    GJEffectManager* m_effectManager;
    int m_startMode;
    Speed m_startSpeed;
    bool m_startMini;
    bool m_startDual;
    bool m_mirrorMode;
    bool m_rotateGameplay;
    bool m_twoPlayerMode;
    bool m_platformerMode;
    float m_songOffset;
    bool m_fadeIn;
    bool m_fadeOut;
    int m_backgroundIndex;
    int m_groundIndex;
    int m_fontIndex;
    int m_middleGroundIndex;
    bool m_startsWithStartPos;
    bool m_isFlipped;
    bool m_reverseGameplay;
    bool m_disableStartPos;
    int m_targetOrder;
    int m_targetChannel;
    GJGameLevel* m_level;
    std::string m_guidelineString;
    int m_defaultSongID;
    int m_colorPage;
    int m_groundLineIndex;
    bool m_propertykA23;
    bool m_propertykA24;
    bool m_noTimePenalty;
    int m_propertykA44;
    bool m_resetCamera;
    int m_spawnGroup;
    bool m_allowMultiRotation;
    bool m_enablePlayerSqueeze;
    bool m_fixGravityBug;
    bool m_fixNegativeScale;
    bool m_fixRobotJump;
    bool m_dynamicLevelHeight;
    bool m_sortGroups;
    bool m_fixRadiusCollision;
    bool m_enable22Changes;
    bool m_allowStaticRotate;
    bool m_reverseSync;
};

#endif /* __LEVELSETTINGSOBJECT_H__ */