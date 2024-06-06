#ifndef __CCSPRITEPLUS_H__
#define __CCSPRITEPLUS_H__


#include "../includes.h"

/// @brief CCSpritePlus is an object that has the ability to attach and detach other sprites from itself.
/// This object is not just utilized in Geometry Dash but it's also utilized in Forlorn. 
/// which is what makes this object a little bit more special than the others. 
/// it's also the baseplate for GameObjects throught levels.
class CCSpritePlus: public cocos2d::CCSprite {
public:
    CCSpritePlus():
        m_followers(nullptr),
        m_followingSprite(nullptr),
        m_propagateScaleChanges(false),
        m_propagateFlipChanges(false)
    {}
    
    /// @brief Adds a follower to the sprite
    /// @param follower Something that will follow this sprite
    void addFollower(cocos2d::CCNode* follower);

    /// @brief Creates a sprite by a given sprite frame 
    /// @param frame the frame to give to the specific sprite
    /// @return CCSpritePlus object and returns null if initialization fails
    static CCSpritePlus* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    
    /// @brief Creates a sprite by a given sprite's frame name
    /// @param frame the frame or filename to give to the specific sprite
    /// @return CCSpritePlus object and returns null if initialization fails
    static CCSpritePlus* createWithSpriteFrameName(char const* frame);
    
    /// @brief attaches a sprite to the sprite. and other way around
    /// you can think of this as attaching 2 lego blocks together.  
    /// @param sprite the sprite to attach to the main sprite and vice versa
    void followSprite(CCSpritePlus* sprite);
    
    /// @brief Obtains the first following sprite if it has a follower on hand
    /// @return nullptr if there is no follower avalible
    CCSpritePlus* getFollower();
    
    /// @brief Removes a specific following sprite from this sprite.
    /// @param sprite follower sprite that will be removed.
    void removeFollower(cocos2d::CCNode* sprite);
    
    /// @brief Stops this child sprite from following it's given parent 
    void stopFollow();
    
    /// @brief sets X's scale on itself and it's followers
    /// @param fScaleX the scale of X to set
    virtual void setScaleX(float fScaleX);

    /// @brief sets Y's scale on itself and it's followers
    /// @param fScaleY the scale of Y to set
    virtual void setScaleY(float fScaleY);
    
    /// @brief sets the Scale of itself and it's followers 
    /// @param fScale the scale value to set
    virtual void setScale(float fScale);
    
    /// @brief Sets the position where the sprite will be at and it's followers
    /// @param pos the position to place to the sprite and it's followers
    virtual void setPosition(cocos2d::CCPoint const& pos);
    
    /// @brief sets the sprite's given rotation and it's followers
    /// @param fRotation the rotation value to set
    virtual void setRotation(float fRotation);

    /// @brief sets the sprite's given rotation of X and it's followers
    /// @param fRotationX the rotation of X to set.
    virtual void setRotationX(float fRotationX);
    
    /// @brief sets the sprite's given rotation of Y and it's followers
    /// @param fRotationY the roation of Y to set 
    virtual void setRotationY(float fRotationY);

    /// @brief initalizes the sprite using a texture
    /// @param texture the texture to initalize the sprite with 
    /// @return true if initalization succeeded.
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture);

    /// @brief initalizes the sprite with a frame name 
    /// @param frame the frame to initalize the sprite with 
    /// @return true if initalization succeeded 
    virtual bool initWithSpriteFrameName(char const* frame);

    /// @brief sets flipX to itself and it's followers
    /// @param flipX the direction that the sprite should be flipped to
    virtual void setFlipX(bool flipX);
    
    /// @brief sets flipY to itself and it's followers
    /// @param flipY the direction that the sprite should be flipped to
    virtual void setFlipY(bool flipY);

    cocos2d::CCArray* m_followers;
    CCSpritePlus* m_followingSprite;
    bool m_hasFollower;
    bool m_propagateScaleChanges;
    bool m_propagateFlipChanges;

};

#endif /* __CCSPRITEPLUS_H__ */