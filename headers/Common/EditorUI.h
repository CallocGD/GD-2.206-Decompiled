#ifndef __EDITORUI_H__
#define __EDITORUI_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayerProtocol;
class ColorSelectDelegate;
class GJRotationControlDelegate;
class GJScaleControlDelegate;
class GJTransformControlDelegate;
class MusicDownloadDelegate;
class SetIDPopupDelegate;

class EditorUI: public cocos2d::CCLayer, public FLAlertLayerProtocol, public ColorSelectDelegate, public GJRotationControlDelegate, public GJScaleControlDelegate, public GJTransformControlDelegate, public MusicDownloadDelegate, public SetIDPopupDelegate {
public:
    static EditorUI* create(LevelEditorLayer* p0);
    static EditorUI* get();
    TodoReturn activateRotationControl(cocos2d::CCObject* p0);
    void activateScaleControl(cocos2d::CCObject* p0);
    TodoReturn activateTransformControl(cocos2d::CCObject* p0);
    TodoReturn addObjectsToSmartTemplate(GJSmartTemplate* p0, cocos2d::CCArray* p1);
    TodoReturn addSnapPosition(cocos2d::CCPoint p0);
    TodoReturn alignObjects(cocos2d::CCArray* p0, bool p1);
    TodoReturn applyOffset(GameObject* p0);
    TodoReturn applySpecialOffset(cocos2d::CCPoint p0, GameObject* p1, cocos2d::CCPoint p2);
    TodoReturn arrayContainsClass(cocos2d::CCArray* p0, int p1);
    TodoReturn assignNewGroups(bool p0);
    TodoReturn canAllowMultiActivate(GameObject* p0, cocos2d::CCArray* p1);
    TodoReturn canSelectObject(GameObject* p0);
    TodoReturn centerCameraOnObject(GameObject* p0);
    TodoReturn changeSelectedObjects(cocos2d::CCArray* p0, bool p1);
    TodoReturn checkDiffAfterTransformAnchor(cocos2d::CCPoint p0, cocos2d::CCArray* p1);
    TodoReturn checkLiveColorSelect();
    void clickOnPosition(cocos2d::CCPoint p0);
    TodoReturn closeLiveColorSelect();
    TodoReturn closeLiveHSVSelect();
    void colorSelectClosed(cocos2d::ccColor3B p0);
    void constrainGameLayerPosition();
    void constrainGameLayerPosition(float p0, float p1);
    TodoReturn convertKeyBasedOnNeighbors(int p0, int p1, cocos2d::CCPoint p2, cocos2d::CCArray* p3);
    TodoReturn convertToBaseKey(int p0);
    TodoReturn copyObjects(cocos2d::CCArray* p0, bool p1, bool p2);
    TodoReturn copyObjectsDetailed(cocos2d::CCArray* p0);
    cocos2d::CCArray* createCustomItems();
    TodoReturn createEdgeForObject(GameObject* p0, int p1);
    TodoReturn createExtraObject(int p0, cocos2d::CCPoint p1, GameObject* p2, cocos2d::CCArray* p3, int p4, int p5);
    TodoReturn createExtras(cocos2d::CCArray* p0);
    TodoReturn createExtrasForObject(int p0, GameObject* p1, cocos2d::CCArray* p2);
    TodoReturn createGlow();
    void createLoop();
    void createMoveMenu();
    TodoReturn createNewKeyframeAnim();
    TodoReturn createObject(int p0, cocos2d::CCPoint p1);
    TodoReturn createOutlines(cocos2d::CCArray* p0);
    TodoReturn createPrefab(GJSmartTemplate* p0, std::string p1, int p2);
    TodoReturn createRockBases(cocos2d::CCArray* p0);
    TodoReturn createRockEdges(cocos2d::CCArray* p0);
    TodoReturn createSmartObjectsFromTemplate(GJSmartTemplate* p0, cocos2d::CCArray* p1, bool p2, bool p3, bool p4, bool p5);
    TodoReturn createSmartObjectsFromType(int p0, cocos2d::CCArray* p1, bool p2, bool p3);
    UndoObject* createUndoObject(UndoCommand p0, bool p1);
    TodoReturn createUndoSelectObject(bool p0);
    TodoReturn deactivateRotationControl();
    TodoReturn deactivateScaleControl();
    TodoReturn deactivateTransformControl();
    void deleteObject(GameObject* p0, bool p1);
    TodoReturn deleteSmartBlocksFromObjects(cocos2d::CCArray* p0);
    TodoReturn deleteTypeFromObjects(int p0, cocos2d::CCArray* p1);
    void deselectAll();
    void deselectObject();
    void deselectObject(GameObject* p0);
    void deselectObjectsColor();
    TodoReturn deselectTargetPortals();
    TodoReturn disableButton(CreateMenuItem* p0);
    TodoReturn doCopyObjects(bool p0);
    TodoReturn doPasteInPlace(bool p0);
    TodoReturn doPasteObjects(bool p0);
    TodoReturn dynamicGroupUpdate(bool p0);
    TodoReturn edgeForObject(int p0, int p1);
    TodoReturn editButton2Usable();
    TodoReturn editButtonUsable();
    TodoReturn editColor();
    TodoReturn editColorButtonUsable();
    TodoReturn editGroup(cocos2d::CCObject* p0);
    TodoReturn editHSV();
    TodoReturn editObject(cocos2d::CCObject* p0);
    TodoReturn editObject2(cocos2d::CCObject* p0);
    TodoReturn editObject3(cocos2d::CCObject* p0);
    TodoReturn editObjectSpecial(int p0);
    TodoReturn editorLayerForArray(cocos2d::CCArray* p0, bool p1);
    TodoReturn enableButton(CreateMenuItem* p0);
    TodoReturn findAndSelectObject(int p0, bool p1);
    void findSnapObject(cocos2d::CCArray* p0, float p1);
    void findSnapObject(cocos2d::CCPoint p0, float p1);
    TodoReturn findTriggerTest();
    void flipObjectsX(cocos2d::CCArray* p0);
    void flipObjectsY(cocos2d::CCArray* p0);
    TodoReturn getButton(char const* p0, int p1, cocos2d::SEL_MenuHandler p2, cocos2d::CCMenu* p3);
    CreateMenuItem* getCreateBtn(int id, int bg);
    TodoReturn getCreateMenuItemButton(cocos2d::CCSprite* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);
    TodoReturn getCycledObject(cocos2d::CCArray* p0, bool p1);
    TodoReturn getEditColorTargets(ColorAction*& p0, ColorAction*& p1, EffectGameObject*& p2);
    cocos2d::CCPoint getGridSnappedPos(cocos2d::CCPoint p0);
    TodoReturn getGroupCenter(cocos2d::CCArray* p0, bool p1);
    TodoReturn getGroupInfo(GameObject* p0, cocos2d::CCArray* p1, int& p2, int& p3, int& p4);
    TodoReturn getLimitedPosition(cocos2d::CCPoint p0);
    TodoReturn getModeBtn(char const* p0, int p1);
    TodoReturn getNeighbor(int p0, cocos2d::CCPoint p1, GJSmartDirection p2, cocos2d::CCArray* p3);
    TodoReturn getRandomStartKey(int p0);
    TodoReturn getRelativeOffset(GameObject* p0);
    cocos2d::CCArray* getSelectedObjects();
    TodoReturn getSimpleButton(std::string p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2);
    TodoReturn getSmartNeighbor(SmartGameObject* p0, cocos2d::CCPoint p1, GJSmartDirection p2, cocos2d::CCArray* p3);
    TodoReturn getSmartObjectKey(int p0, GJSmartDirection p1);
    TodoReturn getSnapAngle(GameObject* p0, cocos2d::CCArray* p1);
    CCMenuItemSpriteExtra* getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);
    CCMenuItemSpriteExtra* getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);
    CCMenuItemSpriteExtra* getSpriteButton(cocos2d::CCSprite* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);
    TodoReturn getTouchPoint(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    TodoReturn getTransformState();
    TodoReturn getXMin(int p0);
    bool init(LevelEditorLayer* editorLayer);
    bool isLiveColorSelectTrigger(GameObject* p0);
    bool isSpecialSnapObject(int p0);
    TodoReturn liveEditColorUsable();
    TodoReturn menuItemFromObjectString(std::string p0, int p1);
    cocos2d::CCPoint moveForCommand(EditCommand command);
    void moveGamelayer(cocos2d::CCPoint p0);
    void moveObject(GameObject* p0, cocos2d::CCPoint p1);
    void moveObjectCall(cocos2d::CCObject* p0);
    void moveObjectCall(EditCommand p0);
    TodoReturn offsetForKey(int p0);
    TodoReturn onAssignNewGroupID();
    void onColorFilter(cocos2d::CCObject* sender);
    void onCopy(cocos2d::CCObject* sender);
    void onCopyState(cocos2d::CCObject* sender);
    bool onCreate();
    void onCreateButton(cocos2d::CCObject* sender);
    void onCreateObject(int p0);
    void onDelete(cocos2d::CCObject* sender);
    void onDeleteAll(cocos2d::CCObject* sender);
    void onDeleteCustomItem(cocos2d::CCObject* sender);
    void onDeleteInfo(cocos2d::CCObject* sender);
    void onDeleteSelected(cocos2d::CCObject* sender);
    void onDeleteSelectedType(cocos2d::CCObject* sender);
    void onDeleteStartPos(cocos2d::CCObject* sender);
    void onDeselectAll(cocos2d::CCObject* sender);
    void onDuplicate(cocos2d::CCObject* sender);
    void onEditColor(cocos2d::CCObject* sender);
    void onFindObject(cocos2d::CCObject* sender);
    void onGoToBaseLayer(cocos2d::CCObject* sender);
    void onGoToLayer(cocos2d::CCObject* sender);
    void onGroupDown(cocos2d::CCObject* sender);
    void onGroupIDFilter(cocos2d::CCObject* sender);
    void onGroupSticky(cocos2d::CCObject* sender);
    void onGroupUp(cocos2d::CCObject* sender);
    void onLockLayer(cocos2d::CCObject* sender);
    void onNewCustomItem(cocos2d::CCObject* sender);
    void onPaste(cocos2d::CCObject* sender);
    void onPasteColor(cocos2d::CCObject* sender);
    void onPasteInPlace(cocos2d::CCObject* sender);
    void onPasteState(cocos2d::CCObject* sender);
    void onPause(cocos2d::CCObject* sender);
    void onPlayback(cocos2d::CCObject* sender);
    void onPlaytest(cocos2d::CCObject* sender);
    void onResetSpecialFilter(cocos2d::CCObject* sender);
    void onSelectBuildTab(cocos2d::CCObject* sender);
    void onSettings(cocos2d::CCObject* sender);
    void onStopPlaytest(cocos2d::CCObject* sender);
    TodoReturn onTargetIDChange(int p0);
    void onToggleGuide(EffectGameObject* p0);
    TodoReturn onToggleSelectedOrder(EffectGameObject* p0);
    void onUngroupSticky(cocos2d::CCObject* sender);
    void onUpdateDeleteFilter(cocos2d::CCObject* sender);
    TodoReturn orderDownCustomItem(cocos2d::CCObject* p0);
    TodoReturn orderUpCustomItem(cocos2d::CCObject* p0);
    TodoReturn pasteObjects(std::string p0, bool p1);
    TodoReturn playCircleAnim(cocos2d::CCPoint p0, float p1, float p2);
    TodoReturn playerTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    TodoReturn playerTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    TodoReturn playtestStopped();
    TodoReturn positionIsInSnapped(cocos2d::CCPoint p0);
    TodoReturn positionWithoutOffset(GameObject* p0);
    TodoReturn processSelectObjects(cocos2d::CCArray* p0);
    TodoReturn processSmartObjectsFromType(int p0, cocos2d::CCArray* p1, cocos2d::CCArray* p2, cocos2d::CCArray* p3, cocos2d::CCArray* p4);
    void recreateButtonTabs();
    TodoReturn redoLastAction(cocos2d::CCObject* p0);
    void reloadCustomItems();
    TodoReturn removeOffset(GameObject* p0);
    TodoReturn replaceGroupID(GameObject* p0, int p1, int p2);
    TodoReturn repositionObjectsToCenter(cocos2d::CCArray* p0, cocos2d::CCPoint p1, bool p2);
    void resetObjectEditorValues(cocos2d::CCArray* p0);
    TodoReturn resetSelectedObjectsColor();
    void resetUI();
    void rotateObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);
    TodoReturn rotationforCommand(EditCommand p0);
    void scaleObjects(cocos2d::CCArray* p0, float p1, float p2, cocos2d::CCPoint p3, ObjectScaleType p4, bool p5);
    void selectAll();
    void selectAllWithDirection(bool p0);
    void selectBuildTab(int p0);
    void selectObject(GameObject* p0, bool p1);
    void selectObjects(cocos2d::CCArray* p0, bool p1);
    void selectObjectsInRect(cocos2d::CCRect p0);
    void setupCreateMenu();
    void setupDeleteMenu();
    void setupEditMenu();
    TodoReturn setupTransformControl();
    static bool shouldDeleteObject(GameObject* p0);
    TodoReturn shouldSnap(GameObject* p0);
    void showDeleteConfirmation();
    void showLiveColorSelectForMode(int p0);
    void showLiveColorSelectForModeSpecial(int p0);
    void showMaxBasicError();
    void showMaxCoinError();
    void showMaxError();
    void showUI(bool p0);
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    TodoReturn smartTypeForKey(int p0);
    cocos2d::CCSprite* spriteFromObjectString(std::string p0, bool p1, bool p2, int p3, cocos2d::CCArray* p4, cocos2d::CCArray* p5, GameObject* p6);
    TodoReturn toggleDuplicateButton();
    TodoReturn toggleEditObjectButton();
    TodoReturn toggleEnableRotate(cocos2d::CCObject* p0);
    TodoReturn toggleFreeMove(cocos2d::CCObject* p0);
    TodoReturn toggleLockUI(bool p0);
    void toggleMode(cocos2d::CCObject* p0);
    TodoReturn toggleObjectInfoLabel();
    TodoReturn toggleSnap(cocos2d::CCObject* p0);
    TodoReturn toggleSpecialEditButtons();
    TodoReturn toggleStickyControls(bool p0);
    TodoReturn toggleSwipe(cocos2d::CCObject* p0);
    void transformObject(GameObject* p0, EditCommand p1, bool p2);
    void transformObjectCall(cocos2d::CCObject* p0);
    void transformObjectCall(EditCommand p0);
    void transformObjects(cocos2d::CCArray* p0, cocos2d::CCPoint p1, float p2, float p3, float p4, float p5, float p6, float p7);
    TodoReturn transformObjectsActive();
    TodoReturn transformObjectsReset();
    TodoReturn triggerSwipeMode();
    TodoReturn tryUpdateTimeMarkers();
    TodoReturn undoLastAction(cocos2d::CCObject* p0);
    void updateButtons();
    TodoReturn updateCreateMenu(bool p0);
    TodoReturn updateDeleteButtons();
    TodoReturn updateDeleteMenu();
    TodoReturn updateEditButtonColor(int p0, cocos2d::ccColor3B p1);
    TodoReturn updateEditColorButton();
    TodoReturn updateEditMenu();
    void updateGridNodeSize();
    TodoReturn updateGridNodeSize(int p0);
    TodoReturn updateGroupIDBtn2();
    void updateGroupIDLabel();
    void updateObjectInfoLabel();
    TodoReturn updatePlaybackBtn();
    TodoReturn updateSlider();
    TodoReturn updateSpecialUIElements();
    void updateZoom(float p0);
    float valueFromXPos(float p0);
    float xPosFromValue(float p0);
    TodoReturn zoomGameLayer(bool p0);
    void zoomIn(cocos2d::CCObject* p0);
    void zoomOut(cocos2d::CCObject* p0);
    virtual void draw();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual TodoReturn getUI();
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void updateTransformControl();
    virtual void transformChangeBegin();
    virtual void transformChangeEnded();
    virtual TodoReturn getTransformNode();
    virtual void transformScaleXChanged(float p0);
    virtual void transformScaleYChanged(float p0);
    virtual void transformScaleXYChanged(float p0, float p1);
    virtual void transformSkewXChanged(float p0);
    virtual void transformSkewYChanged(float p0);
    virtual void transformRotationXChanged(float p0);
    virtual void transformRotationYChanged(float p0);
    virtual void transformRotationChanged(float p0);
    virtual void transformResetRotation();
    virtual void transformRestoreRotation();
    virtual void songStateChanged();
    virtual void colorSelectClosed(cocos2d::CCNode* p0);
    virtual void keyUp(cocos2d::enumKeyCodes p0);
    virtual void scrollWheel(float p0, float p1);
    virtual void angleChangeBegin();
    virtual void angleChangeEnded();
    virtual void angleChanged(float p0);
    virtual void updateScaleControl();
    virtual void anchorPointMoved(cocos2d::CCPoint p0);
    virtual void scaleChangeBegin();
    virtual void scaleChangeEnded();
    virtual void scaleXChanged(float p0, bool p1);
    virtual void scaleYChanged(float p0, bool p1);
    virtual void scaleXYChanged(float p0, float p1, bool p2);
    /* PAD */

    GJTransformState m_transformState;
    bool m_isPlayingMusic;
    EditButtonBar* m_buttonBar;
    /* PAD */

    cocos2d::CCArray* m_unk1cc;
    float m_gridSize;
    /* PAD */

    cocos2d::CCLabelBMFont* m_objectInfoLabel;
    GJRotationControl* m_rotationControl;
    cocos2d::CCPoint m_pivotPoint;
    /* PAD */

    GJScaleControl* m_scaleControl;
    GJTransformControl* m_transformControl;
    cocos2d::CCNode* m_unk220;
    cocos2d::CCNode* m_unk224;
    cocos2d::CCDictionary* m_editButtonDict;
    EditButtonBar* m_createButtonBar;
    EditButtonBar* m_editButtonBar;
    Slider* m_positionSlider;
    float m_unk238;
    float m_unk23c;
    float m_toolbarHeight;
    float m_unk244;
    bool m_updatedSpeedObjects;
    /* PAD */

    cocos2d::CCArray* m_unk258;
    /* PAD */

    cocos2d::CCArray* m_selectedObjects;
    cocos2d::CCMenu* m_deleteMenu;
    cocos2d::CCArray* m_unknownArray4;
    CCMenuItemSpriteExtra* m_deleteModeBtn;
    CCMenuItemSpriteExtra* m_buildModeBtn;
    CCMenuItemSpriteExtra* m_editModeBtn;
    CCMenuItemSpriteExtra* m_swipeBtn;
    CCMenuItemSpriteExtra* m_freeMoveBtn;
    CCMenuItemSpriteExtra* m_deselectBtn;
    CCMenuItemSpriteExtra* m_snapBtn;
    CCMenuItemSpriteExtra* m_rotateBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_playtestBtn;
    CCMenuItemSpriteExtra* m_playtestStopBtn;
    CCMenuItemSpriteExtra* m_trashBtn;
    CCMenuItemSpriteExtra* m_linkBtn;
    CCMenuItemSpriteExtra* m_unlinkBtn;
    CCMenuItemSpriteExtra* m_undoBtn;
    CCMenuItemSpriteExtra* m_redoBtn;
    CCMenuItemSpriteExtra* m_editObjectBtn;
    CCMenuItemSpriteExtra* m_editGroupBtn;
    CCMenuItemSpriteExtra* m_editHSVBtn;
    CCMenuItemSpriteExtra* m_editSpecialBtn;
    /* PAD */

    CCMenuItemSpriteExtra* m_copyPasteBtn;
    CCMenuItemSpriteExtra* m_copyBtn;
    CCMenuItemSpriteExtra* m_pasteBtn;
    CCMenuItemSpriteExtra* m_copyValuesBtn;
    CCMenuItemSpriteExtra* m_pasteStateBtn;
    CCMenuItemSpriteExtra* m_pasteColorBtn;
    CCMenuItemSpriteExtra* m_goToLayerBtn;
    cocos2d::CCArray* m_createButtonBars;
    cocos2d::CCMenu* m_tabsMenu;
    cocos2d::CCArray* m_tabsArray;
    cocos2d::CCSprite* m_idkSprite0;
    cocos2d::CCSprite* m_idkSprite1;
    CCMenuItemSpriteExtra* m_button27;
    CCMenuItemSpriteExtra* m_button28;
    CCMenuItemSpriteExtra* m_deleteFilterNone;
    CCMenuItemSpriteExtra* m_deleteFilterStatic;
    CCMenuItemSpriteExtra* m_deleteFilterDetails;
    CCMenuItemSpriteExtra* m_deleteFilterCustom;
    cocos2d::CCLabelBMFont* m_currentLayerLabel;
    CCMenuItemSpriteExtra* m_layerNextBtn;
    CCMenuItemSpriteExtra* m_layerPrevBtn;
    CCMenuItemSpriteExtra* m_goToBaseBtn;
    ButtonSprite* m_unk31c;
    ButtonSprite* m_unk320;
    int m_selectedCreateObjectID;
    /* PAD */

    cocos2d::CCArray* m_createButtonArray;
    cocos2d::CCArray* m_customObjectButtonArray;
    cocos2d::CCArray* m_unknownArray9;
    int m_selectedMode;
    LevelEditorLayer* m_editorLayer;
    cocos2d::CCPoint m_swipeStart;
    cocos2d::CCPoint m_swipeEnd;
    /* PAD */

    cocos2d::CCPoint m_lastTouchPoint;
    cocos2d::CCPoint m_cameraTest;
    cocos2d::CCPoint m_clickAtPosition;
    GameObject* m_selectedObject;
    GameObject* m_snapObject;
    void* m_unk538;
    void* m_unk540;
    int m_selectedTab;
    /* PAD */

    bool m_unk3b4;
    /* PAD */

};

#endif /* __EDITORUI_H__ */