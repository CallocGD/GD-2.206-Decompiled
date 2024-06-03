#ifndef __RATEDEMONLAYER_H__
#define __RATEDEMONLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class UploadPopupDelegate;
class UploadActionDelegate;

class RateDemonLayer: public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static RateDemonLayer* create(int p0);
    bool init(int p0);
    void onClose(cocos2d::CCObject* sender);
    void onRate(cocos2d::CCObject* sender);
    void selectRating(cocos2d::CCObject* p0);
    virtual void keyBackClicked();
    virtual void uploadActionFinished(int p0, int p1);
    virtual void uploadActionFailed(int p0, int p1);
    virtual void onClosePopup(UploadActionPopup* p0);
    /* PAD */

    int m_demonRate;
};

#endif /* __RATEDEMONLAYER_H__ */