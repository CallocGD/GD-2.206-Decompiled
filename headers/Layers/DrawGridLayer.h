#ifndef __DRAWGRIDLAYER_H__
#define __DRAWGRIDLAYER_H__


#include "../includes.h"

class DrawGridLayer: public cocos2d::CCLayer {
public:
    static DrawGridLayer* create(cocos2d::CCNode* p0, LevelEditorLayer* p1);
    void addAudioLineObject(AudioLineGuideGameObject* p0);
    TodoReturn addToEffects(EffectGameObject* p0);
    TodoReturn addToGuides(GameObject* p0);
    TodoReturn addToSpeedObjects(EffectGameObject* p0);
    TodoReturn getPortalMinMax(GameObject* p0);
    bool init(cocos2d::CCNode* p0, LevelEditorLayer* p1);
    void loadTimeMarkers(std::string p0);
    float posForTime(float p0);
    void postUpdate();
    TodoReturn removeAudioLineObject(AudioLineGuideGameObject* p0);
    TodoReturn removeFromEffects(EffectGameObject* p0);
    TodoReturn removeFromGuides(GameObject* p0);
    TodoReturn removeFromSpeedObjects(EffectGameObject* p0);
    TodoReturn sortSpeedObjects();
    float timeForPos(cocos2d::CCPoint p0, int p1, int p2, bool p3, bool p4, bool p5, int p6);
    TodoReturn updateMusicGuideTime(float p0);
    TodoReturn updateTimeMarkers();
    virtual void update(float p0);
    virtual void draw();
    /* PAD */

    void onHideLayer(cocos2d::CCObject* sender);
    LevelEditorLayer* m_editorLayer;
};

#endif /* __DRAWGRIDLAYER_H__ */