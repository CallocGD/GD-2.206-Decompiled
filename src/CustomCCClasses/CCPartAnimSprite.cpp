#include "includes.h"
#include "CCPartAnimSprite.h"

#include <fmt/format.h>


void CCPartAnimSprite::changeTextureOfID(char *textureFrame,char *displayFrame)

{  
    // FUNC 0x2f0620 is unknown, even ghidra can't even recover it on andriod32
    // TODO: check andriod64 or windows as a last-hope-measure?
    
    // UPDATE: on android64 bit it doesnt appear so I assume it's a shit glitch on ghidra's end so were gonna ignore it...

    CCSpritePart* part = (CCSpritePart *)m_spritePartIDs->objectForKey(textureFrame);
    
    if (part != nullptr) {
        if (displayFrame == nullptr) {
            part->resetTextureRect();
        }
        else {
            part->updateDisplayFrame(displayFrame);
        }
    }
}

unsigned int CCPartAnimSprite::countParts(){
    return getChildren()->count();
}; 


CCPartAnimSprite* CCPartAnimSprite::createWithAnimDesc(char const* frame, cocos2d::CCTexture2D* texture, bool rotated){
    CCPartAnimSprite* part = new CCPartAnimSprite;
    if (part->initWithAnimDesc(frame, texture, rotated)){
        part->autorelease();
        return part;
    }
    delete part;
    return nullptr;
};


void CCPartAnimSprite::dirtify(){
    if (countParts() > 0){
        // it grabs getChildren 4 different times on ghidra before this iteration begins,  
        arrayMakeObjectsPerformSelectorWithObject(getChildren(), setDirty, true, CCSpritePart*);
    }
};

cocos2d::CCSpriteFrame* CCPartAnimSprite::displayFrame()
{
    return m_spriteFrame;
}



CCSpritePart* CCPartAnimSprite::getSpriteForKey(char const* partID){
    return (CCSpritePart*)m_spritePartIDs->objectForKey(partID);
};


#define CREATE_AND_RETAIN(ITEM, FUNC) \
    ITEM = FUNC(); ITEM->retain()

bool CCPartAnimSprite::initWithAnimDesc(const char *frame,cocos2d::CCTexture2D *texture,bool rotated)
{

  
  
  
    if (cocos2d::CCSprite::initWithTexture(texture,cocos2d::CCRectZero)) {
        m_spriteParts = cocos2d::CCArray::create(); 
        m_spriteParts->retain();
        m_spritePartIDs = cocos2d::CCDictionary::create(); 
        m_spritePartIDs->retain();

        auto textures = (cocos2d::CCDictionary*)CCAnimateFrameCache::sharedSpriteFrameCache()->addSpriteFramesWithFile(frame);
        m_hasChanged = true;
        auto usedTextures = (cocos2d::CCDictionary*)textures->objectForKey("usedTextures");

        for (unsigned int i = 0; i < usedTextures->count(); i++){
            fmt::BasicWriter<char> writer;
            writer << "texture_" << i;

            cocos2d::CCDictionary*  textureDict = (cocos2d::CCDictionary*)usedTextures->objectForKey(writer.c_str());
            std::string texture_value = textureDict->valueForKey("texture")->getCString();
            int tag_value = textureDict->valueForKey("tag")->intValue();
            
            CCSpritePart* part;

            if ((texture_value == "0") || (!rotated)){
                part = CCSpritePart::create(texture);
                if ((texture_value != "0") && (!rotated)){
                    part->m_spriteFrameName = texture_value;
                }
            } else {
                part = CCSpritePart::createWithSpriteFrameName(texture_value.c_str());
            }

            part->setTag(tag_value);
            auto customID = (cocos2d::CCDictionary*)textureDict->objectForKey("customID");
            if (customID != nullptr){
                m_spritePartIDs->setObject(customID , ((cocos2d::CCString*)textureDict->objectForKey("customID"))->getCString());
            }
            m_spriteParts->addObject(part);
            addChild(part, 0);
            part->setVisible(false);
            writer.Clear();
        }
        return true;
    }
    return false;
}   


bool CCPartAnimSprite::isFrameDisplayed(cocos2d::CCSpriteFrame* frame)
{
    // Not sure I will need to install the vtables for it...
    // TODO: CCSpriteFrame Vtables...
}


void CCPartAnimSprite::setBlendFunc(cocos2d::ccBlendFunc func)
{
    if (countParts() > 0){
        // it grabs getChildren 4 different times on ghidra before this iteration begins,  
        arrayMakeObjectsPerformSelectorWithObject(getChildren(), setBlendFunc, func, CCSpritePart*);
    }
}


void CCPartAnimSprite::setColor(cocos2d::ccColor3B color)
{
    if (countParts() > 0){
        // it grabs getChildren 4 different times on ghidra before this iteration begins
        arrayMakeObjectsPerformSelectorWithObject(getChildren(), setColor, color, CCSpritePart*);
    }
}




void CCPartAnimSprite::setDisplayFrame(cocos2d::CCSpriteFrame* frame)
{
    if ((frame == nullptr) || (frame == m_spriteFrame)){
        return;
    } else {
        m_spriteFrame->release();
    }
    m_spriteFrame = frame;
    m_spriteFrame->retain();

    // TODO:... There's so much more after that...    
    // For Some reason cocos2d::CCString::getCString() should be here 
    // but I thought it was a developer mistake so I did not do that here...

    // TODO: Ask Robtop about this part of his code. I would assume these are somehow macros...
    auto sFrame = (cocos2d::CCArray*)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(frame->m_textureName.c_str());
    if (sFrame != nullptr){
        arrayMakeObjectsPerformSelector(m_spriteParts, markAsNotBeingUsed, CCSpritePart*);
        cocos2d::CCObject* part;

        CCARRAY_FOREACH(sFrame, part){
            transformSprite((SpriteDescription*)part);
        }
        arrayMakeObjectsPerformSelector(m_spriteParts, hideInactive, CCSpritePart*);
    }
    m_hasChanged = true;
}


void CCPartAnimSprite::setFlipX(bool flipX)
{
    if (isFlipX()) {
        setScaleX(1 & 0xff);
    }
    cocos2d::CCSprite::setFlipX(flipX);
    m_hasChanged = true;
}



void CCPartAnimSprite::setFlipY(bool flipY)
{
    if (isFlipY()) {
        setScaleY(1 & 0xff);
    }
    cocos2d::CCSprite::setFlipY(flipY);
    m_hasChanged = true;
}

void CCPartAnimSprite::setOpacity(unsigned char opacity)
{
    if (countParts() > 0){
        // it grabs getChildren 4 different times on ghidra before this iteration begins
        arrayMakeObjectsPerformSelectorWithObject(getChildren(), setOpacity, opacity, CCSpritePart*);
    }
}


void CCPartAnimSprite::setScale(float scale)
{
    cocos2d::CCSprite::setScale(scale);
    m_hasChanged = true;
}



void CCPartAnimSprite::setScaleX(float scaleX)
{
    cocos2d::CCSprite::setScaleX(scaleX);
    m_hasChanged = true;
}

void CCPartAnimSprite::setScaleY(float scaleY)
{
    cocos2d::CCSprite::setScaleX(scaleY);
    m_hasChanged = true;
}




void CCPartAnimSprite::transformSprite(SpriteDescription *desc){

    CCSpritePart* part = (CCSpritePart*)m_spriteParts->objectAtIndex(desc->m_tag);
    part->stopAllActions();
    part->setPosition(desc->m_position);

    part->setScaleX(((desc->m_flipped).x == 0.0) ? desc->m_scale.x: -desc->m_scale.x);
    part->setScaleY(((desc->m_flipped).y == 0.0) ? desc->m_scale.y: -desc->m_scale.y);
    part->setRotation(desc->m_rotation);
    if (desc->m_usesCustomTag != false) {
        part->setDisplayFrame(desc->m_texture);
        part->frameChanged(desc->m_texture->m_textureName);
    }
    if (part->getZOrder() != desc->m_zValue) {
        reorderChild(part, desc->m_zValue);
    }
    part->setBeingUsed(true);
    part->setVisible(true);
}

void CCPartAnimSprite::tweenSpriteTo(SpriteDescription* desc, float duration)
{
    CCSpritePart *part = (CCSpritePart *)m_spriteParts->objectAtIndex(desc->m_tag);
    part->stopAllActions();
    part->runAction(cocos2d::CCMoveTo::create(duration,desc->m_position));
    part->runAction(cocos2d::CCScaleTo::create(duration,
        ((desc->m_flipped).x != 0.0) ? desc->m_scale.x: -desc->m_scale.x,  
        ((desc->m_flipped).y != 0.0) ? desc->m_scale.y: -desc->m_scale.y)
    );
    part->runAction(cocos2d::CCRotateTo::create(duration,desc->m_rotation));
    
    if (desc->m_usesCustomTag) {
        part->setDisplayFrame(desc->m_texture);
        part->frameChanged(desc->m_texture->m_textureName);
    }
    if (part->getZOrder() != desc->m_zValue) {
        reorderChild(part, desc->m_zValue);
    }
    part->setBeingUsed(true);
    part->setVisible(true);
}


void CCPartAnimSprite::tweenToFrame(cocos2d::CCSpriteFrame* frame, float duration){
    if (m_spriteFrame == nullptr){
        setDisplayFrame(frame);
    } else {
        // TODO: Ask Robtop why he's yanking an array from CCSpriteFrameCache by frame name...
        auto sFrame = (cocos2d::CCArray*)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(frame->m_textureName.c_str());
        if (sFrame != nullptr){
            arrayMakeObjectsPerformSelector(m_spriteParts, markAsNotBeingUsed, CCSpritePart*);
            cocos2d::CCObject* part;

            CCARRAY_FOREACH(sFrame, part){
                tweenSpriteTo((SpriteDescription*)part, duration);
            }
            arrayMakeObjectsPerformSelector(m_spriteParts, hideInactive, CCSpritePart*);
        }
        m_hasChanged = true;
    }
};

