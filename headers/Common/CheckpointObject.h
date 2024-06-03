#ifndef __CHECKPOINTOBJECT_H__
#define __CHECKPOINTOBJECT_H__


#include "../includes.h"

class CheckpointObject: public cocos2d::CCNode {
public:
    static CheckpointObject* create();
    TodoReturn getObject();
    void setObject(GameObject* p0);
    virtual bool init();
    GJGameState m_gameState;
    GJShaderState m_shaderState;
    FMODAudioState m_audioState;
    GameObject* m_physicalCheckpointObject;
    PlayerCheckpoint* m_player1Checkpoint;
    PlayerCheckpoint* m_player2Checkpoint;
    int m_unkInt1;
    int m_unkInt2;
    int m_unkInt3;
    short m_unkShort1;
    /* PAD */

    int m_unkInt4;
    int m_unkInt5;
    std::vector<DynamicSaveObject> m_vectorDynamicSaveObjects;
    std::vector<ActiveSaveObject1> m_vectorActiveSaveObjects1;
    std::vector<ActiveSaveObject2> m_vectorActiveSaveObjects2;
    EffectManagerState m_effectManagerState;
    cocos2d::CCArray* m_gradientTriggerObjectArray;
    bool m_unkBool1;
    /* PAD */

    std::unordered_map<int,SequenceTriggerState> m_sequenceTriggerStateUnorderedMap;
    int m_unkGetsCopiedFromGameState;
};

#endif /* __CHECKPOINTOBJECT_H__ */