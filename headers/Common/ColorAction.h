#ifndef __COLORACTION_H__
#define __COLORACTION_H__


#include "../includes.h"

class ColorAction: public cocos2d::CCObject {
public:
    static ColorAction* create();
    static ColorAction* create(cocos2d::ccColor3B p0, bool p1, int p2);
    static ColorAction* create(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2, double p3, bool p4, int p5, float p6, float p7);
    static ColorAction* create(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2, double p3, bool p4);
    TodoReturn getCopy();
    bool init(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2, double p3, bool p4, int p5, float p6, float p7);
    bool isInUse();
    void loadFromState(CAState& p0);
    TodoReturn resetAction();
    void saveToState(CAState& p0);
    TodoReturn setupFromMap(std::map<std::string, std::string>& p0);
    void setupFromString(std::string p0);
    TodoReturn step(float p0);
    TodoReturn updateCustomColor(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1);
    bool m_stepFinished;
    bool m_property19;
    cocos2d::ccColor3B m_color;
    float m_currentOpacity;
    float m_deltaTime;
    cocos2d::ccColor3B m_fromColor;
    cocos2d::ccColor3B m_toColor;
    float m_duration;
    bool m_blending;
    int m_playerColor;
    int m_colorID;
    float m_fromOpacity;
    float m_toOpacity;
    cocos2d::ccHSVValue m_copyHSV;
    int m_copyID;
    bool m_unknown;
    bool m_copyOpacity;
    ColorActionSprite* m_colorSprite;
};

#endif /* __COLORACTION_H__ */