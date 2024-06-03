#ifndef __SELECTSETTINGLAYER_H__
#define __SELECTSETTINGLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class SelectSettingLayer: public FLAlertLayer {
public:
    static SelectSettingLayer* create(SelectSettingType p0, int p1);
    TodoReturn frameForItem(SelectSettingType p0, int p1);
    TodoReturn frameForValue(SelectSettingType p0, int p1);
    TodoReturn getSelectedFrame();
    TodoReturn getSelectedValue();
    TodoReturn idxToValue(SelectSettingType p0, int p1);
    bool init(SelectSettingType p0, int p1);
    void onClose(cocos2d::CCObject* sender);
    void onSelect(cocos2d::CCObject* sender);
    TodoReturn valueToIdx(SelectSettingType p0, int p1);
    virtual void keyBackClicked();
    /* PAD */

    int m_settingID;
};

#endif /* __SELECTSETTINGLAYER_H__ */