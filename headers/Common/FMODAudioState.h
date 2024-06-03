#ifndef __FMODAUDIOSTATE_H__
#define __FMODAUDIOSTATE_H__


#include "../includes.h"

class FMODAudioState {
public:
    float m_unkFloat1;
    float m_unkFloat2;
    std::map<std::pair<int,int>,FMODSoundTween> m_unkMapPairIntIntFMODSoundTween1;
    std::map<std::pair<int,int>,FMODSoundTween> m_unkMapPairIntIntFMODSoundTween2;
    std::map<std::pair<int,int>,FMODSoundTween> m_unkMapPairIntIntFMODSoundTween3;
    std::unordered_map<int,float> m_unkMapIntFloat1;
    std::unordered_map<int,float> m_unkMapIntFloat2;
    std::unordered_map<int,float> m_unkMapIntFloat3;
    std::unordered_map<int,float> m_unkMapIntFloat4;
    std::unordered_map<int,float> m_unkMapIntFloat5;
    std::unordered_map<int,float> m_unkMapIntFloat6;
    std::unordered_map<int,float> m_unkMapIntFloat7;
    std::unordered_map<int,float> m_unkMapIntFloat8;
    std::unordered_map<int,float> m_unkMapIntFloat9;
    std::unordered_map<int,float> m_unkMapIntFloat10;
    std::unordered_map<int,FMODQueuedMusic> m_unkMapIntFMODQueuedMusic1;
    std::unordered_map<int,FMODQueuedMusic> m_unkMapIntFMODQueuedMusic2;
    std::unordered_map<int,FMODSoundState_padded> m_unkMapIntFMODSoundState;
    int m_unkInt1;
    int m_unkInt2;
};

#endif /* __FMODAUDIOSTATE_H__ */