
#include "includes.h"

void OBB2D::calculateWithCenter(cocos2d::CCPoint center, float width, float height, float rotationAngle)
{
    
    
    float cosAngle = cosf(rotationAngle);
    float sinAngle = sinf(rotationAngle);

    cocos2d::CCPoint x = cocos2d::CCPoint(cosAngle, sinAngle) * width * 0.5;
    cocos2d::CCPoint y = cocos2d::CCPoint(-sinAngle, cosAngle) * height * 0.5;

    m_corners[0] = center - x - y;
    m_corners[1] = center + x - y;
    m_corners[2] = center + x + y;
    m_corners[3] = center - x + y;
    computeAxes();
    orderCorners();
}


void OBB2D::computeAxes()
{
    m_horizontalDifference = m_horizontalDifference - m_corners[2];
    m_verticalDifference = m_verticalDifference - m_corners[4];

    for (int i = 0; i < 2; i++) {
        m_horizontalDifference = m_horizontalDifference * 1.0 / (m_horizontalDifference.y * m_horizontalDifference.y + m_horizontalDifference.x * m_horizontalDifference.x);
        m_verticalDifference = m_verticalDifference * 1.0 / ((m_corners[i]).y * m_horizontalDifference.y + (m_corners[i]).x * m_horizontalDifference.x);
    };
 
    return;
}


OBB2D* OBB2D::create(cocos2d::CCPoint center, float width, float height, float rotationAngle)
{
    OBB2D* obb2d = new OBB2D;
    if (obb2d->init(center, width, height, rotationAngle)){
        obb2d->autorelease();
        return obb2d;
    }
    CC_SAFE_RELEASE(obb2d);
    return nullptr;
}



cocos2d::CCRect OBB2D::getBoundingRect(){
    float x_start;
    float y_start;
    float y_end;
    float x_end;
    float _y;
    float _x;
    
    _x = _y = x_end = y_end = 0.0;

    for (int i = 0; i < 4; i++){
        
        if (m_corners[i].x != x_end && (m_corners[i].x < x_end) == (m_corners[i].x || x_end)) {
            x_end = m_corners[i].x;
        }

        x_start = ((m_corners[i].x < _x) && (_x != 0.0)) ? _x : m_corners[i].x;

        if (m_corners[i].y != y_end && (m_corners[i].y < y_end) == (m_corners[i].y || y_end)) {
          y_end = m_corners[i].y;
        }
        y_start = ((m_corners[i].y < _y) && (_y != 0.0)) ? _y : m_corners[i].y;
        
        _y = y_start;
        _x = x_start;
    } 
    return cocos2d::CCRect::CCRect(x_start,y_start, x_end - x_start, y_end - y_start);
};

bool OBB2D::init(cocos2d::CCPoint center, float width,float height,float rotationAngle)
{
    if (cocos2d::CCNode::init()){
        calculateWithCenter(center,width,height,rotationAngle);
        return true;
    }
    return false;
}

/* did the best I could, THAT HAS HELL! Spent 3 hours on this one */
void OBB2D::orderCorners(){
    
    
    cocos2d::CCPoint corner, zero_position;
    zero_position = corner = *m_corners;


    for (int i; i < 4; i++){
        if (m_corners[i].y <= corner.y){
            corner = m_corners[i];
        } else {
            corner = m_corners[i] = zero_position;
        }
    }

    /* robtop, You really are full of shit... */
    (*m_positions) = (corner.x <= zero_position.x) ?  zero_position: *m_corners;

    m_positions[1] = zero_position;
    for (int j = 0; j < 4; j++){
        if (m_positions[j].y <= corner.y){
            corner = m_positions[j];
        } else {
            corner = m_positions[j] = zero_position;
        }
    }
    
    m_positions[2] = (corner.x <= zero_position.x) ?  zero_position: corner;
    m_positions[3] = corner;

}



bool OBB2D::overlaps(OBB2D* other){
{
    return overlaps1Way(other) && other->overlaps1Way(this);
}



/* Modified from Wyliemaster's code, This code hasn't changed since 2.1 so all I have to do is rename shit. */

bool OBB2D::overlaps1Way(OBB2D* other)
{
    for (int i = 0; i < 2; i++){
        float origin = (m_corners[0].x * m_axes[i].x) + (other->m_corners[0].y * m_axes[i].y);

        float dot = (other->m_corners[0].x * m_axes[i].x) + (other->m_corners[0].y * m_axes[i].y);

        float min = dot;
        float max = dot;

        // Checking each corner to get a range for the dot prouct
        for (int c = 1; c < 4; c++) {

            cocos2d::CCPoint vertex = other->m_corners[c];

            dot = (vertex.x * m_axes[i].x) + (vertex.y * m_axes[i].y);

            if (dot < min)
            {
                min = dot;
            }

            if (dot > max)
            {
                max = dot;
            }
        }

        if (min > origin + 1)
        {
            return false;
        }

        if (max < origin)
        {
            return false;
        }
    }
    return true;
};
