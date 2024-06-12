#ifndef __TEXTSTYLESECTION_H__
#define __TEXTSTYLESECTION_H__


#include "../includes.h"

class TextStyleSection: public cocos2d::CCObject {
public:
    static TextStyleSection* create(int start, int end, TextStyleType style);
    static TextStyleSection* createColoredSection(cocos2d::ccColor3B color,int start,int end);
    static TextStyleSection* createDelaySection(int start, float delay);
    static TextStyleSection* createInstantSection(int start,int end, float instant);
    static TextStyleSection* createShakeSection(int start, int end, int shakeX, int shakeY);
    bool init(int start, int end, TextStyleType style);
    TextStyleType m_styleType;	
    int	m_start;
    int	m_end;
    cocos2d::ccColor3B m_color;
    float m_instant;
    float m_delay;
    int	m_shakeX;	
    int	m_shakeY;
};


#endif /* __TEXTSTYLESECTION_H__ */