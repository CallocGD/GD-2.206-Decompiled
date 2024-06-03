#ifndef __LOADINGLAYER_H__
#define __LOADINGLAYER_H__


#include "../includes.h"

class LoadingLayer: public cocos2d::CCLayer {
public:
    static LoadingLayer* create(bool p0);
    const char* getLoadingString();
    bool init(bool p0);
    void loadAssets();
    void loadingFinished();
    TodoReturn scene(bool p0);
    TodoReturn updateProgress(int p0);
    bool m_unknown;
    bool m_unknown2;
    int m_loadStep;
    cocos2d::CCLabelBMFont* m_caption;
    TextArea* m_textArea;
    cocos2d::CCSprite* m_sliderBar;
    float m_sliderGrooveXPos;
    float m_sliderGrooveHeight;
    bool m_fromRefresh;
};

#endif /* __LOADINGLAYER_H__ */