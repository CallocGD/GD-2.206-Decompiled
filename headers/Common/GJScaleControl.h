#ifndef __GJSCALECONTROL_H__
#define __GJSCALECONTROL_H__


#include "../includes.h"

class GJScaleControl: public cocos2d::CCLayer {
public:
    static GJScaleControl* create();
    TodoReturn finishTouch();
    TodoReturn loadValues(GameObject* p0, cocos2d::CCArray* p1, std::unordered_map<int, GameObjectEditorState>& p2);
    TodoReturn scaleFromValue(float p0);
    TodoReturn skewFromValue(float p0);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn updateLabelX(float p0);
    TodoReturn updateLabelXY(float p0);
    TodoReturn updateLabelY(float p0);
    TodoReturn valueFromScale(float p0);
    TodoReturn valueFromSkew(float p0);
    virtual bool init();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    Slider* m_sliderX;
    Slider* m_sliderY;
    Slider* m_sliderXY;
    float m_touchX;
    float m_valueX;
    float m_valueY;
};

#endif /* __GJSCALECONTROL_H__ */