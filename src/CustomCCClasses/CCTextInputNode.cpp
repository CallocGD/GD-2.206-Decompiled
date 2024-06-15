
#include "includes.h"



void CCTextInputNode::addTextArea(TextArea* p0)
{
    return;
}


bool CCTextInputNode::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1)
{
    return;
}


void CCTextInputNode::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1)
{
    return;
}


void CCTextInputNode::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1)
{
    return;
}


void CCTextInputNode::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1)
{
    return;
}


bool CCTextInputNode::init(float width, float height, const char *caption, const char *FieldfontName, int fontSize, const char *LabelfontName)
{
    if (!cocos2d::CCLayer::init()) return false;
    setTouchEnabled(true);
    m_filterSwearWords = false;
    m_caption = caption;
    /* I guess fontSize as an integer works?? */
    m_textField  = cocos2d::CCTextFieldTTF::textFieldWithPlaceHolder(caption, FieldfontName, fontSize);
    addChild(m_textField);
    m_textField->setDelegate(this);
    setContentSize(cocos2d::CCSize(width, height));
    m_maxLabelScale = 1.0;
    m_placeholderScale = 0.0;
    m_maxLabelWidth = width;
    
    m_labelColor.r = 0xff;
    m_labelColor.g = 0xff;
    m_labelColor.b = 0xff;
    m_textColor.r = 255;
    m_textColor.g = 255;
    m_textColor.b = 255;
    m_allowedChars = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    if (LabelfontName != nullptr) {
        m_placeholderLabel = cocos2d::CCLabelBMFont::create(caption, LabelfontName);
        addChild(m_placeholderLabel);
        m_textField->setVisible(false);
        updateDefaultFontValues(std::string(LabelfontName));
    }
    m_cursor = cocos2d::CCLabelBMFont::create("|","chatFont.fnt");
    addChild(m_cursor,  10);
    m_cursor->updateDisplayedOpacity(150);
    m_cursor->setVisible(false);
    return true;
}


CCTextInputNode* CCTextInputNode::create(float width, float height, char const* placeholder, char const* fontPath)
{
    return;
}


CCTextInputNode* CCTextInputNode::create(float width, float height, char const* placeholder, int fontSize, char const* fontPath)
{
    return;
}



/* Unknown Return: CCTextInputNode::forceOffset(){}; */

cocos2d::CCLabelBMFont* CCTextInputNode::getPlaceholderLabel()
{
    return;
}


std::string CCTextInputNode::getString()
{
    return;
}


bool CCTextInputNode::init(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5)
{
    return;
}


void CCTextInputNode::keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& p0)
{
    return;
}


void CCTextInputNode::keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& p0)
{
    return;
}


void CCTextInputNode::onClickTrackNode(bool p0)
{
    return;
}


bool CCTextInputNode::onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* tField)
{
    return;
}



cocos2d::CCArray* loadProfanity(){
    return cocos2d::CCArray::create(
        cocos2d::CCString::create("ahole"),   
        cocos2d::CCString::create("ass-hole"),
        cocos2d::CCString::create("ass_hole"),
        cocos2d::CCString::create("ashole"),  
        cocos2d::CCString::create("asholes"), 
        cocos2d::CCString::create("assface"), 
        cocos2d::CCString::create("asshole"), 
        cocos2d::CCString::create("assholez"),
        cocos2d::CCString::create("asshole"), 
        cocos2d::CCString::create("assholes"),
        cocos2d::CCString::create("assholz"), 
        cocos2d::CCString::create("asswipe"), 
        cocos2d::CCString::create("azzhole"), 
        cocos2d::CCString::create("biatch"),  
        cocos2d::CCString::create("bitch"),   
        cocos2d::CCString::create("bitches"), 
        cocos2d::CCString::create("blowjob"), 
        cocos2d::CCString::create("boffing"), 
        cocos2d::CCString::create("butthole"),
        cocos2d::CCString::create("buttwipe"),
        cocos2d::CCString::create("cock"),    
        cocos2d::CCString::create("cocks"),   
        cocos2d::CCString::create("cockhead"),
        cocos2d::CCString::create("cock-head"),
        cocos2d::CCString::create("cocks"),
        cocos2d::CCString::create("cocksucker"),
        cocos2d::CCString::create("cock-sucker"),
        cocos2d::CCString::create("cunt"),
        cocos2d::CCString::create("cunts"),
        cocos2d::CCString::create("cuntz"),
        cocos2d::CCString::create("dick"),
        cocos2d::CCString::create("dildo"),
        cocos2d::CCString::create("dildos"),
        cocos2d::CCString::create("enema"),
        cocos2d::CCString::create("fucker"),
        cocos2d::CCString::create("fagit"),
        cocos2d::CCString::create("faget"),
        cocos2d::CCString::create("faggit"),
        cocos2d::CCString::create("faggot"),
        cocos2d::CCString::create("fuckin"),
        cocos2d::CCString::create("fucking"),
        cocos2d::CCString::create("fucks"),
        cocos2d::CCString::create("fukah"),
        cocos2d::CCString::create("fuken"),
        cocos2d::CCString::create("fuker"),
        cocos2d::CCString::create("fukin"),
        cocos2d::CCString::create("fukkah"),
        cocos2d::CCString::create("fukken"),
        cocos2d::CCString::create("fukker"),
        cocos2d::CCString::create("fukkin"),
        cocos2d::CCString::create("hore"),
        cocos2d::CCString::create("jerk-off"),
        cocos2d::CCString::create("lesbian"),
        cocos2d::CCString::create("lipshits"),
        cocos2d::CCString::create("lipshitz"),
        cocos2d::CCString::create("masochist"),
        cocos2d::CCString::create("masokist"),
        cocos2d::CCString::create("massterbait"),
        cocos2d::CCString::create("masstrbait"),
        cocos2d::CCString::create("masstrbate"),
        cocos2d::CCString::create("masterbaiter"),
        cocos2d::CCString::create("masterbate"),
        cocos2d::CCString::create("masterbates"),
        cocos2d::CCString::create("mothafucker"),
        cocos2d::CCString::create("mothafuker"),
        cocos2d::CCString::create("mothafukkah"),
        cocos2d::CCString::create("mothafukker"),
        cocos2d::CCString::create("motherfucker"),
        cocos2d::CCString::create("motherfukah"),
        cocos2d::CCString::create("motherfuker"),
        cocos2d::CCString::create("motherfukkah"),
        cocos2d::CCString::create("motherfukker"),
        cocos2d::CCString::create("mother-fucker"),
        cocos2d::CCString::create("muthafucker"),
        cocos2d::CCString::create("muthafukah"),
        cocos2d::CCString::create("muthafuker"),
        cocos2d::CCString::create("muthafukkah"),
        cocos2d::CCString::create("muthafukker"),
        cocos2d::CCString::create("nastt"),
        cocos2d::CCString::create("nigger"),
        cocos2d::CCString::create("nigur"),
        cocos2d::CCString::create("niiger"),
        cocos2d::CCString::create("niigr"),
        cocos2d::CCString::create("orgasim"),
        cocos2d::CCString::create("orgasm"),
        cocos2d::CCString::create("orgasum"),
        cocos2d::CCString::create("oriface"),
        cocos2d::CCString::create("orifice"),
        cocos2d::CCString::create("orifiss"),
        cocos2d::CCString::create("peenus"),
        cocos2d::CCString::create("peinus"),
        cocos2d::CCString::create("penis"),
        cocos2d::CCString::create("penas"),
        cocos2d::CCString::create("penis"),
        cocos2d::CCString::create("phuker"),
        cocos2d::CCString::create("phukker"),
        cocos2d::CCString::create("poonani"),
        cocos2d::CCString::create("pusse"),
        cocos2d::CCString::create("pussee"),
        cocos2d::CCString::create("pussy"),
        cocos2d::CCString::create("puuke"),
        cocos2d::CCString::create("puuker"),
        cocos2d::CCString::create("queer"),
        cocos2d::CCString::create("qweers"),
        cocos2d::CCString::create("qweerz"),
        cocos2d::CCString::create("qweir"),
        cocos2d::CCString::create("recktum"),
        cocos2d::CCString::create("rectum"),
        cocos2d::CCString::create("retard"),
        cocos2d::CCString::create("sadist"),
        cocos2d::CCString::create("scank"),
        cocos2d::CCString::create("schlong"),
        cocos2d::CCString::create("screwing"),
        cocos2d::CCString::create("skankee"),
        cocos2d::CCString::create("skankey"),
        cocos2d::CCString::create("skanks"),
        cocos2d::CCString::create("skanky"),
        cocos2d::CCString::create("sluts"),
        cocos2d::CCString::create("slutty"),
        cocos2d::CCString::create("slutz"),
        cocos2d::CCString::create("vaijina"),
        cocos2d::CCString::create("vagina"),
        cocos2d::CCString::create("vagiina"),
        cocos2d::CCString::create("vagina"),
        cocos2d::CCString::create("vajina"),
        cocos2d::CCString::create("vullva"),
        cocos2d::CCString::create("vulva"),
        cocos2d::CCString::create("whore"),
        /* https://www.collinsdictionary.com/dictionary/german-english/arschloch */
        cocos2d::CCString::create("arschloch"),
        /* https://en.wiktionary.org/wiki/boiola */
        cocos2d::CCString::create("boiolas"),
        /* https://www.urbandictionary.com/define.php?term=buceta */
        cocos2d::CCString::create("buceta"),
        /* used as an insulting and contemptuous term for a person of Chinese birth or descent - https://www.merriam-webster.com/dictionary/chink */
        cocos2d::CCString::create("chink"),
        /* vagina */
        cocos2d::CCString::create("clits"),
        cocos2d::CCString::create("cock"),
        cocos2d::CCString::create("cunt"),
        cocos2d::CCString::create("dildo"),
        /* https://www.urbandictionary.com/define.php?term=dirsa */
        cocos2d::CCString::create("dirsa"),
        cocos2d::CCString::create("ejakulate"),
        cocos2d::CCString::create("fcuk"),
        cocos2d::CCString::create("fuxor"),
        cocos2d::CCString::create("hoer"),
        cocos2d::CCString::create("hore"),
        cocos2d::CCString::create("jism"),
        /* same as cock */
        cocos2d::CCString::create("kawk"),
        cocos2d::CCString::create("lesbian"),
        cocos2d::CCString::create("masturbate"),
        cocos2d::CCString::create("nigga"),
        cocos2d::CCString::create("nigger"),
        cocos2d::CCString::create("nutsack"),
        cocos2d::CCString::create("phuck"),
        cocos2d::CCString::create("pimpis"),
        cocos2d::CCString::create("pusse"),
        cocos2d::CCString::create("pussy"),
        cocos2d::CCString::create("scrotum"),
        /* https://en.wikiless.tiekoetter.com/wiki/Shemale */
        cocos2d::CCString::create("shemale"),
        cocos2d::CCString::create("testical"),
        cocos2d::CCString::create("testicle"),
        cocos2d::CCString::create("jackoff"),
        cocos2d::CCString::create("whoar"),
        cocos2d::CCString::create("dyke"),
        cocos2d::CCString::create("fuck"),
        cocos2d::CCString::create("amcik"),
        cocos2d::CCString::create("andskota"),
        cocos2d::CCString::create("arse"),
        cocos2d::CCString::create("assrammer"),
        cocos2d::CCString::create("ayir"),
        cocos2d::CCString::create("bollock"),
        cocos2d::CCString::create("breasts"),
        /* Used to describe gay people */
        cocos2d::CCString::create("butt-pirate"),
        cocos2d::CCString::create("cabron"),
        cocos2d::CCString::create("cazzo"),
        cocos2d::CCString::create("chraa"),
        cocos2d::CCString::create("cunt"),
        cocos2d::CCString::create("dick"),
        cocos2d::CCString::create("dike"),
        cocos2d::CCString::create("dupa"),
        cocos2d::CCString::create("dziwka"),
        cocos2d::CCString::create("ejackulate"),
        /* https://www.urbandictionary.com/define.php?term=ekrem */
        cocos2d::CCString::create("ekrem"),
        /* No idea, Why does robtop hate vr headsets? */
        cocos2d::CCString::create("ekto"),
        cocos2d::CCString::create("enculer"),
        cocos2d::CCString::create("fanculo"),
        cocos2d::CCString::create("fanny"),
        cocos2d::CCString::create("feces"),
        cocos2d::CCString::create("felcher"),
        cocos2d::CCString::create("ficken"),
        cocos2d::CCString::create("flikker"),
        cocos2d::CCString::create("foreskin"),
        cocos2d::CCString::create("fotze"),
        cocos2d::CCString::create("futkretzn"),
        cocos2d::CCString::create("honkey"),
        cocos2d::CCString::create("huevon"),
        cocos2d::CCString::create("injun"),
        cocos2d::CCString::create("kanker"),
        cocos2d::CCString::create("klootzak"),
        cocos2d::CCString::create("kraut"),
        cocos2d::CCString::create("knulle"),
        cocos2d::CCString::create("kuksuger"),
        cocos2d::CCString::create("kurac"),
        cocos2d::CCString::create("kurwa"),
        cocos2d::CCString::create("kyrpa"),
        cocos2d::CCString::create("lesbo"),
        cocos2d::CCString::create("mamhoon"),
        cocos2d::CCString::create("masturbat"),
        cocos2d::CCString::create("mibun"),
        cocos2d::CCString::create("monkleigh"),
        cocos2d::CCString::create("mouliewop"),
        cocos2d::CCString::create("muie"),
        cocos2d::CCString::create("mulkku"),
        cocos2d::CCString::create("muschi"),
        cocos2d::CCString::create("nazis"),
        cocos2d::CCString::create("nepesaurio"),
        cocos2d::CCString::create("nigger"),
        cocos2d::CCString::create("orospu"),
        cocos2d::CCString::create("paska"),
        cocos2d::CCString::create("perse"),
        cocos2d::CCString::create("picka"),
        cocos2d::CCString::create("pierdol"),
        cocos2d::CCString::create("pillu"),
        cocos2d::CCString::create("pimmel"),
        cocos2d::CCString::create("pizda"),
        cocos2d::CCString::create("poontsee"),
        cocos2d::CCString::create("porn"),
        cocos2d::CCString::create("preteen"),
        cocos2d::CCString::create("puta"),
        cocos2d::CCString::create("qahbeh"),
        cocos2d::CCString::create("queef"),
        cocos2d::CCString::create("rapist"),
        cocos2d::CCString::create("raper"),
        cocos2d::CCString::create("rautenberg"),
        cocos2d::CCString::create("schaffer"),
        cocos2d::CCString::create("scheiss"),
        cocos2d::CCString::create("schlampe"),
        cocos2d::CCString::create("schmuck"),
        cocos2d::CCString::create("sharmuta"),
        cocos2d::CCString::create("sharmute"),
        cocos2d::CCString::create("shipal"),
        cocos2d::CCString::create("skribz"),
        cocos2d::CCString::create("skurwysyn"),
        cocos2d::CCString::create("sphencter"),
        cocos2d::CCString::create("spierdalaj"),
        cocos2d::CCString::create("splooge"),
        cocos2d::CCString::create("testicle"),
        cocos2d::CCString::create("wetback"),
        cocos2d::CCString::create("wichser"),
        cocos2d::CCString::create("zabourah")
    );
}

bool CCTextInputNode::onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* tField)
{
    return;
}


bool CCTextInputNode::onTextFieldInsertText(cocos2d::CCTextFieldTTF* pSender, char const* text, int nLen, cocos2d::enumKeyCodes keyCodes)
{
    return;
}


void CCTextInputNode::refreshLabel()
{
    return;
}


void CCTextInputNode::registerWithTouchDispatcher()
{
    return;
}


void CCTextInputNode::setAllowedChars(std::string filter)
{
    return;
}


void CCTextInputNode::setDelegate(TextInputDelegate* delegate)
{
    return;
}


void CCTextInputNode::setLabelNormalColor(cocos2d::ccColor3B color)
{
    return;
}


void CCTextInputNode::setLabelPlaceholderColor(cocos2d::ccColor3B color)
{
    return;
}


void CCTextInputNode::setLabelPlaceholderScale(float v)
{
    return;
}


void CCTextInputNode::setMaxLabelLength(int v)
{
    return;
}


void CCTextInputNode::setMaxLabelScale(float v)
{
    return;
}


void CCTextInputNode::setMaxLabelWidth(float v)
{
    return;
}


void CCTextInputNode::setString(std::string p0)
{
    return;
}


void CCTextInputNode::textChanged()
{
    return;
}


void CCTextInputNode::updateBlinkLabel()
{
    return;
}


void CCTextInputNode::updateBlinkLabelToChar(int p0)
{
    return;
}


void CCTextInputNode::updateCursorPosition(cocos2d::CCPoint p0, cocos2d::CCRect p1)
{
    return;
}


void CCTextInputNode::updateDefaultFontValues(std::string p0)
{
    return;
}


void CCTextInputNode::updateLabel(std::string p0)
{
    return;
}


void CCTextInputNode::visit()
{
    return;
}

