#ifndef __AUDIOASSETSBROWSER_H__
#define __AUDIOASSETSBROWSER_H__


#include "../includes.h"

class AudioAssetsBrowser {
public:
    static AudioAssetsBrowser* create(std::vector<int>& p0, std::vector<int>& p1);
    bool init(std::vector<int>& p0, std::vector<int>& p1);
    void onClose(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onPage(cocos2d::CCObject* sender);
    TodoReturn setupList();
    TodoReturn trySetupAudioBrowser();
    TodoReturn updatePageLabel();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual TodoReturn musicActionFinished(GJMusicAction p0);
    virtual TodoReturn musicActionFailed(GJMusicAction p0);
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
    virtual TodoReturn getSelectedCellIdx();
    virtual TodoReturn getCellDelegateType();
};

#endif /* __AUDIOASSETSBROWSER_H__ */