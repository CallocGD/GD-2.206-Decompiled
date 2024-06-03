
#include "includes.h"



/* Unknown Return: FMODAudioEngine::activateQueuedMusic(int p0){}; */


/* Unknown Return: FMODAudioEngine::canItemBeUnlocked(int p0, UnlockType p1){}; */


/* Unknown Return: FMODAudioEngine::channelForChannelID(int p0){}; */


/* Unknown Return: FMODAudioEngine::channelForUniqueID(int p0){}; */


/* Unknown Return: FMODAudioEngine::channelIDForUniqueID(int p0){}; */


/* Unknown Return: FMODAudioEngine::channelLinkSound(int p0, FMODSound* p1){}; */


/* Unknown Return: FMODAudioEngine::channelStopped(FMOD::Channel* p0, bool p1){}; */


/* Unknown Return: FMODAudioEngine::channelUnlinkSound(int p0){}; */

void FMODAudioEngine::clearAllAudio()
{
    return;
}



/* Unknown Return: FMODAudioEngine::countActiveEffects(){}; */


/* Unknown Return: FMODAudioEngine::countActiveMusic(){}; */


/* Unknown Return: FMODAudioEngine::createStream(std::string p0){}; */

void FMODAudioEngine::disableMetering()
{
    return;
}


void FMODAudioEngine::enableMetering()
{
    return;
}



/* Unknown Return: FMODAudioEngine::fadeInBackgroundMusic(float p0){}; */


/* Unknown Return: FMODAudioEngine::fadeInMusic(float p0, int p1){}; */


/* Unknown Return: FMODAudioEngine::fadeOutMusic(float p0, int p1){}; */


/* Unknown Return: FMODAudioEngine::getActiveMusic(int p0){}; */


/* Unknown Return: FMODAudioEngine::getActiveMusicChannel(int p0){}; */

float FMODAudioEngine::getBackgroundMusicVolume()
{
    return;
}



/* Unknown Return: FMODAudioEngine::getChannelGroup(int p0, bool p1){}; */


/* Unknown Return: FMODAudioEngine::getFMODStatus(int p0){}; */

float FMODAudioEngine::getMeteringValue()
{
    return;
}



/* Unknown Return: FMODAudioEngine::getMusicChannelID(int p0){}; */


/* Unknown Return: FMODAudioEngine::getMusicLengthMS(int p0){}; */


/* Unknown Return: FMODAudioEngine::getMusicTime(int p0){}; */


/* Unknown Return: FMODAudioEngine::getMusicTimeMS(int p0){}; */


/* Unknown Return: FMODAudioEngine::getNextChannelID(){}; */


/* Unknown Return: FMODAudioEngine::getTweenContainer(AudioTargetType p0){}; */

bool FMODAudioEngine::isChannelStopping(int p0)
{
    return;
}


bool FMODAudioEngine::isEffectLoaded(std::string path)
{
    return;
}


bool FMODAudioEngine::isMusicPlaying(std::string path, int p1)
{
    return;
}


bool FMODAudioEngine::isMusicPlaying(int p0)
{
    return;
}


bool FMODAudioEngine::isSoundReady(FMOD::Sound* sound)
{
    return;
}



/* Unknown Return: FMODAudioEngine::lengthForSound(std::string path){}; */


/* Unknown Return: FMODAudioEngine::loadAndPlayMusic(std::string path, unsigned int p1, int p2){}; */


/* Unknown Return: FMODAudioEngine::loadAudioState(FMODAudioState& p0){}; */

void FMODAudioEngine::loadMusic(std::string path, float speed, float p2, float volume, bool p4, int p5, int p6)
{
    return;
}


void FMODAudioEngine::loadMusic(std::string path)
{
    return;
}



/* Unknown Return: FMODAudioEngine::pauseAllAudio(){}; */


/* Unknown Return: FMODAudioEngine::pauseAllEffects(){}; */

void FMODAudioEngine::pauseAllMusic()
{
    return;
}



/* Unknown Return: FMODAudioEngine::pauseEffect(unsigned int p0){}; */


/* Unknown Return: FMODAudioEngine::pauseMusic(int p0){}; */


/* Unknown Return: FMODAudioEngine::pitchForIdx(int p0){}; */

void FMODAudioEngine::playEffect(std::string path, float speed, float p2, float volume)
{
    return;
}


void FMODAudioEngine::playEffect(std::string path)
{
    return;
}


void FMODAudioEngine::playEffectAdvanced(std::string path, float speed, float p2, float volume, float pitch, bool fastFourierTransform, bool reverb, int startMillis, int endMillis, int fadeIn, int fadeOut, bool loopEnabled, int p12, bool override, bool p14, int p15, int uniqueID, float minInterval, int sfxGroup)
{
    return;
}



/* Unknown Return: FMODAudioEngine::playEffectAsync(std::string path){}; */

void FMODAudioEngine::playMusic(std::string path, bool p1, float p2, int p3)
{
    return;
}


void FMODAudioEngine::preloadEffect(std::string path)
{
    return;
}


void FMODAudioEngine::preloadEffectAsync(std::string path)
{
    return;
}



/* Unknown Return: FMODAudioEngine::preloadMusic(std::string path, bool p1, int p2){}; */


/* Unknown Return: FMODAudioEngine::printResult(FMOD_RESULT p0){}; */


/* Unknown Return: FMODAudioEngine::queuePlayEffect(std::string p0, float p1, float p2, float p3, float p4, bool p5, bool p6, int p7, int p8, int p9, int p10, bool p11, int p12, bool p13, int p14, float p15, int p16){}; */


/* Unknown Return: FMODAudioEngine::queueStartMusic(std::string p0, float p1, float p2, float p3, bool p4, int p5, int p6, int p7, int p8, int p9, bool p10, int p11, bool p12){}; */


/* Unknown Return: FMODAudioEngine::queuedEffectFinishedLoading(std::string p0){}; */


/* Unknown Return: FMODAudioEngine::registerChannel(FMOD::Channel* p0, int p1, int p2){}; */

void FMODAudioEngine::releaseRemovedSounds()
{
    return;
}



/* Unknown Return: FMODAudioEngine::resumeAllAudio(){}; */


/* Unknown Return: FMODAudioEngine::resumeAllEffects(){}; */


/* Unknown Return: FMODAudioEngine::resumeAllMusic(){}; */


/* Unknown Return: FMODAudioEngine::resumeAudio(){}; */


/* Unknown Return: FMODAudioEngine::resumeEffect(unsigned int p0){}; */


/* Unknown Return: FMODAudioEngine::resumeMusic(int p0){}; */


/* Unknown Return: FMODAudioEngine::reverbToString(FMODReverbPreset p0){}; */


/* Unknown Return: FMODAudioEngine::saveAudioState(FMODAudioState& p0){}; */

void FMODAudioEngine::setBackgroundMusicVolume(float p0)
{
    return;
}


void FMODAudioEngine::setChannelPitch(int p0, AudioTargetType p1, float p2)
{
    return;
}


void FMODAudioEngine::setChannelVolume(int p0, AudioTargetType p1, float p2)
{
    return;
}


void FMODAudioEngine::setChannelVolumeMod(int p0, AudioTargetType p1, float p2)
{
    return;
}


void FMODAudioEngine::setEffectsVolume(float p0)
{
    return;
}


void FMODAudioEngine::setMusicTimeMS(unsigned int p0, bool p1, int p2)
{
    return;
}



/* Unknown Return: FMODAudioEngine::setup(){}; */


/* Unknown Return: FMODAudioEngine::setupAudioEngine(){}; */

FMODAudioEngine* FMODAudioEngine::sharedEngine()
{
    return;
}


void FMODAudioEngine::start()
{
    return;
}



/* Unknown Return: FMODAudioEngine::startMusic(int p0, int p1, int p2, int p3, bool p4, int p5){}; */


/* Unknown Return: FMODAudioEngine::stop(){}; */

void FMODAudioEngine::stopAllEffects()
{
    return;
}


void FMODAudioEngine::stopAllMusic()
{
    return;
}



/* Unknown Return: FMODAudioEngine::stopAndGetFade(FMOD::Channel* p0){}; */


/* Unknown Return: FMODAudioEngine::stopAndRemoveMusic(int p0){}; */


/* Unknown Return: FMODAudioEngine::stopChannel(FMOD::Channel* p0, bool p1, float p2){}; */


/* Unknown Return: FMODAudioEngine::stopChannel(int p0, AudioTargetType p1, bool p2, float p3){}; */


/* Unknown Return: FMODAudioEngine::stopChannel(int p0){}; */


/* Unknown Return: FMODAudioEngine::stopChannelTween(int p0, AudioTargetType p1, AudioModType p2){}; */


/* Unknown Return: FMODAudioEngine::stopChannelTweens(int p0, AudioTargetType p1){}; */


/* Unknown Return: FMODAudioEngine::stopMusic(int p0){}; */


/* Unknown Return: FMODAudioEngine::stopMusicNotInSet(std::unordered_set<int, std::hash<int>, std::equal_to<int>, std::allocator<int> >& p0){}; */


/* Unknown Return: FMODAudioEngine::storeEffect(FMOD::Sound* sound, std::string path){}; */


/* Unknown Return: FMODAudioEngine::swapMusicIndex(int p0, int p1){}; */


/* Unknown Return: FMODAudioEngine::testFunction(int p0){}; */


/* Unknown Return: FMODAudioEngine::triggerQueuedMusic(FMODQueuedMusic p0){}; */


/* Unknown Return: FMODAudioEngine::unloadAllEffects(){}; */


/* Unknown Return: FMODAudioEngine::unloadEffect(std::string path){}; */


/* Unknown Return: FMODAudioEngine::unregisterChannel(int p0){}; */

void FMODAudioEngine::update(float p0)
{
    return;
}


void FMODAudioEngine::updateBackgroundFade()
{
    return;
}



/* Unknown Return: FMODAudioEngine::updateChannel(int p0, AudioTargetType p1, AudioModType p2, float p3, float p4){}; */


/* Unknown Return: FMODAudioEngine::updateChannelTweens(float p0){}; */

void FMODAudioEngine::updateMetering()
{
    return;
}



/* Unknown Return: FMODAudioEngine::updateQueuedEffects(){}; */

void FMODAudioEngine::updateQueuedMusic()
{
    return;
}



/* Unknown Return: FMODAudioEngine::updateReverb(FMODReverbPreset p0, bool p1){}; */

void FMODAudioEngine::updateTemporaryEffects()
{
    return;
}



/* Unknown Return: FMODAudioEngine::waitUntilSoundReady(FMOD::Sound* p0){}; */
