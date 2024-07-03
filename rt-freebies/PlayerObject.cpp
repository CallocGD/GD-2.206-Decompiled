#include "PlayerObject.h"
#include "GameObject.h"
#include <cocos2d.h>
#include <cmath>
#include <CCNode.h>
// Bring the code below into scope...
using namespace cocos2d;

#define MIN(a, b) (a < b) ? a : b

/* Unknown float macros... */

#define kStickDistancePlatformer 0.0
#define kStickDistance 0.0

// NonExistant Class Members that have not been found yet By me or anyone else (that I know of)... 
static int lastSlopeID_;
static float _xVelocity, _playerXVelocity, timeMod_, slopeYVel_ , lastSlopeYVelocity_, targetSlopeAngle_, playerScale_;
static bool gravityFlipped_, lastSlopeFloorTop_, _platformerMode, floorTop, onSlope_, isJumping_, flyMode_ , upKeyDown_, birdMode_, rollMode_;



void PlayerObject::collidedWithSlope(float dt, GameObject* object, bool forced){
    //CCLog("BEGIN %i", object->getM_ID());
    // First check if we hit the walls of the slope etc.
    

    if (!forced && preSlopeCollision(dt, object)){
        //CCLog("PRE");
        return;
    }

    CCRect pRect = getObjectRect();
    CCRect oRect = object->getObjectRect();
    
    bool slidingDown = !object->getUpSlope(); // Looks to be an non-existant Function in our decomp
    bool reverseDirectionSlope = _xVelocity < 0; // _reversedDirection
    if (reverseDirectionSlope) slidingDown = !slidingDown;

    // Special check if the slope is moving
    bool backwardsRamp = false;
    bool movingBackwards = false;
    float xDiff = object->getRealPosition().x - object->getLastPosition().x;
    if (xDiff > _playerXVelocity * timeMod_ * dt) {
        if (!gravityFlipped_ && slidingDown) backwardsRamp = true;
        else if (gravityFlipped_ && !slidingDown) backwardsRamp = true;
        movingBackwards = true;
    }

    float yDiff = object->getRealPosition().y - object->getLastPosition().y;

    if (movingBackwards) slidingDown = !slidingDown;

    // Reverse up/down based on gravity
    if (gravityFlipped_) slidingDown = !slidingDown;

    // Give side up priority over slide down
    if (m_wasOnSlope && slopeYVel_ * flipMod() > 0 && slidingDown && lastSlopeFloorTop_ && gravityFlipped_){
        //CCLog("E1");
        return;
    }

    // Check if we should stick in the next slope, or if the previous speed is greater resulting in a boost
    float time = oRect.size.width / (_playerXVelocity * timeMod_);
    float newSlopeYVelocity = oRect.size.height / time;

    if (m_wasOnSlope && slopeYVel_ * flipMod() > 0 && lastSlopeYVelocity_ > newSlopeYVelocity) {
        //CCLog("E2");
        return;
    }

    float slideStickyness = slidingDown;
    if (m_wasOnSlope) slideStickyness = slidingDown * 4;

    float diff = object->getLastPosition().y - object->getRealPosition().y;
    bool isMovingDown = (!gravityFlipped_ && diff > 0) || (gravityFlipped_ && diff < 0);

    if (forced || isMovingDown){
        diff - fabs(diff);
        diff = MIN(diff, (_platformerMode ? kStickDistancePlatformer : kStickDistance)* dt);
        slideStickyness += diff;
    }

    //CCLog("Stickyness: %f, BackwardsRamp: %i", slideStickyness, backwardsRamp);

    // UNKNOWN (According to Robtop)
    float playerFeet;
    float playerH = ((pRect.size.height/2) / cos(targetSlopeAngle_));
    if (!gravityFlipped_) playerFeet = getPosition().y - playerH - slideStickyness;
    else playerFeet = getPosition().y + playerH + slideStickyness;
    // End of Size.height is a guess and is unknown...
    if (m_wasOnSlope && ((!gravityFlipped_ && playerFeet > oRect.origin.y + oRect.size.height || (gravityFlipped_ && playerFeet < oRect.size.height)))){
        //CCLog("E3");
        return;
    }

    // UNKNOWN... lol
    if (!m_wasOnSlope && !pRect.intersectsRect(CCRectMake(oRect.origin.x, oRect.origin.y + 1, oRect.size.width, oRect.size.height - 2))){
        //CCLog("E4")
        return;
    }

    CCPoint pos = getPosition();
    
    //float xMin = oRect.getMinX();
    //float yMax = oRect.getMaxY();
    float yMin = oRect.getMinY();
    float yMax = oRect.getMaxY();

    float toleranceValue = 20;

    float A = object->getSlopeAngle();
    float h = (pRect.size.height / cos(A)) / 2.0f; // object->getSlopeAngle -> A

    float slopeTolerance = 0;
    float slopeIntersection = m_wasOnSlope && lastSlopeID_ != object->getM_ID() && lastSlopeFloorTop_ != floorTop; 

    if (slopeIntersection) slopeTolerance = _platformerMode ? 0 : toleranceValue = playerScale_; 

    float yPos = object->slopeYPos(pos.x);

    bool wasMax = false;
    bool wasMin = false;
    if (!floorTop){
        float maxYPos = yMax + (pRect.size.height)/2.0f - slopeTolerance;

        yPos = yPos + h - slopeTolerance;
        if (yPos >= maxYPos) {
            yPos = maxYPos;
            wasMax = true;
        }

        //yPos = MIN(yPos + h - slopeTolerance, yMax + (pRect.size.height)/2.0f - slopeTolerance);

        if (yPos <= yMin){
            yPos = yMin;
            wasMin = true;
        }

        //yPos = MAX(yPos, yMin);
    }
    else {
        float minYPos = yMin - (pRect.size.height)/2.0f + slopeTolerance;

        yPos = yPos - h + slopeTolerance;
        if (yPos >= minYPos) {
            yPos = minYPos;
            wasMax = true;
        }

        if (yPos <= yMax){ // yMin
            yPos = yMax;
            wasMin = true;
        }

        //yPos = MAX(yPos - h + slopeTolerance, yMin - (pRect.size.height)/2.0f + slopeTolerance);
        //yPos - MIN(yPos, yMax);

        bool collide = false;
        bool didHitTop = false;
        bool dontHitGround = false;
        bool knockDown = false;
        bool pushUp = false;

        if ((!gravityFlipped_ && !floorTop) || (gravityFlipped_ && floorTop)) {
            // || (_platformerMode && !playerIsMovingUp())
            bool special = !slopeIntersection && slidingDown && !onSlope_ && (!isJumping_ || !flyMode_ || !upKeyDown_);

            if (forced && !slidingDown) special = true;

            if (!slidingDown && isMovingDown) special = true;

            // Collision test
            if (!gravityFlipped_)
                collide = pos.y < yPos || (special && pos.y < yPos + slideStickyness && (!birdMode_ || m_yVelocity <= 0));
            else 
                collide = pos.y > yPos || (special && pos.y > yPos - slideStickyness && (!birdMode_ || m_yVelocity >= 0));
            
            // Special handling to make sure the player does not stick to the ceiling
            // Disable in platformer mode if in a slope intersection
            //pushUp = upKeyDown_ && isFlying() && !slidingDown;
            pushUp = upKeyDown_ && (!_platformerMode && !slidingDown);
            dontHitGround = pushUp && (!_platformerMode || !slopeIntersection);

            //CCLog("OBJ: %i, Collide: %i, wasOnSlope: %i, PosY: %f, yPos: %f, SlidingDown: %i, onSlope: %i, slideStickyness: %f, IsJumping:) UNKNOWN...
        }   
        else {
            // Dont show particle since we are hitting the top
            didHitTop = true;
            if (slidingDown) slideStickyness = 0;
            else if (isFlying() && upKeyDown_) slideStickyness = m_wasOnSlope ? 2: 1;

            bool special = !slopeIntersection && (!isFlying() || !slidingDown || _platformerMode) && !onSlope_;
            //if (forced) special = true;

            // Collisiontest
            if (!gravityFlipped_)
                collide = pos.y > yPos || (special && pos.y > yPos - slideStickyness);
            else 
                collide = pos.y < yPos || (special && pos.y < yPos + slideStickyness);

            // Special cases for flying and roll
            dontHitGround = !upKeyDown_ && !_platformerMode && (isFlying() || rollMode_) && slidingDown && m_wasOnSlope;

            if (upKeyDown_ && isFlying() && slidingDown) knockDown = true;

            //CCLog("\n2 Collide: %i\nSpecial: %i\n DontHitGround: %i\nKnockDown: %i\npos.y: %f\nyVal: %f\nGravity: ") UNKNOWN...

            // Player should crash if he hits head on a slope
            if (collide & !isFlying() && !rollMode_ && !_platformerMode) {

                bool safe = isSafeMode() || isSafeFlip();
                bool dontManipulate = false;

                if (!safe){
                    // Also give some extra help

                    // Collision test
                    float extra = 2;
                    if (!gravityFlipped_) collide = pos.y - extra > yPos;
                    else collide = pos.y + extra < yPos;

                    safe = !collide;
                }
            }
        }
    }
}   

