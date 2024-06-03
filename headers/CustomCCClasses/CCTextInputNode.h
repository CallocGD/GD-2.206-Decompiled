#ifndef __CCTEXTINPUTNODE_H__
#define __CCTEXTINPUTNODE_H__


#include "../includes.h"

class CCTextInputNode: public cocos2d::CCLayer, public cocos2d::CCIMEDelegate, public cocos2d::CCTextFieldDelegate {
public:
     CCTextInputNode();
    static CCTextInputNode* create(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5);
    static CCTextInputNode* create(float width, float height, char const* placeholder, char const* fontPath);
    static CCTextInputNode* create(float width, float height, char const* placeholder, int fontSize, char const* fontPath);
    void setDelegate(TextInputDelegate* delegate);
    void setMaxLabelScale(float v);
    void setMaxLabelWidth(float v);
    void setMaxLabelLength(int v);
    void setLabelPlaceholderScale(float v);
    void setLabelPlaceholderColor(cocos2d::ccColor3B color);
    void setAllowedChars(std::string filter);
    cocos2d::CCLabelBMFont* getPlaceholderLabel();
    void addTextArea(TextArea* p0);
    TodoReturn forceOffset();
    gd::string getString();
    bool init(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5);
    void refreshLabel();
    void setLabelNormalColor(cocos2d::ccColor3B color);
    void setString(std::string p0);
    void updateBlinkLabel();
    void updateBlinkLabelToChar(int p0);
    void updateCursorPosition(cocos2d::CCPoint p0, cocos2d::CCRect p1);
    void updateDefaultFontValues(std::string p0);
    void updateLabel(std::string p0);
    virtual void visit();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    virtual void textChanged();
    virtual void onClickTrackNode(bool p0);
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& p0);
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& p0);
    virtual bool onTextFieldInsertText(cocos2d::CCTextFieldTTF* pSender, char const* text, int nLen, cocos2d::enumKeyCodes keyCodes);
    virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* tField);
    virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* tField);
    bool m_numberInput;
    std::string m_caption;
    int m_unknown1;
    bool m_selected;
    bool m_unknown2;
    float m_fontValue1;
    float m_fontValue2;
    bool m_isChatFont;
    std::string m_allowedChars;
    float m_maxLabelWidth;
    float m_maxLabelScale;
    float m_placeholderScale;
    cocos2d::ccColor3B m_placeholderColor;
    cocos2d::ccColor3B m_textColor;
    cocos2d::CCLabelBMFont* m_cursor;
    cocos2d::CCTextFieldTTF* m_textField;
    TextInputDelegate* m_delegate;
    int m_maxLabelLength;
    cocos2d::CCLabelBMFont* m_placeholderLabel;
    bool m_filterSwearWords;
    bool m_usePasswordChar;
    bool m_forceOffset;
    TextArea* m_textArea;
    /* PAD */

};

#endif /* __CCTEXTINPUTNODE_H__ */