#ifndef __UPLOADACTIONPOPUP_H__
#define __UPLOADACTIONPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class UploadActionPopup: public FLAlertLayer {
public:
    static UploadActionPopup* create(UploadPopupDelegate* delegate, std::string str);
    void closePopup();
    bool init(UploadPopupDelegate* delegate, std::string str);
    void onClose(cocos2d::CCObject* sender);
    void showFailMessage(std::string message);
    void showSuccessMessage(std::string message);
    virtual void keyBackClicked();
    UploadPopupDelegate * m_delegate;
    TextArea * m_textArea;
    LoadingCircle * m_loadingCircle;
    CCMenuItemSpriteExtra * m_menuItemSpriteExtra;
    bool m_succeeded;
};

#endif /* __UPLOADACTIONPOPUP_H__ */