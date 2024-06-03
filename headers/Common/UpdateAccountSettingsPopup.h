#ifndef __UPDATEACCOUNTSETTINGSPOPUP_H__
#define __UPDATEACCOUNTSETTINGSPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class GJAccountSettingsDelegate;

class UpdateAccountSettingsPopup: public FLAlertLayer, public GJAccountSettingsDelegate {
public:
    static UpdateAccountSettingsPopup* create(GJAccountSettingsLayer* p0, int p1, int p2, int p3, std::string p4, std::string p5, std::string p6);
    bool init(GJAccountSettingsLayer* p0, int p1, int p2, int p3, std::string p4, std::string p5, std::string p6);
    void onClose(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
    virtual TodoReturn updateSettingsFinished();
    virtual TodoReturn updateSettingsFailed();
};

#endif /* __UPDATEACCOUNTSETTINGSPOPUP_H__ */