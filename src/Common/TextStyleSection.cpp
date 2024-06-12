#include <includes.h>


TextStyleSection* TextStyleSection::create(int start, int end, TextStyleType style){
    TextStyleSection* tss = new TextStyleSection();
    if ((tss != nullptr) && tss->init(start, end, style)){
        tss->autorelease();
        return tss;
    }
    CC_SAFE_DELETE(tss);
    return nullptr;
};

TextStyleSection* TextStyleSection::createColoredSection(cocos2d::ccColor3B color,int start,int end){
    TextStyleSection* tss = create(start, end, TextStyleType::Colored);
    tss->m_color = color;
    return tss;
};

TextStyleSection* TextStyleSection::createDelaySection(int start,float delay)
{
    TextStyleSection *tss = create(start, -1, TextStyleType::Delayed);
    tss->m_delay = delay;
    return tss;
}

TextStyleSection* TextStyleSection::createInstantSection(int start, int end, float instant){
    TextStyleSection* tss = create(start, end, TextStyleType::Instant);
    tss->m_instant = instant;
    return tss;
};

TextStyleSection* TextStyleSection::createShakeSection(int start, int end, int shakeX, int shakeY){
    TextStyleSection* tss = create(start, end, TextStyleType::Shake);
    tss->m_shakeX = shakeX;
    tss->m_shakeY = shakeY;
    return tss;
};

bool TextStyleSection::init(int start, int end, TextStyleType style){
    m_styleType = style;
    m_start = start;
    m_end = end;
    return true;
}

