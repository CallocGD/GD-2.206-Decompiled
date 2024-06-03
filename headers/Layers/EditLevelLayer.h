#ifndef __EDITLEVELLAYER_H__
#define __EDITLEVELLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TextInputDelegate;
class FLAlertLayerProtocol;
class UploadActionDelegate;
class UploadPopupDelegate;
class SetIDPopupDelegate;

class EditLevelLayer: public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public SetIDPopupDelegate {
public:
    virtual  ~EditLevelLayer();
    static EditLevelLayer* create(GJGameLevel* p0);
    TodoReturn closeTextInputs();
    void confirmClone(cocos2d::CCObject* p0);
    void confirmDelete(cocos2d::CCObject* p0);
    void confirmMoveToTop(cocos2d::CCObject* p0);
    bool init(GJGameLevel* p0);
    void onBack(cocos2d::CCObject* sender);
    void onClone();
    void onDelete();
    void onEdit(cocos2d::CCObject* sender);
    void onGuidelines(cocos2d::CCObject* sender);
    void onHelp(cocos2d::CCObject* sender);
    void onLevelInfo(cocos2d::CCObject* sender);
    void onLevelLeaderboard(cocos2d::CCObject* sender);
    void onLowDetailMode(cocos2d::CCObject* sender);
    void onMoveToTop();
    void onPlay(cocos2d::CCObject* sender);
    void onSetFolder(cocos2d::CCObject* sender);
    void onShare(cocos2d::CCObject* sender);
    void onTest(cocos2d::CCObject* sender);
    void onUpdateDescription(cocos2d::CCObject* sender);
    TodoReturn playStep2();
    TodoReturn playStep3();
    TodoReturn scene(GJGameLevel* p0);
    void setupLevelInfo();
    TodoReturn updateDescText(char const* p0);
    TodoReturn verifyLevelName();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    virtual void uploadActionFinished(int p0, int p1);
    virtual void uploadActionFailed(int p0, int p1);
    virtual void onClosePopup(UploadActionPopup* p0);
    cocos2d::CCMenu* m_buttonMenu;
    GJGameLevel* m_level;
    TextArea* m_descriptionInput;
    cocos2d::CCArray* m_someArray;
    cocos2d::CCLabelBMFont* m_folderLabel;
    bool m_unk;
    bool m_lowDetailModeTriggered;
    GJLevelType m_levelType;
};

#endif /* __EDITLEVELLAYER_H__ */