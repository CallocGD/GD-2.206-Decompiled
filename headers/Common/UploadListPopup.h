#ifndef __UPLOADLISTPOPUP_H__
#define __UPLOADLISTPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class ListUploadDelegate;

class UploadListPopup: public FLAlertLayer, public ListUploadDelegate {
public:
    static UploadListPopup* create(GJLevelList* p0);
    bool init(GJLevelList* p0);
    void onBack(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onReturnToList(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
    virtual void show();
    virtual void listUploadFinished(GJLevelList* p0);
    virtual void listUploadFailed(GJLevelList* p0, int p1);
};

#endif /* __UPLOADLISTPOPUP_H__ */