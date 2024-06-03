#ifndef __FMODAUDIOENGINE_H__
#define __FMODAUDIOENGINE_H__


#include "../includes.h"

class FMODAudioEngine: public cocos2d::CCNode {
public:
    static FMODAudioEngine* sharedEngine();
    TodoReturn activateQueuedMusic(int p0);
    TodoReturn channelForChannelID(int p0);
    TodoReturn channelForUniqueID(int p0);
    TodoReturn channelIDForUniqueID(int p0);
    TodoReturn channelLinkSound(int p0, FMODSound* p1);
    TodoReturn channelStopped(FMOD::Channel* p0, bool p1);
    TodoReturn channelUnlinkSound(int p0);
    void clearAllAudio();
    TodoReturn countActiveEffects();
    TodoReturn countActiveMusic();
    TodoReturn createStream(std::string p0);
    void disableMetering();
    void enableMetering();
    TodoReturn fadeInBackgroundMusic(float p0);
    TodoReturn fadeInMusic(float p0, int p1);
    TodoReturn fadeOutMusic(float p0, int p1);
    TodoReturn getActiveMusic(int p0);
    TodoReturn getActiveMusicChannel(int p0);
    float getBackgroundMusicVolume();
    TodoReturn getChannelGroup(int p0, bool p1);
    TodoReturn getFMODStatus(int p0);
    float getMeteringValue();
    TodoReturn getMusicChannelID(int p0);
    TodoReturn getMusicLengthMS(int p0);
    TodoReturn getMusicTime(int p0);
    TodoReturn getMusicTimeMS(int p0);
    TodoReturn getNextChannelID();
    TodoReturn getTweenContainer(AudioTargetType p0);
    bool isChannelStopping(int p0);
    bool isEffectLoaded(std::string path);
    bool isMusicPlaying(std::string path, int p1);
    bool isMusicPlaying(int p0);
    bool isSoundReady(FMOD::Sound* sound);
    TodoReturn lengthForSound(std::string path);
    TodoReturn loadAndPlayMusic(std::string path, unsigned int p1, int p2);
    TodoReturn loadAudioState(FMODAudioState& p0);
    void loadMusic(std::string path, float speed, float p2, float volume, bool p4, int p5, int p6);
    void loadMusic(std::string path);
    TodoReturn pauseAllAudio();
    TodoReturn pauseAllEffects();
    void pauseAllMusic();
    TodoReturn pauseEffect(unsigned int p0);
    TodoReturn pauseMusic(int p0);
    TodoReturn pitchForIdx(int p0);
    void playEffect(std::string path, float speed, float p2, float volume);
    void playEffect(std::string path);
    void playEffectAdvanced(std::string path, float speed, float p2, float volume, float pitch, bool fastFourierTransform, bool reverb, int startMillis, int endMillis, int fadeIn, int fadeOut, bool loopEnabled, int p12, bool override, bool p14, int p15, int uniqueID, float minInterval, int sfxGroup);
    TodoReturn playEffectAsync(std::string path);
    void playMusic(std::string path, bool p1, float p2, int p3);
    void preloadEffect(std::string path);
    void preloadEffectAsync(std::string path);
    TodoReturn preloadMusic(std::string path, bool p1, int p2);
    TodoReturn printResult(FMOD_RESULT p0);
    TodoReturn queuedEffectFinishedLoading(std::string p0);
    TodoReturn queuePlayEffect(std::string p0, float p1, float p2, float p3, float p4, bool p5, bool p6, int p7, int p8, int p9, int p10, bool p11, int p12, bool p13, int p14, float p15, int p16);
    TodoReturn queueStartMusic(std::string p0, float p1, float p2, float p3, bool p4, int p5, int p6, int p7, int p8, int p9, bool p10, int p11, bool p12);
    TodoReturn registerChannel(FMOD::Channel* p0, int p1, int p2);
    void releaseRemovedSounds();
    TodoReturn resumeAllAudio();
    TodoReturn resumeAllEffects();
    TodoReturn resumeAllMusic();
    TodoReturn resumeAudio();
    TodoReturn resumeEffect(unsigned int p0);
    TodoReturn resumeMusic(int p0);
    TodoReturn reverbToString(FMODReverbPreset p0);
    TodoReturn saveAudioState(FMODAudioState& p0);
    void setBackgroundMusicVolume(float p0);
    void setChannelPitch(int p0, AudioTargetType p1, float p2);
    void setChannelVolume(int p0, AudioTargetType p1, float p2);
    void setChannelVolumeMod(int p0, AudioTargetType p1, float p2);
    void setEffectsVolume(float p0);
    void setMusicTimeMS(unsigned int p0, bool p1, int p2);
    TodoReturn setup();
    TodoReturn setupAudioEngine();
    void start();
    TodoReturn startMusic(int p0, int p1, int p2, int p3, bool p4, int p5);
    TodoReturn stop();
    void stopAllEffects();
    void stopAllMusic();
    TodoReturn stopAndGetFade(FMOD::Channel* p0);
    TodoReturn stopAndRemoveMusic(int p0);
    TodoReturn stopChannel(FMOD::Channel* p0, bool p1, float p2);
    TodoReturn stopChannel(int p0, AudioTargetType p1, bool p2, float p3);
    TodoReturn stopChannel(int p0);
    TodoReturn stopChannelTween(int p0, AudioTargetType p1, AudioModType p2);
    TodoReturn stopChannelTweens(int p0, AudioTargetType p1);
    TodoReturn stopMusic(int p0);
    TodoReturn stopMusicNotInSet(std::unordered_set<int, std::hash<int>, std::equal_to<int>, std::allocator<int> >& p0);
    TodoReturn storeEffect(FMOD::Sound* sound, std::string path);
    TodoReturn swapMusicIndex(int p0, int p1);
    TodoReturn testFunction(int p0);
    TodoReturn triggerQueuedMusic(FMODQueuedMusic p0);
    TodoReturn unloadAllEffects();
    TodoReturn unloadEffect(std::string path);
    TodoReturn unregisterChannel(int p0);
    void updateBackgroundFade();
    TodoReturn updateChannel(int p0, AudioTargetType p1, AudioModType p2, float p3, float p4);
    TodoReturn updateChannelTweens(float p0);
    void updateMetering();
    TodoReturn updateQueuedEffects();
    void updateQueuedMusic();
    TodoReturn updateReverb(FMODReverbPreset p0, bool p1);
    void updateTemporaryEffects();
    TodoReturn waitUntilSoundReady(FMOD::Sound* p0);
    virtual void update(float p0);
    /* PAD */

    float m_musicVolume;
    float m_sfxVolume;
    /* PAD */

    float m_pulse1;
    float m_pulse2;
    TodoReturn canItemBeUnlocked(int p0, UnlockType p1);
    float m_pulse3;
    int m_pulseCounter;
    bool m_metering;
    FMOD::Channel* m_backgroundMusicChannel;
    FMOD::System* m_system;
    FMOD::Sound* m_sound;
    FMOD::Channel* m_currentSoundChannel;
    FMOD::Channel* m_globalChannel;
    FMOD::DSP* m_DSP;
    FMOD_RESULT m_lastResult;
    int m_version;
    void* m_extraDriverData;
    int m_musicOffset;
};

#endif /* __FMODAUDIOENGINE_H__ */