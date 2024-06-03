#ifndef __SLIDER_H__
#define __SLIDER_H__


#include "../includes.h"

class Slider: public cocos2d::CCLayer {
public:
    static Slider* create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, char const* p4, char const* p5, float p6);
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler);
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, float idk);
    TodoReturn disableSlider();
    TodoReturn disableTouch();
    TodoReturn enableSlider();
    TodoReturn getLiveDragging();
    SliderThumb* getThumb();
    float getValue();
    TodoReturn hideGroove(bool p0);
    bool init(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, char const* p4, char const* p5, float p6);
    void setBarVisibility(bool p0);
    void setLiveDragging(bool p0);
    void setMaxOffset(float p0);
    void setRotated(bool p0);
    void setValue(float val);
    TodoReturn sliderBegan();
    TodoReturn sliderEnded();
    void updateBar();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    SliderTouchLogic* m_touchLogic;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_groove;
    float m_width;
    float m_height;
    void* m_unknown;
    void* m_unknown2;
};

#endif /* __SLIDER_H__ */