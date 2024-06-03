#ifndef __SETGROUPIDLAYER_H__
#define __SETGROUPIDLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;

class SetGroupIDLayer: public FLAlertLayer, public TextInputDelegate {
public:
    static SetGroupIDLayer* create(GameObject* p0, cocos2d::CCArray* p1);
    TodoReturn addGroupID(int p0);
    void callRemoveFromGroup(float p0);
    TodoReturn createTextInput(cocos2d::CCPoint p0, int p1, int p2, std::string p3, float p4, int p5);
    TodoReturn determineStartValues();
    bool init(GameObject* obj, cocos2d::CCArray* objs);
    void onAddGroup(cocos2d::CCObject* sender);
    void onAddGroupParent(cocos2d::CCObject* sender);
    void onAnim(cocos2d::CCObject* sender);
    TodoReturn onArrow(int p0, int p1);
    void onArrowLeft(cocos2d::CCObject* sender);
    void onArrowRight(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onCopy(cocos2d::CCObject* sender);
    void onExtra(cocos2d::CCObject* sender);
    void onExtra2(cocos2d::CCObject* sender);
    void onNextFreeEditorLayer1(cocos2d::CCObject* sender);
    void onNextFreeEditorLayer2(cocos2d::CCObject* sender);
    void onNextFreeOrderChannel(cocos2d::CCObject* sender);
    void onNextGroupID1(cocos2d::CCObject* sender);
    void onPaste(cocos2d::CCObject* sender);
    void onRemoveFromGroup(cocos2d::CCObject* sender);
    void onSmoothEase(cocos2d::CCObject* sender);
    void onToggleGuide(cocos2d::CCObject* sender);
    void onToggleSelectedOrder(cocos2d::CCObject* sender);
    void onZLayer(cocos2d::CCObject* sender);
    void onZLayerShift(cocos2d::CCObject* sender);
    TodoReturn removeGroupID(int p0);
    TodoReturn updateEditorLabel();
    TodoReturn updateEditorLabel2();
    TodoReturn updateEditorLayerID();
    TodoReturn updateEditorLayerID2();
    TodoReturn updateEditorOrder();
    TodoReturn updateEditorOrderLabel();
    TodoReturn updateGroupIDButtons();
    void updateGroupIDLabel();
    TodoReturn updateOrderChannel();
    TodoReturn updateOrderChannelLabel();
    TodoReturn updateZLayerButtons();
    TodoReturn updateZOrder();
    TodoReturn updateZOrderLabel();
    virtual void keyBackClicked();
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_array0;
    cocos2d::CCArray* m_groupIDObjects;
    CCTextInputNode* m_editorLayerInput;
    CCTextInputNode* m_editorLayer2Input;
    CCTextInputNode* m_zOrderInput;
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_orderInput;
    CCTextInputNode* m_channelInput;
    bool m_showChannelOrder;
    int m_channelValue;
    bool m_channelUpdated;
    int m_groupIDValue;
    int m_editorLayerValue;
    int m_editorLayer2Value;
    int m_zOrderValue;
    ZLayer m_zLayerValue;
    int m_orderValue;
    bool m_channelOrderEdited;
    bool m_editorLayerEdited;
    bool m_removeGroupsLock;
    int m_groupToRemove;
    bool m_addedGroup;
    bool m_unkBool0;
    bool m_hasTargetObjects;
};

#endif /* __SETGROUPIDLAYER_H__ */