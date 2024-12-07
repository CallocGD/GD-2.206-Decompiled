
#include "includes.h"
#include "GameObject.h"



/* 009a0443 */
static cocos2d::ccColor3B BLACK_COLOR_3B = cocos2d::ccc3(0, 0, 0);

/* 009a0440 */
static cocos2d::ccColor3B WHITE_COLOR_3B = cocos2d::ccc3(255, 255, 255);

/* Nobody said this could be done. I just proved you all wrong */

void GameObject::activateObject()
{
    m_isHidden = false;
    if (m_isActivated && m_isDisabled) return;

    m_isActivated = true;
    if (m_isInvisible) return;

    setVisible(true);
    addMainSpriteToParent(false);
    if (m_glowSpriteMain != nullptr) {
        /* Bypass for Zlayer (Blame Geode, Not Robtop...)*/
        parentForZLayer(static_cast<int>(getObjectZLayer()), true, 5)->addChild(m_glowSpriteMain, -1000);
    }
    addColorSpriteToParent(false);
}


/* TODO: Macro For Expressing Noops? */

// bool GameObject::activatedByPlayer(PlayerObject* player){};


// SMJS Told me Robtop Likely is using macros for customSetup and I thought the same for addColorSprite
// So I had decided that Macros would be our best approch.
// We will get rid of compiler optimizations in the future so that things are more 
// readable. I'll likely write a script deoptimizing to a switchblock using python. You're welcome :)

#define SGO_COLOR_SPRITE(FRAME, SCOLOR, SECONDARY_MODE) \
    m_colorSprite = cocos2d::CCSprite::createWithSpriteFrameName(FRAME); \
    m_colorSprite->retain(); \
    m_colorSprite->setPosition(getPosition()); \
    createSpriteColor(SCOLOR); \
    setDefaultSecondaryColorMode(SECONDARY_MODE);


#define SC_COLOR_SPRITE(FRAME, SCOLOR) \
    m_colorSprite = cocos2d::CCSprite::createWithSpriteFrameName(FRAME); \
    m_colorSprite->retain(); \
    m_colorSprite->setPosition(getPosition()); \
    createSpriteColor(SCOLOR);



/* Extra Funciton For GetGlowFrame (it's a subroutine...) */

// frame.replace(frame.len(),"_001.png", "_glow_001.png");

/* I could not find this function in C++ at all so I am putting this shit here and labeling it a subroutine... */
std::string __Subroutine_Replace_All(std::string s, const char * old , const char* repl){
    size_t pos = 0;
    std::string _repl = repl;

    while (pos = s.find(old, pos), pos != std::string::npos){
        s = s.replace(pos, _repl.length(), _repl);
    }
    return s;
}

void GameObject::addColorSprite(std::string frame)
{
    int optimizedID;
    int IDcheckVar;
    bool bVar7;

    if (m_objectID < 0x959)
    {
        if (0x936 < m_objectID)
            goto LAB_0035fd4a;
        if (m_objectID < 0x5c1)
        {
            if (0x5be < m_objectID)
                goto LAB_0035fe42;
            if (m_objectID < 0x36b)
            {
                if (m_objectID < 0x363)
                {
                    if (m_objectID < 0x1e3)
                    {
                        if (m_objectID < 0x1dd)
                        {
                            if (m_objectID < 0x106)
                            {
                                if (m_objectID < 0x104)
                                {
                                    if (m_objectID < 0xdd)
                                    {
                                        if (m_objectID < 0xd7)
                                        {
                                            if (m_objectID < 0xcf)
                                                return;
                                            if (0xd2 < m_objectID)
                                            {
                                                optimizedID = m_objectID - 0xd4;
                                                goto joined_r0x0035f30c;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        if (m_objectID < 0xf7)
                                            return;
                                        if (0xfa < m_objectID)
                                        {
                                            optimizedID = m_objectID - 0xfc;
                                            goto joined_r0x0035eefe;
                                        }
                                    }
                                }
                            }
                            else if (m_objectID < 0x111)
                            {
                                if (m_objectID < 0x10d)
                                {
                                    if ((0x106 < m_objectID) && ((m_objectID < 0x10a || (0x10a < m_objectID))))
                                    {
                                       
                                        m_colorSprite = cocos2d::CCSprite::createWithSpriteFrameName("lightsquare_04_05_color_001.png");
                                        m_colorSprite->retain();
                                        m_colorSprite->setPosition(getPosition());
                                        createSpriteColor(2);
                                    }
                                    return;
                                }
                            }
                            else if (m_objectID < 400)
                            {
                                if (m_objectID < 0x18d)
                                {
                                    optimizedID = m_objectID - 0x112;
                                    goto joined_r0x0035f30c;
                                }
                            }
                            else
                            {
                                optimizedID = m_objectID - 0x1c5;
                            joined_r0x0035f060:
                                if (5 < optimizedID)
                                    return;
                            }
                        }
                    }
                    else if (m_objectID < 0x2fe)
                    {
                        if (m_objectID < 0x2fa)
                        {
                            if (m_objectID < 0x2c5)
                            {
                                if (m_objectID < 0x2bf)
                                {
                                    if (m_objectID < 0x1e5)
                                        return;
                                    if (0x1eb < m_objectID)
                                    {
                                        optimizedID = m_objectID - 0x2a6;
                                        goto joined_r0x0035f2c8;
                                    }
                                }
                            }
                            else
                            {
                                if (0x2f5 < m_objectID)
                                {
                                    IDcheckVar = 0x2f7;
                                    goto LAB_0035efea;
                                }
                                if (m_objectID < 0x2f4)
                                {
                                    optimizedID = m_objectID - 0x2f0;
                                joined_r0x0035f2c8:
                                    if (2 < optimizedID)
                                        return;
                                }
                            }
                        }
                    }
                    else
                    {
                        if (0x350 < m_objectID)
                        {
                            if (m_objectID < 0x35a)
                            {
                                if (0x354 < m_objectID)
                                    goto LAB_0035fe42;
                                IDcheckVar = 0x352;
                            }
                            else
                            {
                                IDcheckVar = 0x35b;
                            }
                            if (m_objectID != IDcheckVar)
                                return;
                            goto LAB_0035fe42;
                        }
                        if ((m_objectID < 0x34d) && (m_objectID != 0x349))
                        {
                            if (m_objectID < 0x34a)
                            {
                                optimizedID = m_objectID - 0x301;
                                goto joined_r0x0035f060;
                            }
                            IDcheckVar = 0x34b;
                            goto LAB_0035efea;
                        }
                    }
                }
            }
            else if (m_objectID < 0x3d0)
            {
                if (m_objectID < 0x3ce)
                {
                    if (m_objectID < 0x389)
                    {
                        if (m_objectID < 0x387)
                        {
                            if (m_objectID < 0x37a)
                            {
                                if (m_objectID < 0x378)
                                {
                                    if (m_objectID < 0x36d)
                                        return;
                                    if (0x36e < m_objectID)
                                    {
                                        optimizedID = m_objectID - 0x370;
                                        goto joined_r0x0035f060;
                                    }
                                }
                            }
                            else if (m_objectID != 0x37b)
                            {
                                if (m_objectID < 0x37b)
                                    return;
                                optimizedID = m_objectID - 0x37d;
                                goto joined_r0x0035f30c;
                            }
                        }
                    }
                    else if (m_objectID < 0x3c2)
                    {
                        if (m_objectID < 0x3bf)
                        {
                            if (0x3ba < m_objectID)
                            {
                                optimizedID = m_objectID - 0x3bc;
                                goto joined_r0x0035f30c;
                            }
                            if (m_objectID < 0x3b8)
                            {
                                IDcheckVar = 0x3ab;
                                goto LAB_0035efea;
                            }
                        }
                    }
                    else
                    {
                        if (m_objectID < 0x3c4)
                            return;
                        if (0x3c5 < m_objectID)
                        {
                            optimizedID = m_objectID - 0x3c7;
                            goto joined_r0x0035f060;
                        }
                    }
                }
            }
            else if (m_objectID < 0x4f4)
            {
                if (m_objectID < 0x4f2)
                {
                    if (m_objectID < 0x411)
                    {
                        if (m_objectID < 0x409)
                        {
                            if (m_objectID < 0x3d4)
                                return;
                            if (0x3dc < m_objectID)
                            {
                                if (m_objectID - 0x3e9U < 5)
                                {
                                    SGO_COLOR_SPRITE(getColorFrame(frame).c_str(), 2 , 1006)
                                }
                                return;
                            }
                        LAB_0035ff7e:
                            SC_COLOR_SPRITE(frame.c_str(), 2);
                            m_colorSprite->setDontDraw(true);
                            return;
                        }
                    }
                    else if (m_objectID != 0x426)
                    {
                        if (m_objectID < 0x427)
                        {
                            if (m_objectID - 0x41dU < 2)
                            {
                                SGO_COLOR_SPRITE(getColorFrame(frame).c_str(), 2, 1010);
                            }
                            return;
                        }
                        optimizedID = m_objectID - 0x487;
                        goto joined_r0x0035f2c8;
                    }
                }
            }
            else if (m_objectID < 0x5a1)
            {
                if (m_objectID < 0x597)
                {
                    if (m_objectID < 0x556)
                    {
                        if (m_objectID < 0x544)
                        {
                            IDcheckVar = 0x4fc;
                        LAB_0035f28e:
                            if (m_objectID != IDcheckVar)
                                return;
                            goto LAB_0035ffb6;
                        }
                    }
                    else if (8 < m_objectID - 0x56bU)
                        return;
                }
            }
            else
            {
                if (m_objectID < 0x5a2)
                    return;
                if (0x5a8 < m_objectID)
                {
                    optimizedID = m_objectID - 0x5b5;
                    goto joined_r0x0035f192;
                }
            }
        }
        else if (m_objectID != 0x70b)
        {
            if (0x70b < m_objectID)
            {
                if (m_objectID == 0x82d)
                    goto LAB_0035fcf8;
                if (0x82d < m_objectID)
                {
                    if (m_objectID < 0x86b)
                    {
                        if (m_objectID < 0x85f)
                        {
                            if (m_objectID < 0x854)
                            {
                                if (m_objectID < 0x84d)
                                {
                                    if (m_objectID < 0x832)
                                        return;
                                    if (0x847 < m_objectID)
                                    {
                                        optimizedID = m_objectID - 0x84a;
                                        goto joined_r0x0035f4a2;
                                    }
                                }
                            }
                            else
                            {
                                if (m_objectID < 0x855)
                                    return;
                                if (0x858 < m_objectID)
                                {
                                    optimizedID = m_objectID - 0x85a;
                                    goto joined_r0x0035fbc8;
                                }
                            }
                        }
                    }
                    else if (m_objectID < 0x90a)
                    {
                        if (m_objectID < 0x89f)
                        {
                            if (m_objectID < 0x86c)
                                return;
                            if (0x880 < m_objectID)
                            {
                                optimizedID = m_objectID - 0x883;
                            joined_r0x0035f4f6:
                                if (0x1a < optimizedID)
                                    return;
                            }
                        }
                    }
                    else if (m_objectID < 0x92c)
                    {
                        if ((m_objectID < 0x924) && (0x14 < m_objectID - 0x90bU))
                            return;
                    }
                    else
                    {
                        optimizedID = m_objectID - 0x931;
                    joined_r0x0035f526:
                        if (2 < optimizedID)
                            return;
                    }
                    goto LAB_0035fd4a;
                }
                if (m_objectID < 0x782)
                {
                    if (0x77e < m_objectID)
                        goto LAB_0035fc4c;
                    if (m_objectID < 0x742)
                    {
                        if (m_objectID < 0x739)
                        {
                            if (m_objectID != 0x70f)
                            {
                                if (m_objectID < 0x710)
                                {
                                    IDcheckVar = 0x70d;
                                }
                                else
                                {
                                    if (m_objectID == 0x711)
                                        goto LAB_0035fc4c;
                                    IDcheckVar = 0x733;
                                }
                                goto LAB_0035efea;
                            }
                            goto LAB_0035fc4c;
                        }
                    }
                    else
                    {
                        if (0x75d < m_objectID)
                        {
                            optimizedID = m_objectID - 0x776;
                            goto joined_r0x0035f30c;
                        }
                        if (0x744 < m_objectID)
                            goto LAB_0035fc4c;
                        IDcheckVar = 0x744;
                    LAB_0035f8f8:
                        if (m_objectID != IDcheckVar)
                            return;
                    }
                    /* I Fucking love macros... */
                    SC_COLOR_SPRITE(__Subroutine_Replace_All(frame, "_00", "_color_00").c_str(), 2);
                    return;
                }
                if (m_objectID < 0x807)
                {
                    if (m_objectID < 0x803)
                    {
                        if (m_objectID != 0x788)
                        {
                            if (0x788 < m_objectID)
                            {
                                if (m_objectID != 0x7fe)
                                    return;
                                goto LAB_0035fcf8;
                            }
                            if (0x786 < m_objectID)
                                return;
                        }
                        goto LAB_0035ffb6;
                    }
                }
                else if (m_objectID < 0x81d)
                {
                    if (m_objectID < 0x816)
                    {
                        IDcheckVar = 0x811;
                        goto LAB_0035efea;
                    }
                }
                else if (10 < m_objectID - 0x81eU)
                    return;
            LAB_0035fcf8:
                SGO_COLOR_SPRITE(__Subroutine_Replace_All(frame, "_00", "_color_00").c_str(), 2, 2);
                return;
            }
            if (m_objectID < 0x659)
            {
                if ((m_objectID < 0x657) && (m_objectID != 0x632))
                {
                    if (m_objectID < 0x633)
                    {
                        if (m_objectID != 0x5ec)
                        {
                            if (m_objectID < 0x5ed)
                            {
                                if (m_objectID != 0x5e3)
                                {
                                    if (m_objectID < 0x5e4)
                                    {
                                        if (m_objectID != 0x5c1)
                                        {
                                            bVar7 = m_objectID == 0x5d8;
                                            goto LAB_0035efec;
                                        }
                                    }
                                    else if (m_objectID < 0x5e6)
                                        return;
                                    goto LAB_0035fc4c;
                                }
                            }
                            else
                            {
                                if (m_objectID < 0x619)
                                {
                                    if (m_objectID < 0x610)
                                    {
                                        if (m_objectID == 0x5ed)
                                        {
                                            SGO_COLOR_SPRITE("waterfallAnim_color_007.png", 2, 1012);
                                        }
                                        return;
                                    }
                                    goto LAB_0035ff7e;
                                }
                                if (1 < m_objectID - 0x62eU)
                                    return;
                            }
                        }
                    LAB_0035fe42:
                        SGO_COLOR_SPRITE(__Subroutine_Replace_All(frame, "_00", "_color_00").c_str(), 2, 1012);
                        return;
                    }
                    if (m_objectID == 0x63f)
                    {
                        LAB_0035ffb6:
                            SGO_COLOR_SPRITE(getColorFrame(frame).c_str(), 2, 1012);
                            return;
                    }
                    if (m_objectID < 0x640)
                    {
                        if (m_objectID != 0x637)
                        {
                            if (0x637 < m_objectID)
                            {
                                optimizedID = m_objectID - 0x639;
                                goto joined_r0x0035f30c;
                            }
                            if (m_objectID != 0x634)
                            {
                                IDcheckVar = 0x636;
                                goto LAB_0035f28e;
                            }
                            goto LAB_0035ffb6;
                        }
                    }
                    else
                    {
                        if (m_objectID == 0x651)
                            goto LAB_0035fe42;
                        if (0x651 < m_objectID)
                        {
                            optimizedID = m_objectID - 0x653;
                            goto joined_r0x0035f2c8;
                        }
                        if (0x641 < m_objectID)
                            return;
                    }
                }
            }
            else if (m_objectID < 0x6a8)
            {
                if (m_objectID < 0x695)
                {
                    if (m_objectID < 0x66b)
                    {
                        if (m_objectID < 0x669)
                        {
                            if (m_objectID < 0x661)
                            {
                                if (m_objectID < 0x65d)
                                {
                                    IDcheckVar = 0x65b;
                                    goto LAB_0035efea;
                                }
                            }
                            else
                            {
                                optimizedID = m_objectID - 0x665;
                            joined_r0x0035f30c:
                                if (optimizedID > 1)
                                    return;
                            }
                        }
                    }
                    else
                    {
                        if (m_objectID < 0x66d)
                            return;
                        if (0x66e < m_objectID)
                        {
                            optimizedID = m_objectID - 0x671;
                            goto joined_r0x0035f30c;
                        }
                    }
                }
            }
            else if (m_objectID < 0x6f9)
            {
                if (m_objectID < 0x6f5)
                {
                    if (m_objectID < 0x6ac)
                        return;
                    if (0x6ae < m_objectID)
                    {
                        optimizedID = m_objectID - 0x6c6;
                        goto joined_r0x0035f2c8;
                    }
                }
            }
            else if (m_objectID != 0x705)
            {
                if (m_objectID < 0x706)
                {
                    IDcheckVar = 0x701;
                }
                else
                {
                    if (m_objectID == 0x707)
                        goto LAB_0035fc4c;
                    IDcheckVar = 0x709;
                }
            LAB_0035efea:
                bVar7 = m_objectID == IDcheckVar;
            LAB_0035efec:
                if (!bVar7)
                    return;
            }
        }
    LAB_0035fc4c:
        SC_COLOR_SPRITE(getColorFrame(frame).c_str(), 2);
        return;
    }
    if (m_objectID == 0xbd3)
        goto LAB_0035fc4c;
    if (m_objectID < 0xbd4)
    {
        if (m_objectID != 0xa54)
        {
            if (0xa54 < m_objectID)
            {
                if (m_objectID != 0xaac)
                {
                    if (m_objectID < 0xaad)
                    {
                        if (m_objectID != 0xa71)
                        {
                            if (m_objectID < 0xa72)
                            {
                                if (m_objectID != 0xa64)
                                {
                                    if (m_objectID < 0xa65)
                                    {
                                        if (m_objectID != 0xa5b)
                                        {
                                            if (m_objectID < 0xa5c)
                                            {
                                                if ((m_objectID != 0xa57) && (m_objectID != 0xa59))
                                                    return;
                                            }
                                            else if ((m_objectID != 0xa5e) && (m_objectID != 0xa61))
                                                return;
                                        }
                                    }
                                    else if (m_objectID != 0xa6a)
                                    {
                                        if (m_objectID < 0xa6b)
                                        {
                                            if ((m_objectID != 0xa66) && (m_objectID != 0xa68))
                                                return;
                                        }
                                        else if ((m_objectID != 0xa6c) && (m_objectID != 0xa6e))
                                            return;
                                    }
                                }
                            }
                            else if (m_objectID < 0xa82)
                            {
                                if ((m_objectID < 0xa7f) && (m_objectID != 0xa77))
                                {
                                    if (m_objectID < 0xa78)
                                    {
                                        if (m_objectID != 0xa74)
                                            return;
                                    }
                                    else if ((m_objectID != 0xa79) && (m_objectID != 0xa7c))
                                        return;
                                }
                            }
                            else if (m_objectID < 0xa8d)
                            {
                                if (m_objectID < 0xa88)
                                {
                                    optimizedID = m_objectID - 0xa83;
                                    goto joined_r0x0035fbc8;
                                }
                            }
                            else
                            {
                                optimizedID = m_objectID - 0xa8f;
                            joined_r0x0035f4a2:
                                if (1 < optimizedID)
                                    return;
                            }
                        }
                        goto LAB_0035fd4a;
                    }
                    if (m_objectID != 0xad8)
                    {
                        if (m_objectID < 0xad9)
                        {
                            if (m_objectID != 0xac3)
                            {
                                if (m_objectID < 0xac4)
                                {
                                    if (m_objectID != 0xab5)
                                    {
                                        if (m_objectID < 0xab6)
                                        {
                                            if (m_objectID != 0xaaf)
                                            {
                                                IDcheckVar = 0xab2;
                                                goto LAB_0035f88c;
                                            }
                                        }
                                        else if (8 < m_objectID - 0xab8U)
                                            return;
                                    }
                                }
                                else
                                {
                                    if (m_objectID < 0xad3)
                                    {
                                        if ((0xacb < m_objectID) || (m_objectID == 0xac6))
                                            goto LAB_0035fdf0;
                                        IDcheckVar = 0xac9;
                                    }
                                    else
                                    {
                                        IDcheckVar = 0xad5;
                                    }
                                LAB_0035f88c:
                                    if (m_objectID != IDcheckVar)
                                        return;
                                }
                            }
                        }
                        else if (m_objectID != 0xaf2)
                        {
                            if (m_objectID < 0xaf3)
                            {
                                if (m_objectID != 0xae1)
                                {
                                    if (m_objectID < 0xae2)
                                    {
                                        if (m_objectID != 0xadb)
                                        {
                                            IDcheckVar = 0xade;
                                            goto LAB_0035f88c;
                                        }
                                    }
                                    else if (m_objectID != 0xaec)
                                    {
                                        IDcheckVar = 0xaef;
                                        goto LAB_0035f88c;
                                    }
                                }
                            }
                            else
                            {
                                if (m_objectID < 0xb16)
                                {
                                    if (0xaf7 < m_objectID)
                                        goto LAB_0035fd4a;
                                    IDcheckVar = 0xaf5;
                                    goto LAB_0035f88c;
                                }
                                if (0xb21 < m_objectID)
                                {
                                    IDcheckVar = 0xb57;
                                    goto LAB_0035f8f8;
                                }
                            }
                        }
                    }
                }
            LAB_0035fdf0:
                SGO_COLOR_SPRITE(__Subroutine_Replace_All(frame, "_001.png", "_2_001.png").c_str(), 2, 2);
                return;
            }
            if (m_objectID < 0x9fb)
            {
                if (m_objectID < 0x9f6)
                {
                    if (m_objectID < 0x9c0)
                    {
                        if (m_objectID < 0x9b8)
                        {
                            if (m_objectID < 0x997)
                            {
                                if (m_objectID < 0x994)
                                {
                                    if (m_objectID < 0x95c)
                                        return;
                                    if (0x965 < m_objectID)
                                    {
                                        optimizedID = m_objectID - 0x967;
                                        goto joined_r0x0035f4f6;
                                    }
                                }
                            }
                            else
                            {
                                if (m_objectID < 0x998)
                                    return;
                                if (0x9a1 < m_objectID)
                                {
                                    optimizedID = m_objectID - 0x9a3;
                                    goto joined_r0x0035fb76;
                                }
                            }
                        }
                    }
                    else if (m_objectID < 0x9eb)
                    {
                        if ((m_objectID < 0x9de) && ((m_objectID < 0x9c2 || ((0x9d6 < m_objectID && (m_objectID != 0x9dc))))))
                            return;
                    }
                    else if (m_objectID != 0x9f0)
                    {
                        if (m_objectID < 0x9f1)
                        {
                            if ((m_objectID != 0x9ec) && (m_objectID != 0x9ee))
                                return;
                        }
                        else if ((m_objectID != 0x9f2) && (m_objectID != 0x9f4))
                            return;
                    }
                }
            }
            else if (m_objectID != 0xa12)
            {
                if (m_objectID < 0xa13)
                {
                    if (m_objectID != 0xa06)
                    {
                        if (m_objectID < 0xa07)
                        {
                            if (m_objectID < 0xa00)
                            {
                                if ((m_objectID < 0x9fe) && (m_objectID != 0x9fc))
                                    return;
                            }
                            else if ((m_objectID != 0xa02) && (m_objectID != 0xa04))
                                return;
                        }
                        else if (m_objectID != 0xa0c)
                        {
                            if (m_objectID < 0xa0d)
                            {
                                if ((m_objectID != 0xa08) && (m_objectID != 0xa0a))
                                    return;
                            }
                            else if ((m_objectID != 0xa0e) && (m_objectID != 0xa10))
                                return;
                        }
                    }
                }
                else if (m_objectID < 0xa47)
                {
                    if ((m_objectID < 0xa42) && ((m_objectID < 0xa14 || ((0xa20 < m_objectID && (8 < m_objectID - 0xa26U))))))
                        return;
                }
                else if (m_objectID < 0xa4b)
                {
                    if (m_objectID < 0xa48)
                    {
                        SGO_COLOR_SPRITE(__Subroutine_Replace_All("pixelart_454_001.png", "_001.png", "_color_001.png").c_str(), 2,2);
                        return;
                    }
                }
                else if (((m_objectID != 0xa50) && (m_objectID != 0xa52)) && (m_objectID != 0xa4d))
                    return;
            }
        }
    }
    else if (m_objectID < 0xe08)
    {
        if (m_objectID < 0xe02)
        {
            if (m_objectID < 0xc5f)
            {
                if ((m_objectID < 0xc5a) && (m_objectID != 0xc1f))
                {
                    if (m_objectID < 0xc20)
                    {
                        if (m_objectID < 0xbfb)
                        {
                            if ((m_objectID < 0xbee) && (m_objectID != 0xbea))
                            {
                                if (0xbea < m_objectID)
                                {
                                    IDcheckVar = 0xbec;
                                    goto LAB_0035efea;
                                }
                                optimizedID = m_objectID - 0xbda;
                            joined_r0x0035f192:
                                if (3 < optimizedID)
                                    return;
                            }
                        }
                        else if (m_objectID != 0xc10)
                        {
                            if (m_objectID < 0xc11)
                            {
                                optimizedID = m_objectID - 0xc08;
                            joined_r0x0035eefe:
                                if (6 < optimizedID)
                                    return;
                            }
                            else if (m_objectID != 0xc12)
                            {
                                if (m_objectID != 0xc1d)
                                    return;
                                goto LAB_0035fd4a;
                            }
                        }
                        goto LAB_0035fc4c;
                    }
                    if (m_objectID < 0xc3a)
                    {
                        if ((m_objectID < 0xc2e) && (m_objectID != 0xc25))
                        {
                            if (m_objectID < 0xc26)
                            {
                                if ((m_objectID != 0xc21) && (m_objectID != 0xc23))
                                    return;
                            }
                            else if ((m_objectID != 0xc28) && (m_objectID != 0xc2a))
                                return;
                        }
                    }
                    else
                    {
                        if (m_objectID < 0xc3c)
                            return;
                        if (0xc45 < m_objectID)
                        {
                            optimizedID = m_objectID - 0xc47;
                            goto joined_r0x0035fbe8;
                        }
                    }
                }
            }
            else if (m_objectID < 0xdb7)
            {
                if (m_objectID < 0xdad)
                {
                    if (m_objectID < 0xd18)
                    {
                        if ((m_objectID < 0xd08) && ((m_objectID < 0xc61 || ((0xc6a < m_objectID && (0x99 < m_objectID - 0xc6dU))))))
                            return;
                    }
                    else if (m_objectID < 0xd46)
                    {
                        if ((m_objectID < 0xd20) && (m_objectID != 0xd1e))
                            return;
                    }
                    else if (0x5b < m_objectID - 0xd4aU)
                        return;
                }
            }
            else if (m_objectID < 0xde4)
            {
                if (m_objectID < 0xddd)
                {
                    if (m_objectID < 0xdb8)
                        return;
                    if (0xdd5 < m_objectID)
                    {
                        optimizedID = m_objectID - 0xdd8;
                        goto joined_r0x0035f526;
                    }
                }
            }
            else if (m_objectID != 0xdef)
            {
                if (m_objectID < 0xdf0)
                {
                    optimizedID = m_objectID - 0xde7;
                    joined_r0x0035fbc8:
                        if (3 < optimizedID)
                            return;
                }
                else if (0xc < m_objectID - 0xdf3U)
                    return;
            }
        }
    }
    else if (m_objectID < 0xfed)
    {
        if (m_objectID < 0xfe6)
        {
            if (m_objectID < 0xfaa)
            {
                if (m_objectID < 4000)
                {
                    if (m_objectID < 0xecf)
                    {
                        if ((m_objectID < 0xec4) && ((m_objectID < 0xe09 || ((0xe0d < m_objectID && (0x4c < m_objectID - 0xe76U))))))
                            return;
                    }
                    else if (m_objectID != 0xed0)
                    {
                        if (m_objectID < 0xed0)
                            return;
                        optimizedID = m_objectID - 0xed2;
                    joined_r0x0035fc3a:
                        if (5 < optimizedID)
                            return;
                    }
                }
            }
            else if (m_objectID < 0xfc8)
            {
                if (m_objectID < 0xfc2)
                {
                    if (m_objectID < 0xfac)
                        return;
                    if (0xfb6 < m_objectID)
                    {
                        optimizedID = m_objectID - 0xfb8;
                        goto joined_r0x0035fc3a;
                    }
                }
            }
            else if (m_objectID < 0xfe3)
            {
                if (m_objectID < 0xfe0)
                {
                    optimizedID = m_objectID - 0xfce;
                joined_r0x0035fb76:
                    if (0x10 < optimizedID)
                        return;
                }
            }
            else if (m_objectID != 0xfe4)
                return;
        }
    }
    else if (m_objectID < 0x1055)
    {
        if (m_objectID < 0x104e)
        {
            if (m_objectID < 0x103c)
            {
                if (m_objectID < 0x103a)
                {
                    if (m_objectID < 0xff5)
                        return;
                    if (0x1031 < m_objectID)
                    {
                        optimizedID = m_objectID - 0x1034;
                        goto joined_r0x0035fbc8;
                    }
                }
            }
            else
            {
                if (m_objectID < 0x103e)
                    return;
                if (0x1040 < m_objectID)
                {
                    optimizedID = m_objectID - 0x1043;
                joined_r0x0035fbe8:
                    if (9 < optimizedID)
                        return;
                }
            }
        }
    }
    else if (m_objectID < 0x1109)
    {
        if ((m_objectID < 0x10da) && ((m_objectID < 0x1059 || ((0x1068 < m_objectID && (0x6e < m_objectID - 0x106aU))))))
            return;
    }
    else if (m_objectID < 0x1130)
    {
        if (m_objectID < 0x1120)
        {
            optimizedID = m_objectID - 0x110a;
            goto joined_r0x0035fc3a;
        }
    }
    else if (0x8a < m_objectID - 0x1131U)
        return;
LAB_0035fd4a:
    SGO_COLOR_SPRITE(__Subroutine_Replace_All(frame, "_001.png", "_color_001.png").c_str(), 2, 2);
    return;
}

void GameObject::addColorSpriteToParent(bool reorderChild)
{
  
    if ((m_colorSprite != nullptr) && (m_isGroupDisabled == false)){
        if (m_shouldBlendBaseColor == m_shouldBlendDetailColor) {
            return addColorSpriteToSelf();
        }
       
        m_colorSpriteLocked = false;
        int zlayer = static_cast<int>(getObjectZLayer());
        if ((m_shouldBlendDetailColor) && (m_colorZLayerRelated)) {
            zlayer++;
        }
        m_colorSprite->setScaleX(getScaleX());
        m_colorSprite->setScaleY(getScaleY());
        m_colorSprite->setRotationX(getRotationX());
        m_colorSprite->setRotationY(getRotationY());
        cocos2d::CCSprite* parent = (cocos2d::CCSprite*)parentForZLayer(zlayer, m_shouldBlendDetailColor, getParentMode());
        if (m_colorSprite->getParent() == parent) {
            if (reorderChild) {
                m_colorSprite->reorderChild(parent, getObjectZOrder());
            }
        }
        else {
            m_colorSprite->removeFromParentAndCleanup(0);
            m_colorSprite->addChild(parent, getObjectZOrder());
          
            if (m_colorSpriteLocked) {
                m_colorSprite->setPosition(getPosition());
            }
        }
    }
}

void GameObject::addColorSpriteToSelf(){
    if (this == reinterpret_cast<GameObject *>(getParent())) return;
    m_colorSpriteLocked = true;
    m_colorSprite->removeFromParentAndCleanup(false);
    addChild(m_colorSprite, m_colorZLayerRelated ? 100 : -100);
    m_colorSprite->setScale(1);
    m_colorSprite->setRotation(0);
    auto contentSize = getContentSize();
    m_colorSprite->setPosition(CCPointMake(contentSize.width * 0.5, contentSize.height * 0.5));
}; 

cocos2d::CCSprite * GameObject::addCustomBlackChild(std::string frameName, float blackNessOpacity, bool customColor)
{
    cocos2d::CCSprite *child;
    if (customColor) {
        return addCustomColorChild(frameName);
    } else{
        child = addCustomChild(frameName,cocos2d::CCPointZero, -2);
        // Unknown...
        // pCVar1->setColor();
        m_useBlackOpacity = blackNessOpacity;
        child->setOpacity(blackNessOpacity * 255.0);
        m_hasExtendedCollision2 = true;
    }
    return child;
}

cocos2d::CCSprite* GameObject::addCustomChild(std::string pszSpriteFrameName, cocos2d::CCPoint pos, int zOrder)
{
    cocos2d::CCSprite* sprite = cocos2d::CCSprite::createWithSpriteFrameName(pszSpriteFrameName.c_str());
    sprite->setPosition(convertToNodeSpace(pos) + pos);
    addChild(sprite, zOrder);
    return sprite;
}


cocos2d::CCSprite * GameObject::addCustomColorChild(std::string frame){  
    m_colorSprite = m_colorSprite;
    if (m_colorSprite != nullptr) {
        m_colorSprite->removeFromParent();
        if (m_colorSprite != nullptr) {
            m_colorSprite->release();
        }
        m_colorSprite = nullptr;
    }
    createSpriteColor(2);
    m_colorSprite = cocos2d::CCSprite::createWithSpriteFrameName(frame.c_str());
    m_colorSprite->retain(); 
    m_colorSprite->setPosition(getPosition());
    return m_colorSprite;
}

void GameObject::addEmptyGlow()
{
    createGlow("emptyGlow.png");
    if (m_glowSpriteMain != nullptr) {
        m_glowSpriteMain->setDontDraw(true);
    }
    return;
}


/* This has a higher chance of getting of recovering the switch case
 * sequences so I gave the labels names instead of leaving it with numbers 
 * I was able to do a bit of optimizing with this one but not much. 
 * However feel free to make a Pull request if you manage to solve this puzzle and 
 * create switch-cases instead of there being a cascade if-statements...
 */
void GameObject::addGlow(std::string frame)
{
    GameManager *GM;
    int extraObjectID;
    int m_objectID;
    int extraObjectID2;
    bool checkB;
    bool checkA;

    if ((m_inLevelEditor) ||
        /* GameManager Boolean needs finding, Feel free to make a PR if found... */
        (((GM = GameManager::sharedState(), /* GM->field143_0x29e != false */ 1 &&
                                                (m_doesntFade == false)) ||
          (m_isHide))))
        return;

    if (m_objectID != 0x143)
    {
        if (m_objectID < 0x144)
        {
            if (m_objectID < 0xbd)
            {
                if (m_objectID < 0xb7)
                {
                    if (m_objectID < 0x5d)
                    {
                        if (m_objectID < 0x5a)
                        {
                            if (m_objectID < 0x29)
                            {
                                if (m_objectID < 0x27)
                                {
                                    if (8 < m_objectID)
                                    {
                                        m_objectID = m_objectID + -0x23;
                                        goto OBJECT_ID_IS_1_AND_NOT_0;
                                    }
                                    if (m_objectID < 6)
                                    {
                                        extraObjectID2 = m_objectID - 1;
                                        goto LESSTHAN_2_OR_3;
                                    }
                                }
                            }
                            else if (m_objectID < 0x49)
                            {
                                if ((m_objectID < 0x41) && (m_objectID != 0x2c))
                                {
                                    if (m_objectID != 0x3e)
                                        return;
                                }
                            }
                            else
                            {
                                if (m_objectID < 0x4a)
                                    return;
                                if (0x4e < m_objectID)
                                {
                                    extraObjectID2 = m_objectID - 0x51;
                                    goto LESSTHAN_2_OR_3;
                                }
                            }
                        }
                    }
                    else if (m_objectID < 0x8e)
                    {
                        if (m_objectID < 0x8c)
                        {
                            if (0x77 < m_objectID)
                            {
                                m_objectID = m_objectID + -0x79;
                                goto OBJECT_ID_IS_1_AND_NOT_0;
                            }
                            if (m_objectID < 0x74)
                            {
                                if (m_objectID < 0x5f)
                                    return;
                                if (0x60 < m_objectID)
                                {
                                    if (m_objectID != 0x67)
                                        return;
                                }
                            }
                        }
                    }
                    else
                    {
                        if (m_objectID < 0xa4)
                        {
                            if (0x9f < m_objectID)
                                goto SET_GLOW;
                            extraObjectID = -0x8f;
                            OVER_3_OR_EXACTLY_4:
                                checkA = (m_objectID + extraObjectID) > 3;
                                checkB = m_objectID + extraObjectID == 4;
                        }
                        else
                        {
                            checkA = 0xd < m_objectID - 0xa5;
                            checkB = m_objectID - 0xa5 == 0xe;
                        }
                        CHECK_A_TRUE_B_FALSE:
                            if (checkA && !checkB) return;

                    }
                }
            }
            else if (m_objectID < 0x10a)
            {
                if (m_objectID < 0x107)
                {
                    if (m_objectID < 0xdd)
                    {
                        if (m_objectID < 0xd7)
                        {
                            if (0xd2 < m_objectID)
                            {
                                if ((m_objectID < 0xd4) || (m_objectID == 1 && m_objectID != 0)) 
                                    return; 
                                
                            }
                            if ((m_objectID < 200) && (m_objectID != 0xc0))
                            {
                                if ((m_objectID < 0xc0) || (m_objectID >= 197))
                                    return;
                            }
                        }
                    }
                    else
                    {
                        if (0x102 < m_objectID)
                        {
                            /* I think this is right??? */
                            if (m_objectID > 261 ) return;
                            
                        OBJECT_ID_IS_1_AND_NOT_0:
                            if (m_objectID == 1 && m_objectID != 0) return;
                           
                        }
                        if (m_objectID < 0xfc)
                        {
                            extraObjectID2 = m_objectID - 0xf7;
                        LESSTHAN_2_OR_3:
                            checkA = 2 < extraObjectID2;
                            checkB = extraObjectID2 == 3;
                            goto CHECK_A_TRUE_B_FALSE;
                        }
                    }
                }
            }
            else if (m_objectID != 299)
            {
                if (m_objectID < 300)
                {
                    if (m_objectID < 0x114)
                    {
                        if (m_objectID < 0x112)
                        {
                            checkA = 4 < m_objectID - 0x10bU;
                            checkB = m_objectID - 0x10bU == 5;
                            goto CHECK_A_TRUE_B_FALSE;
                        }
                    }
                    else if (m_objectID != 0x123)
                    {
                        if (0x123 < m_objectID)
                        {
                            extraObjectID2 = m_objectID - 0x126;
                            goto LESSTHAN_2_OR_3;
                        }
                        if (m_objectID != 0x121) return;
                    }
                }
                else if (m_objectID != 0x135)
                {
                    if (m_objectID < 0x136)
                    {
                        if ((m_objectID != 0x131) && (m_objectID != 0x133))
                        {
                            extraObjectID = 0x12d;
                            if (m_objectID != extraObjectID) return;
                        }
                    }
                    else if (m_objectID != 0x13b)
                    {
                        if (m_objectID < 0x13c)
                        {
                            extraObjectID = 0x137;
                        }
                        else
                        {
                            if (m_objectID == 0x13d)
                                goto SET_GLOW;
                            if (m_objectID != 0x141){
                                return;
                            }
                        }
                    EXOBJID_AND_OBJID_MATCH:
                        if (m_objectID != extraObjectID) return;
                    }
                }
            }
        }
        else if (m_objectID < 0x2c9)
        {
            if ((m_objectID < 0x2c5) && (m_objectID != 0x188))
            {
                if (m_objectID < 0x189)
                {
                    if (m_objectID != 0x159)
                    {
                        if (m_objectID < 0x15a)
                        {
                            if (m_objectID != 0x14d)
                            {
                                if (m_objectID < 0x14e)
                                {
                                    if (m_objectID < 0x146)
                                        return;
                                    if (0x149 < m_objectID)
                                    {
                                        if (m_objectID != 0x14b) return;
                                    }
                                }
                                else if ((m_objectID != 0x153) && (m_objectID != 0x157))
                                {
                                    if (m_objectID != 0x151) return;
                                }
                            }
                        }
                        else if (m_objectID != 0x163)
                        {
                            if (m_objectID < 0x164)
                            {
                                if (
                                    (m_objectID != 0x15f) && 
                                    (m_objectID != 0x161) && 
                                    (m_objectID != 0x15d)
                                ) 
                                    return;
                            }
                            else
                            {
                                if (m_objectID < 0x171)
                                    return;
                                if ((0x172 < m_objectID) && (m_objectID > 0x175))
                                {
                                    return;   
                                }
                            }
                        }
                    }
                }
                else if (m_objectID < 0x1e5)
                {
                    if (m_objectID < 0x1e3)
                    {
                        if (0x1cb < m_objectID)
                        {
                            checkA = 7 < m_objectID - 0x1d3U;
                            checkB = m_objectID - 0x1d3U == 8;
                            goto CHECK_A_TRUE_B_FALSE;
                        }
                        if (m_objectID < 0x1ca)
                        {
                            extraObjectID2 = m_objectID - 0x18d;
                            goto LAB_0035bad8;
                        }
                    }
                }
                else if (m_objectID < 0x28d)
                {
                    if (m_objectID < 0x28b)
                    {
                        m_objectID = m_objectID + -0x1ec;
                        goto OBJECT_ID_IS_1_AND_NOT_0;
                    }
                }
                else
                {
                    if (m_objectID < 0x295)
                        return;
                    if (0x29a < m_objectID)
                    {
                        checkA = 6 < m_objectID - 0x2a1U;
                        checkB = m_objectID - 0x2a1U == 7;
                        goto CHECK_A_TRUE_B_FALSE;
                    }
                }
            }
        }
        else if (m_objectID < 0x542)
        {
            if (m_objectID < 0x53a)
            {
                if (m_objectID < 0x4bb)
                {
                    if (m_objectID < 0x4b2)
                    {
                        if (m_objectID < 0x2e7)
                        {
                            if (m_objectID < 0x2e4)
                            {
                                extraObjectID2 = m_objectID - 0x2d6;
                                goto LESSTHAN_2_OR_3;
                            }
                        }
                        else if (m_objectID != 0x3fe)
                        {
                            if (m_objectID < 0x3fe)
                                return;
                            extraObjectID = -0x482;
                            goto OVER_3_OR_EXACTLY_4;
                        }
                    }
                }
                else if (m_objectID < 0x4f2)
                {
                    if (m_objectID < 0x4ec)
                    {
                        checkA = 5 < m_objectID - 0x4c4U;
                        checkB = m_objectID - 0x4c4U == 6;
                        goto CHECK_A_TRUE_B_FALSE;
                    }
                }
                else if (m_objectID != 0x532)
                {
                    if (m_objectID < 0x532)
                        return;
                    extraObjectID2 = m_objectID - 0x534;
                    goto LAB_0035bad8;
                }
            }
        }
        else if (m_objectID < 0x6c9)
        {
            if (m_objectID < 0x6c6)
            {
                if (0x6a8 < m_objectID)
                {
                    extraObjectID2 = m_objectID - 0x6ac;
                LAB_0035bad8:
                    checkA = 1 < extraObjectID2;
                    checkB = extraObjectID2 == 2;
                    goto CHECK_A_TRUE_B_FALSE;
                }
                if ((m_objectID < 0x6a5) && (m_objectID != 0x63a))
                {
                    if (m_objectID < 0x63a)
                        return;
                    m_objectID = m_objectID + -0x653;
                    goto OBJECT_ID_IS_1_AND_NOT_0;
                }
            }
        }
        else if (m_objectID < 0x778)
        {
            if ((m_objectID < 0x774) && (m_objectID != 0x6d7))
            {
                if (m_objectID < 0x6d7)
                    return;
                extraObjectID2 = m_objectID - 0x76f;
                goto LAB_0035bad8;
            }
        } else {
            if ((m_objectID < 0xbbc) || ((0xbbd < m_objectID) && (m_objectID != 0xbd3))) return;
        }
    }
    SET_GLOW:
        createGlow(__Subroutine_Replace_All(frame, "_001.png", "_glow_001.png"));
}


cocos2d::CCSprite* GameObject::addInternalChild(cocos2d::CCSprite *sprite, std::string frame, cocos2d::CCPoint pos, int zOrder)
{
    auto child = cocos2d::CCSprite::createWithSpriteFrameName(frame.c_str());
    child->setPosition(sprite->convertToNodeSpace(cocos2d::CCPointZero) + pos);
    sprite->addChild(child, zOrder);
    return child;
}

cocos2d::CCSprite* GameObject::addInternalCustomColorChild(std::string frame, cocos2d::CCPoint pos, int zOrder){
 
  
    m_colorSprite = m_colorSprite;
    if (m_colorSprite != nullptr) {
        auto colorSpritePos = m_colorSprite->convertToNodeSpace(cocos2d::CCPointZero);
        m_colorSprite = cocos2d::CCSprite::createWithSpriteFrameName(frame.c_str());
        m_colorSprite->setPosition(colorSpritePos + pos);
        m_colorSprite->addChild(m_colorSprite, zOrder);
    }
    return m_colorSprite;
}


cocos2d::CCSprite* GameObject::addInternalGlowChild(std::string frame, cocos2d::CCPoint pos){

    if (m_glowSpriteMain != nullptr) {
        auto new_pos = m_glowSpriteMain->convertToNodeSpace(cocos2d::CCPointZero);
        m_glowSpriteMain = cocos2d::CCSprite::createWithSpriteFrameName(frame.c_str());
        m_glowSpriteMain->setPosition(pos + new_pos);
        /* Not sure exactly WTF Robtop wanted here... */
        m_glowSpriteMain->addChild(m_glowSpriteMain , -1);
    }
    return m_glowSpriteMain;
}


void GameObject::addMainSpriteToParent(bool reorderZOrder)
{
    int i;
    cocos2d::CCSprite *parent;
    updateBlendMode();
    /* Blame Geode, Not Robtop...*/
    i = static_cast<int>(getObjectZLayer());
    if ((((m_shouldBlendBaseColor) && (m_colorSprite != nullptr)) && (m_shouldBlendDetailColor == false)) && (m_colorZLayerRelated == false)) {
        i++;
    }
    m_colorSprite = (cocos2d::CCSprite*)parentForZLayer(i, m_shouldBlendBaseColor, getParentMode());
    parent = (cocos2d::CCSprite*)getParent();
    if (parent == m_colorSprite && reorderZOrder) {
        parent->reorderChild(this, getObjectZOrder());
    } else {
        removeFromParentAndCleanup(false);
        m_colorSprite->addChild(m_colorSprite, getObjectZOrder());
    }

    /* Not Sure WTF this is supposed to be... */
    m_isBlendingBatchNode = m_isBlendingBatchNode;
    if (m_shouldBlendBaseColor == false) {
        m_shouldBlendBaseColor = m_shouldBlendDetailColor;
    }
    m_isBlendingBatchNode = m_shouldBlendBaseColor;
    if (m_shouldBlendBaseColor != m_isBlendingBatchNode) {
        blendModeChanged();
    }
}


void GameObject::addNewSlope01(bool dontDraw)
{
  if (dontDraw) setDontDraw(true); 
  addCustomChild("blockOutline_14new_001.png",cocos2d::CCPointZero,2)->setRotation(-45.0f);
}



void GameObject::addNewSlope01Glow(bool dontDraw)
{
    if (m_glowSpriteMain != nullptr) {
        if (dontDraw) {
            m_glowSpriteMain->setDontDraw(true);
        }
        /* I think I'm starting to hate createSpriteFrameName, the c_str() is getting annoying... */
        cocos2d::CCSprite* slope = cocos2d::CCSprite::createWithSpriteFrameName(getGlowFrame("blockOutline_14new_001.png").c_str());
        slope->setRotation(-45.0f);
        m_glowSpriteMain->addChild(slope);
        slope->setPosition(m_glowSpriteMain->cocos2d::CCNode::convertToNodeSpace(cocos2d::CCPointZero));
    }
}

/* Another One https://youtube.com/watch?v=zIeA2N2Onb8 */

void GameObject::addNewSlope02(bool dontDraw)
{
    if (dontDraw) setDontDraw(true); 
    addCustomChild("blockOutline_15new_001.png",cocos2d::CCPointZero,2)->setRotation(-26.5f);
}


/* And Another One */
void GameObject::addNewSlope02Glow(bool dontDraw)
{
    if (m_glowSpriteMain != nullptr) {
        if (dontDraw) {
            m_glowSpriteMain->setDontDraw(true);
        }
        cocos2d::CCSprite* slope = cocos2d::CCSprite::createWithSpriteFrameName(getGlowFrame("blockOutline_15new_001.png").c_str());
        slope->setRotation(-26.5f);
        m_glowSpriteMain->addChild(slope);
        slope->setPosition(m_glowSpriteMain->cocos2d::CCNode::convertToNodeSpace(cocos2d::CCPointZero));
    }
}


void GameObject::addRotation(float x, float y){
    setRotationX(getRotationX() + x);
    setRotationY(getRotationY() + y);
}


void GameObject::addRotation(float angle)
{
    if (cocos2d::CCNode::getRotationX() == cocos2d::CCNode::getRotationY()) {
        setRotation(getRotation() + angle);
    }
    else {
        setRotationX(getRotationX() + angle);
        setRotationY(getRotationY() + angle);
    }
}


void GameObject::addToColorGroup(int groupID)
{

    if ((m_colorgroupCount < 10) && (groupID <= 9999)) {
        createColorGroupContainer(10);
        for (short i = 0; i < m_colorgroupCount; i++){
            if (m_colorGroups->at(i) == groupID){
                return;
            }
        }
        // Robtop, Please Tell me why you write code this way?
        m_colorGroups->operator[](m_colorgroupCount) = static_cast<short>(groupID);
        m_colorgroupCount++;
    }
}

void  GameObject::addToCustomScaleX(float scaleX)
{
    m_isDirty = true;
    m_isObjectRectDirty = true;
    m_scaleXOffset += scaleX;
    m_scaleX += scaleX;
}

void  GameObject::addToCustomScaleY(float scaleY)
{
    m_isDirty = true;
    m_isObjectRectDirty = true;
    m_scaleYOffset += scaleY;
    m_scaleY += scaleY;
}

/* Whoever said addToGroup had a returnType of void in the Geode-Bindings lied to you. it should return an integer... */
int GameObject::addToGroup(int groupID)

{  
    if ((m_groupCount < 10) && (groupID <= 9999)) {
        createGroupContainer(10);
        /* Ghidra made a while(true) loop when it shouldn't I at least hope robtop 
         * doesn't write these kinds of loops like that.*/
        for (int i = 0; i < m_groupCount; i++){
            if (m_groups->at(i) == groupID){
                return -1;
            }
        }
        m_groupCount++;
    } 
    return 0;
}


/* and Another One... */

void GameObject::addToOpacityGroup(int groupID)
{    
    if ((m_opacityGroupSize < 10) && (groupID <= 9999)) {
        createOpacityGroupContainer(10);
        for (short i = 0; i < m_opacityGroupSize; i++) {
            if (m_opacityGroups->at(i) == groupID) {
                return;
            }
        }
        m_opacityGroups->operator[](m_opacityGroupSize) = static_cast<short>(groupID);
        m_opacityGroupSize++;
    }   
    return;
}



void GameObject::addToTempOffset(double x, double y)
{
    if (m_shouldLockX == false) {
        m_lastPositionX += x;
    }
    m_lastPositionY += y;
}

// NOOP
void GameObject::animationTriggered(){};



static int _GLOBAL_UNIQUEID_ = 10;

void GameObject::assignUniqueID()
{
  m_uniqueID = _GLOBAL_UNIQUEID_;
  /* m_M_ID actually belongs to CCObject... */
  m_M_ID = _GLOBAL_UNIQUEID_;
  _GLOBAL_UNIQUEID_++;
}



bool GameObject::belongsToGroup(int groupID)
{
    if (m_groupCount > 0) {
        for (short i = 0; i < m_groupCount; i++) {
            if (m_groups->at(i) == groupID) {
                return true;
            }
        }
    }
    return false;
}

/* Unsure what it's returnType really is... */
/* Unknown Return: GameObject::blendModeChanged(){}; */



cocos2d::CCRect GameObject::calculateOrientedBox()
{
    m_shouldUseOuterOb = true;
    updateOrientedBox();
    return getObjectRect();
}

/* No it can't... */
bool GameObject::canAllowMultiActivate(){ 
    return false;
};


bool GameObject::canBeOrdered(){
    return false;
};


bool GameObject::canChangeCustomColor(){
    return canChangeMainColor() || canChangeSecondaryColor();
};


bool GameObject::canChangeMainColor(){
    return m_baseColor->m_defaultColorID != 0;
}


bool GameObject::canChangeSecondaryColor(){
    return (m_detailColor != nullptr) && (m_detailColor->m_defaultColorID != 0);
};


bool GameObject::canMultiActivate(bool p0){
    return false;
};



bool GameObject::canReverse(){
    /* Too Bad Robtop, I can Reverse this bullshit... */
    return false;
}



bool GameObject::canRotateFree(){

    int ot = static_cast<int>(m_objectType);
    /* if someone wants to fix this be my guest... */
    if ((ot < 0x1a) && ((1 << (ot & 0xff) & 0x2200001U) != 0)) {
        return m_isNoTouch;
    }
    return true;
}; 



void GameObject::claimParticle(){
    /* I don't think I need to say it again but blame Geode... */
    int zLayer = static_cast<int>(getObjectZLayer());
    auto parent = parentForZLayer(zLayer, true, getParentMode());
    auto order = parent->getZOrder();
    m_particles = ((m_inLevelEditor == false) ? 
        GameManager::sharedState()->m_playLayer->claimParticle(m_particleString, zLayer) : 
        GameManager::sharedState()->m_levelEditorLayer->claimParticle(m_particleString, zLayer)
    );

 
    setPosition(cocos2d::CCNode::getPosition());

    if (m_particles != nullptr) {
        if (m_particleScale == 0) {
            m_particles->setScaleX(getScaleX());
            m_particles->setScaleY(getScaleY());
        } else {
            m_particles->setScale(1);
        }
   
        m_particles->setRotation((m_particleLocked == false) ? getRotation(): 0.0f);
       
        if (m_particleUseObjectColor) {
            /* this may be a switchcase but I am uncertain of that at the moment... */
            if ((m_objectID == 0x62f) || (m_objectID == 0x632)) {
                if (m_particles != nullptr) {
                    /* Absolute Cancer... */
                    cocos2d::ccColor3B color = (m_colorSprite != nullptr) ? m_colorSprite->getColor() : getColor(); 
                    cocos2d::ccColor4F start_color4;
                    start_color4.r = color.r / 255.0f;
                    start_color4.g = color.g / 255.0f;
                    start_color4.b = color.b / 255.0f;
                    start_color4.a = 1.0f;
                    m_particles->setStartColor(start_color4);
                    cocos2d::ccColor4F end_color4;
                    end_color4.r = color.r / 255.0f;
                    end_color4.g = color.g / 255.0f;
                    end_color4.b = color.b / 255.0f;
                    end_color4.a = 0.0f;
                    m_particles->setEndColor(end_color4);

                    if (m_objectID == 0x632) {
                        m_particles->loadScaledDefaults(m_scaleX);
                    }
                }
            } else if (zLayer == 0x6a4) {
                /* Same Cancer I believe... */
                if (m_particles != nullptr) {
                    cocos2d::ccColor3B color = (m_colorSprite != nullptr) ? m_colorSprite->getColor() : getColor(); 
                    cocos2d::ccColor4F start_color4;
                    start_color4.r = color.r / 255.0f;
                    start_color4.g = color.g / 255.0f;
                    start_color4.b = color.b / 255.0f;
                    start_color4.a = 1.0f;
                    m_particles->setStartColor(start_color4);
                    cocos2d::ccColor4F end_color4;
                    end_color4.r = color.r / 255.0f;
                    end_color4.g = color.g / 255.0f;
                    end_color4.b = color.b / 255.0f;
                    end_color4.a = 0.0f;
                    m_particles->setEndColor(end_color4);
                }
            } else {
                if ((m_hasColorSprite == false) || (m_colorSprite == nullptr)) {
                    /* I can't unsee this X-X */
                    m_colorSprite = this;
                }
                updateParticleColor(getColor());
            }
        }
    }
};  

/* TODO: Deoptimize function? I don't think Robtop codes this way unless I'm somehow smart than him. */
cocos2d::ccColor3B GameObject::colorForMode(int colorID,bool useMain){

    bool unk;
    GJSpriteColor *spriteColor;
    cocos2d::ccColor3B color = m_groupColor;
    if (!colorID) {
        m_groupColor.r = 255;
        m_groupColor.g = 255;
        m_groupColor.b = 255;
    }
    else {
        m_groupColor = getActiveColorForMode(colorID, useMain);
    }
    if (!m_colorgroupCount) {
        UseBaseColor:
            if (useMain) {
                if (m_baseColorUsesHSV == false) {
                  return color;
                }
                spriteColor = m_baseColor;
                goto TransformColor;
            }
    } else {
        if (useMain) {
            unk = m_isDetailOnly ^ 1;
            SetGroupColor:
                m_groupColor = groupColor(color, unk);
                goto UseBaseColor;
        }
        unk = useMain;
        if (m_activeDetailColorID != 0x3f4) 
            goto SetGroupColor;
    }
    if (m_detailColorUsesHSV == false) {
        return color;
    }
    spriteColor = m_detailColor;
    TransformColor: {
        return GameToolbox::transformColor
                    (color,(spriteColor->m_hsv).h,(spriteColor->m_hsv).s,(spriteColor->m_hsv).v);
    }

}

void GameObject::commonInteractiveSetup()
{
    m_colorZLayerRelated = true;
    m_isGroupDisabled = true;
    m_colorSpriteLocked = true;
    m_particleUseObjectColor = true;
    m_objectType = 30;
    m_defaultZOrder = 9;
    setDefaultMainColorMode(1);
    if (((!m_inLevelEditor) && (!m_hasNoEffects)) && (m_objectID != 0x64e)) {
        createAndAddParticle(m_objectType,"keyEffect.plist",0, cocos2d::kCCPositionTypeGrouped);
        m_ParticlePostion = CCPointMake(0.0,-5.0);
    }
}


void GameObject::commonSetup()
{
    // Commented out because this class member is not defined yet...
    // m_inLevelEditor = GameManager::sharedState()->m_inLevelEditor;
    if ((m_inLevelEditor == false) && (GameManager::sharedState()->m_playLayer != nullptr)) {
        // m_goEffectManager = (GJEffectManager*)GameManager::sharedState()->m_playLayer->field1500_0x66c;
    }
    createSpriteColor(1);
    m_baseColor->m_defaultColorID = 1004;
    m_baseColor->m_colorID = 0;
    m_defaultZOrder = 2;
    m_enterValueX = -1;
    m_enterValueY = -1;
    m_opacityMod = 1.0;
    // Not Sure how to apporch m_random yet so I am commenting it out...
    //   uVar2 = (ulonglong)DAT_00abbc28;
    //   uVar4 = (unsigned int)(uVar2 * 0x343fd);
    m_enterReset = true;
    m_spriteWidthScale = 1.0;
    m_spriteHeightScale = 1.0;
    //   DAT_00abbc28 = uVar4 + 0x269ec3;
    //   DAT_00abbc2c = DAT_00abbc2c * 0x343fd + (int)(uVar2 * 0x343fd >> 0x20) +
    //                  (unsigned int)(0xffd9613c < uVar4);
    // m_random = (short)(int)(((float)(longlong)(int)(DAT_00abbc28 >> 0x10 & 0x7fff) / 32767.0) * 1900.0);
    m_width = m_obRect.size.width;
    m_height = m_obRect.size.height;
    assignUniqueID();
    m_startRotationX = 0.0;
    m_startRotationY = 0.0;
    m_startScaleX = 1.0;
    m_startScaleY = 1.0;
    setScaleX(1.0);
    setScaleY(1.0);
    m_isActivated = false;
    m_isDirty = true;
    m_isObjectRectDirty = true;
}



void GameObject::copyGroups(GameObject* copy){
    if (!copy->m_groupCount) {
        return;
    }
    for (short i = 0; i < copy->m_groupCount; i++) {
        addToGroup(copy->getGroupID(i));
    }
};


cocos2d::CCParticleSystemQuad * GameObject::createAndAddParticle(int param_1, const char *plistName, int param_3,cocos2d::tCCPositionType positionType){
    cocos2d::CCParticleSystemQuad * particle;
    if ( GameManager::sharedState()->m_playLayer != nullptr) {
        if (m_hasNoParticles == false) {
            particle = GameManager::sharedState()->m_playLayer->createParticle(param_1,plistName,param_3, positionType);
            m_particleString = GameManager::sharedState()->m_playLayer->getParticleKey(param_1, plistName, param_3, positionType);
            m_hasParticles = true;
        }
        else {
            particle = nullptr;
        }
    }
    return particle;
}

void GameObject::createColorGroupContainer(int groups){
    if (m_colorGroups == nullptr) {
        // Would be this but geode forces std::array
        // auto s = new short[groups];
        for (int i = 0; i < groups; i++){
            /* fucking hate this.. */
            m_colorGroups->operator[](i) = 0;
        }
    }
};


void GameObject::createGlow(std::string frame){
    if (m_glowSpriteMain != nullptr) {
      m_glowSpriteMain->release();
      m_glowSpriteMain->removeMeAndCleanup();
      m_glowSpriteMain = nullptr;
    }
    m_glowSpriteMain = cocos2d::CCSprite::createWithSpriteFrameName(frame.c_str());
    m_glowSpriteMain->retain();
    m_glowSpriteMain->setPosition(getPosition());
    m_glowSpriteMain->setOpacity(0xff);
}

// inlined lol...
// void GameObject::createGroupContainer(int p0)
// {
//     return;
// }



void GameObject::createOpacityGroupContainer(int size){
    /* Unless Robtop wrote his code this way the other way is cancer... */
    if (!m_opacityGroups) {
        auto groups = new short[size];
        memset(groups, 0, size * sizeof(short));
        m_opacityGroups = reinterpret_cast<decltype(m_opacityGroups)>(groups);
    }
};


void GameObject::createSpriteColor(int id){
    if (id == 2) {
        if (m_detailColor == nullptr) {
            m_detailColor = new GJSpriteColor;
            m_detailColor->m_colorID = 0;
            m_detailColor->m_defaultColorID = 1;
        }
    } else if (m_baseColor == nullptr) {
        m_baseColor = new GJSpriteColor;
    }
}

GameObject* GameObject::createWithFrame(char const* name)
{
    GameObject* obj = new GameObject;
    if (obj->initWithSpriteFrameName(name)){
        obj->autorelease();
        return obj;
    }
    delete obj;
    return nullptr;
}

// When all the other Objects Associated with GameObject are complete we will come back to this function and complete it...
// GameObject* GameObject::createWithKey(int p0)
// {
//     return;
// }

// I am not mentally prepared for this one...
// void GameObject::customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1)
// {
//     return;
// }

// Mental Break:  We are here at customSetup. We will need to make several macros for it...

// Due to part-time Job getting in the way of things this will be done later...
// void GameObject::customSetup()
// {   
//     if (m_objectID == 0x4ca)
//         goto LAB_003676b0;
//     if (m_objectID < 0x4cb) {
//         if (m_objectID < 0x1c5) {
//             if (m_objectID < 0x1c2) {
//                 if (m_objectID < 0xd3) {
//                     if (m_objectID < 0xcf) {
//                         if (m_objectID < 0x6c) {
//                             if (m_objectID < 0x6a) {
//                                 if (m_objectID == 0x2f) {
//                                     m_objectType = 0x10;
//                                     m_defaultZOrder = 10;
//                                     m_defaultZLayer = 5;
//                                     m_zFixedZLayer = true;
//                                     m_isPortalObject = true;
//                                     if (m_inLevelEditor == false) {
//                                         pCVar2 = createAndAddParticle(this, 0x10, "portalEffect02.plist", 4, kCCPositionTypeGrouped);
//                                         cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                                         cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                         if (pCVar2 != (CCParticleSystemQuad *)0x0) {
//                                             (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                             pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                             memset(&local_3c, 0, 0x10);
//                                             local_30 = 1.0;
//                                             local_3c.x = 1.0;
//                                             local_3c.y = 0.39215687;
//                                             (*pcVar12)(pCVar2, &local_3c);
//                                             pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                             memset(&local_3c, 0, 0x10);
//                                             local_30 = 1.0;
//                                             local_3c.x = 1.0;
//                                             local_3c.y = 0.39215687;
//                                             (*pcVar12)(pCVar2, &local_3c);
//                                         }
//                                     }
//                                 } else if (m_objectID < 0x30) {
//                                     if (m_objectID < 0x16) {
//                                         if (0x11 < m_objectID)
//                                             goto LAB_00365486;
//                                         if (m_objectID == 0xb) {
//                                             m_defaultZOrder = 10;
//                                             m_defaultZLayer = 5;
//                                             m_zFixedZLayer = true;
//                                             m_isPortalObject = true;
//                                             m_objectType = 3;
//                                             if (m_inLevelEditor == false) {
//                                                 createAndAddParticle(this, 3, "portalEffect02.plist", 4, kCCPositionTypeGroupe d);
//                                                 cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                                                 cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                             }
//                                         } else if (m_objectID < 0xc) {
//                                             if (m_objectID == 8) {
//                                             LAB_00366510:
//                                                 m_objectType = 2;
//                                                 m_spriteWidthScale = 0.2;
//                                                 m_spriteHeightScale = 0.4;
//                                                 if (m_objectID - 0xb1U < 3) {
//                                                     m_useGlowBGColor = true;
//                                                 }
//                                             } else {
//                                                 if (m_objectID < 9) {
//                                                     flag_a = m_objectID == 5;
//                                                     goto LAB_00363c62;
//                                                 }
//                                                 if (m_objectID == 9)
//                                                     goto LAB_00366314;
//                                                 if (m_objectID == 10) {
//                                                     m_defaultZOrder = 10;
//                                                     m_defaultZLayer = 5;
//                                                     m_zFixedZLayer = true;
//                                                     m_isPortalObject = true;
//                                                     m_objectType = 4;
//                                                     if (m_inLevelEditor == false) {
//                                                         createAndAddParticle(this, 4, "portalEffect01.plist", 4, kCCPositionTypeGrouped);
//                                                         cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                                                         cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                                     }
//                                                 }
//                                             }
//                                         } else if (m_objectID == 0xd) {
//                                             m_defaultZOrder = 10;
//                                             m_zFixedZLayer = true;
//                                             m_isPortalObject = true;
//                                             m_objectType = 5;
//                                             m_defaultZLayer = 5;
//                                             if (m_inLevelEditor == false) {
//                                                 createAndAddParticle(this, 5, "portalEffect04.plist", 4, kCCPositionTypeGroupe d);
//                                                 cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                                                 cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                             }
//                                         } else if (m_objectID < 0xd) {
//                                             m_defaultZOrder = 10;
//                                             m_defaultZLayer = 5;
//                                             m_zFixedZLayer = true;
//                                             m_isPortalObject = true;
//                                             m_objectType = 6;
//                                             if (m_inLevelEditor == false) {
//                                                 createAndAddParticle(this, 6, "portalEffect03.plist", 4, kCCPositionTypeGroupe d);
//                                                 cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                                                 cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                             }
//                                         } else if (0xe < m_objectID) {
//                                             m_objectType = 7;
//                                             m_isBlendable = true;
//                                             m_defaultZOrder = -6;
//                                         }
//                                     } else if (m_objectID == 0x26) {
//                                         m_objectType = 7;
//                                     } else if (m_objectID < 0x27) {
//                                         if (m_objectID == 0x23) {
//                                             m_defaultZOrder = 0xc;
//                                             m_defaultZLayer = 3;
//                                             m_objectType = 8;
//                                             if (m_inLevelEditor == false) {
//                                                 createAndAddParticle(this, 8, "bumpEffect.plist", 0, kCCPositionTypeGrouped);
//                                             }
//                                         } else if (m_objectID < 0x24) {
//                                             if (m_objectID < 0x22)
//                                                 goto LAB_0036775c;
//                                         } else if (m_objectID == 0x24) {
//                                             m_objectType = 0xb;
//                                             m_hasAudioScale = true;
//                                             m_spriteWidthScale = 1.2;
//                                             m_spriteHeightScale = 1.2;
//                                             m_defaultZOrder = 0xc;
//                                             m_defaultZLayer = 3;
//                                             setDefaultMainColorMode(this, 0);
//                                             if ((m_inLevelEditor == false) &&
//                                                (pCVar2 = createAndAddParticle(this, m_objectType, "ringEffect.plist", 4,
//                                                                               kCCPositionTypeGrouped),
//                                                 pCVar2 != (CCParticleSystemQuad *)0x0)) {
//                                                 (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                                 pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                                 memset(&local_3c, 0, 0x10);
//                                                 local_30 = 1.0;
//                                                 local_3c.x = 1.0;
//                                                 local_3c.y = 0.78431374;
//                                                 local_34 = 0x3e48c8c9;
//                                                 (*pcVar12)(pCVar2, &local_3c);
//                                                 pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                                 memset(&local_3c, 0, 0x10);
//                                                 local_30 = 1.0;
//                                                 local_3c.x = 1.0;
//                                                 local_3c.y = 0.39215687;
//                                                 local_34 = 0x3dc8c8c9;
//                                                 (*pcVar12)(pCVar2, &local_3c);
//                                             }
//                                         } else if (m_objectID == 0x25) {
//                                             setDefaultMainColorMode(this, 0x3ed);
//                                             m_objectType = 7;
//                                             m_hasAudioScale = true;
//                                             m_defaultZOrder = 10;
//                                             m_defaultZLayer = 3;
//                                         }
//                                     } else if (m_objectID == 0x2c) {
//                                         m_objectType = 7;
//                                         m_defaultZOrder = 3;
//                                     } else {
//                                         if (m_objectID < 0x2d) {
//                                             if (m_objectID != 0x27) {
//                                                 flag_a = m_objectID == 0x29;
//                                                 goto LAB_00363d06;
//                                             }
//                                             goto LAB_00366510;
//                                         }
//                                         if (m_objectID == 0x2d) {
//                                             m_defaultZOrder = 10;
//                                             m_objectType = 0xe;
//                                             m_defaultZLayer = 5;
//                                             m_zFixedZLayer = true;
//                                             m_isPortalObject = true;
//                                             if (m_inLevelEditor == false) {
//                                                 pCVar2 = createAndAddParticle(this, 0xe, "portalEffect02.plist", 4, kCCPositionTypeGroupe d);
//                                                 cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                                                 cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                                 if (pCVar2 != (CCParticleSystemQuad *)0x0) {
//                                                     (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                                     memset(&local_3c, 0, 0x10);
//                                                     local_30 = 1.0;
//                                                     local_3c.x = 1.0;
//                                                     local_3c.y = 0.5882353;
//                                                     (*pcVar12)(pCVar2, &local_3c);
//                                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                                     memset(&local_3c, 0, 0x10);
//                                                     local_30 = 1.0;
//                                                     local_3c.x = 1.0;
//                                                     local_3c.y = 0.5882353;
//                                                     (*pcVar12)(pCVar2, &local_3c);
//                                                 }
//                                             }
//                                         } else if (m_objectID == 0x2e) {
//                                             m_defaultZOrder = 10;
//                                             m_defaultZLayer = 5;
//                                             m_zFixedZLayer = true;
//                                             m_isPortalObject = true;
//                                             m_objectType = 0xf;
//                                             if (m_inLevelEditor == false) {
//                                                 createAndAddParticle(this, 0xf, "portalEffect01.plist", 4, kCCPositionTypeGrouped);
//                                                 cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                                                 cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                             }
//                                         }
//                                     }
//                                 } else {
//                                     if (m_objectID == 0x50)
//                                         goto LAB_003670f8;
//                                     if (m_objectID < 0x51) {
//                                         if (m_objectID < 0x3c) {
//                                             if (0x36 < m_objectID)
//                                                 goto LAB_0036775c;
//                                             if (m_objectID < 0x32) {
//                                                 setDefaultMainColorMode(this, 0x3ee);
//                                                 m_objectType = 7;
//                                                 m_defaultZOrder = 9;
//                                                 m_defaultZLayer = 3;
//                                             } else {
//                                             LAB_00366226:
//                                                 setDefaultMainColorMode(this, 0x3ee);
//                                                 m_objectType = 7;
//                                                 m_hasAudioScale = true;
//                                                 m_defaultZOrder = 9;
//                                                 m_defaultZLayer = 3;
//                                             }
//                                         } else if (m_objectID == 0x43) {
//                                             m_defaultZOrder = 0xc;
//                                             m_objectType = 10;
//                                             m_defaultZLayer = 3;
//                                             if ((m_inLevelEditor == false) &&
//                                                (pCVar2 = createAndAddParticle(this, 10, "bumpEffect.plist", 0, kCCPositionTypeGrouped),
//                                                 pCVar2 != (CCParticleSystemQuad *)0x0)) {
//                                                 (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                                 pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                                 memset(&local_3c, 0, 0x10);
//                                                 local_30 = 1.0;
//                                                 local_3c.y = 1.0;
//                                                 local_34 = 1.0;
//                                                 (*pcVar12)(pCVar2, &local_3c);
//                                                 pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                                 memset(&local_3c, 0, 0x10);
//                                                 local_30 = 1.0;
//                                                 local_3c.y = 1.0;
//                                                 local_34 = 1.0;
//                                                 (*pcVar12)(pCVar2, &local_3c);
//                                             }
//                                         } else if (m_objectID < 0x44) {
//                                             if (m_objectID == 0x3c)
//                                                 goto LAB_00366226;
//                                             if (m_objectID == 0x3d)
//                                                 goto LAB_00366314;
//                                         } else {
//                                             if (m_objectID == 0x48)
//                                                 goto LAB_003672fa;
//                                             flag_a = m_objectID == 0x49;
//                                         LAB_00363c62:
//                                             if (flag_a)
//                                                 goto LAB_003670f8;
//                                         }
//                                     } else if (m_objectID == 0x5f) {
//                                     LAB_003673d0:
//                                         m_objectType = 0;
//                                         m_isSolid = true;
//                                         m_hasExtendedCollision2 = true;
//                                         m_width = 30.0;
//                                         m_height = 30.0;
//                                     } else if (m_objectID < 0x60) {
//                                         if (m_objectID < 0x5d) {
//                                             if (0x59 < m_objectID)
//                                                 goto LAB_003673d0;
//                                             if (m_objectID == 0x54) {
//                                                 m_objectType = 0xd;
//                                                 m_hasAudioScale = true;
//                                                 m_spriteWidthScale = 1.2;
//                                                 m_spriteHeightScale = 1.2;
//                                                 m_defaultZOrder = 0xc;
//                                                 m_defaultZLayer = 3;
//                                                 setDefaultMainColorMode(this, 0);
//                                                 if ((m_inLevelEditor == false) &&
//                                                    (pCVar2 = createAndAddParticle(this, m_objectType, "ringEffect.plist", 4,
//                                                                                   kCCPositionTypeGrouped),
//                                                     pCVar2 != (CCParticleSystemQuad *)0x0)) {
//                                                     (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                                     memset(&local_3c, 0, 0x10);
//                                                     local_30 = 1.0;
//                                                     local_3c.y = 1.0;
//                                                     local_34 = 1.0;
//                                                     (*pcVar12)(pCVar2, &local_3c);
//                                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                                     memset(&local_3c, 0, 0x10);
//                                                     local_30 = 1.0;
//                                                     local_34 = 1.0;
//                                                     local_3c.y = 0.49019608;
//                                                     (*pcVar12)(pCVar2, &local_3c);
//                                                 }
//                                             }
//                                         } else if (m_objectID == 0x5d) {
//                                             m_objectType = 0;
//                                             m_isSolid = true;
//                                             m_width = 30.0;
//                                             m_height = 30.0;
//                                             m_hasExtendedCollision2 = true;
//                                         } else if (m_objectID == 0x5e) {
//                                             m_objectType = 0;
//                                             pGVar10 = this->vtable;
//                                             m_isSolid = true;
//                                             m_hasExtendedCollision2 = true;
//                                             (*(code *)pGVar10->cocos2d_CCSprite_setColor)(this, &DAT_009a0443);
//                                             m_groupColor2.r = '\x01';
//                                             m_defaultZOrder = 1;
//                                         }
//                                     } else if (m_objectID == 0x65) {
//                                         m_defaultZOrder = 10;
//                                         m_defaultZLayer = 5;
//                                         m_zFixedZLayer = true;
//                                         m_isPortalObject = true;
//                                         m_objectType = 0x12;
//                                         if (m_inLevelEditor == false) {
//                                             createAndAddParticle(this, 0x12, "portalEffect09.plist", 4, kCCPositionTypeGrouped);
//                                             cocos2d::CCPoint::CCPoint(&CStack_4c, -5.0, 0.0);
//                                             cocos2d::CCPoint::CCPoint(&CStack_44, 2.0, 0.0);
//                                             cocos2d::CCPoint::operator+(&local_3c, &CStack_4c, &CStack_44);
//                                             cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                         }
//                                     } else {
//                                         if (0x65 < m_objectID) {
//                                             if (m_objectID != 0x67) {
//                                                 flag_a = m_objectID == 0x69;
//                                                 goto LAB_00364420;
//                                             }
//                                             goto LAB_00366510;
//                                         }
//                                         if (m_objectID == 0x60) {
//                                             m_objectType = 0;
//                                             m_isSolid = true;
//                                             m_width = 30.0;
//                                             m_height = 30.0;
//                                         } else if (m_objectID == 99) {
//                                             m_defaultZOrder = 10;
//                                             m_defaultZLayer = 5;
//                                             m_zFixedZLayer = true;
//                                             m_isPortalObject = true;
//                                             m_objectType = 0x11;
//                                             if (m_inLevelEditor == false) {
//                                                 createAndAddParticle(this, 0x11, "portalEffect08.plist", 4, kCCPositionTypeGrouped);
//                                                 cocos2d::CCPoint::CCPoint(&CStack_4c, -5.0, 0.0);
//                                                 cocos2d::CCPoint::CCPoint(&CStack_44, 2.0, 0.0);
//                                                 cocos2d::CCPoint::operator+(&local_3c, &CStack_4c, &CStack_44);
//                                                 cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                             }
//                                         }
//                                     }
//                                 }
//                             } else {
//                             LAB_0036626c:
//                                 setDefaultMainColorMode(this, 0x3ee);
//                                 m_objectType = 7;
//                                 m_defaultZOrder = 9;
//                                 m_defaultZLayer = 3;
//                             }
//                         } else if (m_objectID < 0x96) {
//                             if (0x93 < m_objectID)
//                                 goto LAB_00366226;
//                             if (m_objectID < 0x86) {
//                                 if (0x83 < m_objectID)
//                                     goto LAB_003662a8;
//                                 if (m_objectID == 0x77) {
//                                 LAB_003672fa:
//                                     m_width = 30.0;
//                                     m_height = 30.0;
//                                 } else if (m_objectID < 0x78) {
//                                     if (m_objectID == 0x6f) {
//                                         m_defaultZOrder = 10;
//                                         m_objectType = 0x13;
//                                         m_defaultZLayer = 5;
//                                         m_zFixedZLayer = true;
//                                         m_isPortalObject = true;
//                                         if (m_inLevelEditor == false) {
//                                             pCVar2 = createAndAddParticle(this, 0x13, "portalEffect02.plist", 4, kCCPositionTypeGrouped);
//                                             cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                                             cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                             if (pCVar2 != (CCParticleSystemQuad *)0x0) {
//                                                 (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                                 pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                                 memset(&local_3c, 0, 0x10);
//                                                 local_30 = 1.0;
//                                                 local_3c.x = 1.0;
//                                                 local_3c.y = 0.78431374;
//                                                 (*pcVar12)(pCVar2, &local_3c);
//                                                 pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                                 memset(&local_3c, 0, 0x10);
//                                                 local_30 = 1.0;
//                                                 local_3c.x = 1.0;
//                                                 local_3c.y = 0.39215687;
//                                                 (*pcVar12)(pCVar2, &local_3c);
//                                             }
//                                         }
//                                     } else if (m_objectID < 0x70) {
//                                         flag_a = m_objectID == 0x6e;
//                                     LAB_00363d06:
//                                         if (flag_a)
//                                             goto LAB_0036624c;
//                                     } else if (m_objectID - 0x71U < 3)
//                                         goto LAB_00365868;
//                                 } else if (m_objectID < 0x81) {
//                                     if (m_objectID < 0x7b) {
//                                         flag_a = m_objectID == 0x78;
//                                         goto LAB_00363c62;
//                                     }
//                                     setDefaultMainColorMode(this, 0x3ed);
//                                     m_objectType = 7;
//                                     m_defaultZOrder = 1;
//                                     m_defaultZLayer = 3;
//                                 } else {
//                                     setDefaultMainColorMode(this, 0x3ed);
//                                     m_objectType = 7;
//                                     m_defaultZOrder = 9;
//                                     m_defaultZLayer = 3;
//                                 }
//                             } else if (m_objectID == 0x8d) {
//                                 m_hasAudioScale = true;
//                                 m_objectType = 0xc;
//                                 m_defaultZOrder = 0xc;
//                                 m_spriteWidthScale = 1.2;
//                                 m_spriteHeightScale = 1.2;
//                                 m_defaultZLayer = 3;
//                                 setDefaultMainColorMode(this, 0);
//                                 if ((m_inLevelEditor == false) &&
//                                    (pCVar2 = createAndAddParticle(this, m_objectType, "ringEffect.plist", 4,
//                                                                   kCCPositionTypeGrouped),
//                                     pCVar2 != (CCParticleSystemQuad *)0x0)) {
//                                     (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                     memset(&local_3c, 0, 0x10);
//                                     local_30 = 1.0;
//                                     local_3c.x = 1.0;
//                                     local_3c.y = 0.39215687;
//                                     local_34 = 1.0;
//                                     (*pcVar12)(pCVar2, &local_3c);
//                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                     memset(&local_3c, 0, 0x10);
//                                     local_30 = 1.0;
//                                     local_3c.x = 1.0;
//                                     local_34 = 0x3f2fafb0;
//                                     (*pcVar12)(pCVar2, &local_3c);
//                                 }
//                             } else if (m_objectID < 0x8e) {
//                                 if (m_objectID == 0x87)
//                                     goto LAB_00366314;
//                                 if (m_objectID < 0x87)
//                                     goto LAB_0036626c;
//                                 if (m_objectID == 0x88)
//                                     goto LAB_003662a8;
//                                 if (m_objectID == 0x8c) {
//                                     m_defaultZOrder = 0xc;
//                                     m_objectType = 9;
//                                     m_defaultZLayer = 3;
//                                     if ((m_inLevelEditor == false) &&
//                                        (pCVar2 = createAndAddParticle(this, 9, "bumpEffect.plist", 0, kCCPositionTypeGrouped),
//                                         pCVar2 != (CCParticleSystemQuad *)0x0)) {
//                                         (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                         pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                         memset(&local_3c, 0, 0x10);
//                                         local_30 = 1.0;
//                                         local_3c.x = 1.0;
//                                         local_34 = 1.0;
//                                         (*pcVar12)(pCVar2, &local_3c);
//                                         pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                         memset(&local_3c, 0, 0x10);
//                                         local_30 = 1.0;
//                                         local_3c.x = 1.0;
//                                         local_34 = 1.0;
//                                         (*pcVar12)(pCVar2, &local_3c);
//                                     }
//                                 }
//                             } else {
//                                 if (0x91 < m_objectID)
//                                     goto LAB_00366550;
//                                 if (0x8f < m_objectID)
//                                     goto LAB_00366534;
//                                 if (m_objectID == 0x8f) {
//                                     m_objectType = 0x15;
//                                 }
//                             }
//                         } else if (m_objectID < 0xb4) {
//                             if (0xb0 < m_objectID)
//                                 goto LAB_00366510;
//                             if (m_objectID < 0xa0) {
//                                 if (0x9c < m_objectID)
//                                     goto LAB_003655ec;
//                                 if (m_objectID == 0x96)
//                                     goto LAB_003662a8;
//                                 if (m_objectID < 0x9a) {
//                                 LAB_0036624c:
//                                     setDefaultMainColorMode(this, 0x3ed);
//                                     m_objectType = 7;
//                                     m_defaultZOrder = 9;
//                                     m_defaultZLayer = 3;
//                                 }
//                             } else {
//                                 if (m_objectID == 0xa4)
//                                     goto LAB_003670f8;
//                                 if ((m_objectID < 0xa4) || (m_objectID < 0xaa))
//                                     goto LAB_003672fa;
//                             }
//                         } else if (m_objectID < 200) {
//                             if ((0xc5 < m_objectID) || (m_objectID == 0xbf))
//                                 goto LAB_00367324;
//                             if (m_objectID == 0xc1)
//                                 goto LAB_003670f8;
//                             if (m_objectID == 0xbe)
//                                 goto LAB_0036626c;
//                         } else if (m_objectID == 0xcc) {
//                         LAB_00366550:
//                             m_objectType = 0;
//                             m_doesntFade = true;
//                         } else if (m_objectID < 0xcc) {
//                         LAB_00367432:
//                             m_objectType = 0x14;
//                             m_defaultZOrder = -6;
//                             m_defaultZLayer = 4;
//                             m_zFixedZLayer = true;
//                             m_isPortalObject = true;
//                             if (m_inLevelEditor == false) {
//                                 if (m_objectID == 200) {
//                                     pcVar7 = "boost_01_effect.plist";
//                                 } else if (m_objectID == 0xc9) {
//                                     pcVar7 = "boost_02_effect.plist";
//                                 } else if (m_objectID == 0xca) {
//                                     pcVar7 = "boost_03_effect.plist";
//                                 } else {
//                                     pcVar7 = "boost_04_effect.plist";
//                                 }
//                                 pCVar2 = createAndAddParticle(this, m_objectID, pcVar7, -2, kCCPositionTypeGrouped);
//                                 if ((pCVar2 != (CCParticleSystemQuad *)0x0) && (m_objectID == 0x536)) {
//                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                     m_objectID = (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_getStartColor)();
//                                     local_30 = *(undefined4 *)(m_objectID + 0xc);
//                                     local_3c.y = 0.0;
//                                     local_34 = 0;
//                                     local_3c.x = 1.0;
//                                     (*pcVar12)(pCVar2, &local_3c);
//                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                     m_objectID = (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_getEndColor)(pCVar2);
//                                     local_30 = *(undefined4 *)(m_objectID + 0xc);
//                                     local_3c.y = 0.0;
//                                     local_34 = 0;
//                                     local_3c.x = 1.0;
//                                     (*pcVar12)(pCVar2, &local_3c);
//                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPosVar;
//                                     pCVar6 = (CCPoint *)(*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_getPosVar)(pCVar2);
//                                     cocos2d::CCPoint::operator*(pCVar6, 1.1);
//                                     (*pcVar12)(pCVar2, &local_3c);
//                                 }
//                             }
//                             setDefaultMainColorMode(this, 0);
//                             m_opacityMod = 0.8;
//                         } else if (m_objectID == 0xcd) {
//                         LAB_00366534:
//                             m_objectType = 2;
//                             m_spriteWidthScale = 0.2;
//                             m_spriteHeightScale = 0.4;
//                             m_doesntFade = true;
//                         } else if (m_objectID == 0xce)
//                             goto LAB_00366550;
//                     } else {
//                     LAB_0036751a:
//                         m_objectType = 0;
//                         m_width = 30.0;
//                         m_height = 30.0;
//                         m_dontFadeTinted = true;
//                         m_isSolid = true;
//                     }
//                 } else {
//                     if (m_objectID == 0x131)
//                         goto LAB_0036757e;
//                     if (m_objectID < 0x132) {
//                         if (m_objectID < 0x106) {
//                             if (m_objectID < 0x104) {
//                                 if (m_objectID < 0xf2) {
//                                     if (m_objectID < 0xed) {
//                                         if (m_objectID < 0xdb) {
//                                             if (0xd7 < m_objectID)
//                                                 goto LAB_00366510;
//                                             if (m_objectID == 0xd3) {
//                                                 m_dontFadeTinted = true;
//                                                 m_objectType = 7;
//                                                 m_isSolid = true;
//                                                 m_defaultZOrder = -7;
//                                                 setDefaultMainColorMode(this, 1);
//                                             } else if (m_objectID < 0xd6)
//                                                 goto LAB_0036751a;
//                                         } else {
//                                             if (0xeb < m_objectID)
//                                                 goto LAB_003662a8;
//                                             if (0xe2 < m_objectID)
//                                                 goto LAB_003655ec;
//                                             if (0xe0 < m_objectID) {
//                                                 setDefaultMainColorMode(this, 0x3ee);
//                                                 m_objectType = 7;
//                                                 m_defaultZOrder = 9;
//                                                 m_defaultZLayer = 3;
//                                             }
//                                         }
//                                     } else {
//                                     LAB_00365486:
//                                         setDefaultMainColorMode(this, 0x3ed);
//                                         m_objectType = 7;
//                                         m_defaultZOrder = 9;
//                                         m_defaultZLayer = 3;
//                                     }
//                                 } else {
//                                     if (m_objectID < 0xfb) {
//                                         if (m_objectID < 0xf7) {
//                                             if (0xf4 < m_objectID)
//                                                 goto LAB_003670f8;
//                                             if (0xf2 < m_objectID)
//                                                 goto LAB_00366314;
//                                             goto LAB_003655ec;
//                                         }
//                                         goto LAB_0036756c;
//                                     }
//                                     if (m_objectID < 0x103) {
//                                         flag_a = SBORROW4(m_objectID, 0xfc);
//                                         m_objectID = m_objectID + -0xfc;
//                                         goto LAB_00363eae;
//                                     }
//                                 LAB_00367398:
//                                     m_objectType = 7;
//                                     m_defaultZOrder = -7;
//                                     setDefaultMainColorMode(this, 1);
//                                 }
//                             } else {
//                             LAB_0036756c:
//                                 m_objectType = 0;
//                                 m_width = 30.0;
//                                 m_height = 30.0;
//                             }
//                         } else if (m_objectID < 0x11e) {
//                             if (m_objectID < 0x117) {
//                                 if (m_objectID < 0x111) {
//                                     if (m_objectID < 0x10b) {
//                                         if (m_objectID < 0x107)
//                                             goto LAB_003677a4;
//                                         if (0x109 < m_objectID)
//                                             goto LAB_00367398;
//                                     }
//                                 } else {
//                                     if (0x113 < m_objectID) {
//                                         if (0x114 < m_objectID) {
//                                             setDefaultMainColorMode(this, 1);
//                                             m_objectType = 7;
//                                             m_defaultZOrder = -7;
//                                         }
//                                         goto LAB_003677a4;
//                                     }
//                                     flag_a = SBORROW4(m_objectID, 0x112);
//                                     m_objectID = m_objectID + -0x112;
//                                 LAB_00363eae:
//                                     if (m_objectID < 0 != flag_a)
//                                         goto LAB_00367398;
//                                 }
//                                 goto LAB_0036756c;
//                             }
//                         LAB_003655ec:
//                             setDefaultMainColorMode(this, 0x3ef);
//                             m_objectType = 7;
//                             m_defaultZOrder = 9;
//                             m_defaultZLayer = 3;
//                         } else {
//                             if (m_objectID < 0x128) {
//                                 if (m_objectID < 0x126) {
//                                     if (m_objectID == 0x11f) {
//                                         m_defaultZOrder = 10;
//                                         m_objectType = 0x18;
//                                         m_defaultZLayer = 5;
//                                         m_zFixedZLayer = true;
//                                         m_isPortalObject = true;
//                                         if (m_inLevelEditor == false) {
//                                             pCVar2 = createAndAddParticle(this, 0x18, "portalEffect09.plist", 4, kCCPositionTypeGrouped);
//                                             cocos2d::CCPoint::CCPoint(&CStack_4c, -5.0, 0.0);
//                                             cocos2d::CCPoint::CCPoint(&CStack_44, -2.0, 0.0);
//                                             cocos2d::CCPoint::operator+(&local_3c, &CStack_4c, &CStack_44);
//                                             cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                             if (pCVar2 != (CCParticleSystemQuad *)0x0) {
//                                                 (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                                 pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                                 memset(&local_3c, 0, 0x10);
//                                                 local_30 = 1.0;
//                                                 local_34 = 1.0;
//                                                 local_3c.y = 0.78431374;
//                                                 (*pcVar12)(pCVar2, &local_3c);
//                                                 pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                                 memset(&local_3c, 0, 0x10);
//                                                 local_30 = 1.0;
//                                                 local_34 = 1.0;
//                                                 local_3c.y = 0.39215687;
//                                                 (*pcVar12)(pCVar2, &local_3c);
//                                             }
//                                         }
//                                     } else {
//                                         if (0x11e < m_objectID) {
//                                             if (m_objectID != 0x121) {
//                                                 iVar8 = 0x123;
//                                                 goto LAB_00363f22;
//                                             }
//                                             goto LAB_0036757e;
//                                         }
//                                         m_defaultZOrder = 10;
//                                         m_objectType = 0x17;
//                                         m_defaultZLayer = 5;
//                                         m_zFixedZLayer = true;
//                                         m_isPortalObject = true;
//                                         if (m_inLevelEditor == false) {
//                                             pCVar2 = createAndAddParticle(this, 0x17, "portalEffect09.plist", 4, kCCPositionTypeGrouped);
//                                             cocos2d::CCPoint::CCPoint(&CStack_4c, -5.0, 0.0);
//                                             cocos2d::CCPoint::CCPoint(&CStack_44, -2.0, 0.0);
//                                             cocos2d::CCPoint::operator+(&local_3c, &CStack_4c, &CStack_44);
//                                             cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                             if (pCVar2 != (CCParticleSystemQuad *)0x0) {
//                                                 (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                                 pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                                 memset(&local_3c, 0, 0x10);
//                                                 local_30 = 1.0;
//                                                 local_3c.x = 1.0;
//                                                 local_3c.y = 0.78431374;
//                                                 (*pcVar12)(pCVar2, &local_3c);
//                                                 pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                                 memset(&local_3c, 0, 0x10);
//                                                 local_30 = 1.0;
//                                                 local_3c.x = 1.0;
//                                                 local_3c.y = 0.39215687;
//                                                 (*pcVar12)(pCVar2, &local_3c);
//                                             }
//                                         }
//                                     }
//                                     goto LAB_003677a4;
//                                 }
//                             } else if (m_objectID != 299) {
//                                 if (299 < m_objectID) {
//                                     iVar8 = 0x12d;
//                                     goto LAB_00363f22;
//                                 }
//                                 if (m_objectID < 0x12a) {
//                                 LAB_003670ea:
//                                     m_objectType = 7;
//                                     m_isTintObject = true;
//                                 }
//                                 goto LAB_003677a4;
//                             }
//                         LAB_0036757e:
//                             m_objectType = 0x19;
//                         }
//                     } else if (m_objectID == 0x16c) {
//                     LAB_003675ec:
//                         m_objectType = 0x19;
//                         m_defaultZOrder = 1;
//                         m_width = 60.0;
//                         m_maybeShouldFixSlopes = true;
//                         m_height = 30.0;
//                     } else if (m_objectID < 0x16d) {
//                         if (m_objectID != 0x14b) {
//                             if (m_objectID < 0x14c) {
//                                 if (m_objectID != 0x141) {
//                                     if (0x141 < m_objectID) {
//                                         if (m_objectID < 0x146) {
//                                             if (m_objectID < 0x144) {
//                                                 iVar8 = 0x143;
//                                                 goto LAB_00363f22;
//                                             }
//                                         LAB_00367382:
//                                             m_objectType = 7;
//                                             m_defaultZOrder = -7;
//                                             m_isTintObject = true;
//                                         } else if (m_objectID < 0x148)
//                                             goto LAB_0036757e;
//                                         goto LAB_003677a4;
//                                     }
//                                     if (m_objectID == 0x137) {
//                                     LAB_0036759e:
//                                         m_objectType = 0x19;
//                                         m_isSolid = true;
//                                         m_hasExtendedCollision2 = true;
//                                         goto LAB_003677a4;
//                                     }
//                                     if (m_objectID < 0x138) {
//                                         if (m_objectID != 0x133) {
//                                             if (m_objectID != 0x135)
//                                                 goto LAB_003677a4;
//                                             goto LAB_0036759e;
//                                         }
//                                     } else if (m_objectID != 0x13b) {
//                                         iVar8 = 0x13d;
//                                         goto LAB_00363f22;
//                                     }
//                                 }
//                             } else if (m_objectID != 0x15d) {
//                                 if (m_objectID < 0x15e) {
//                                     if (m_objectID != 0x153) {
//                                         if (m_objectID < 0x154) {
//                                             if (m_objectID == 0x14d)
//                                                 goto LAB_003675be;
//                                             iVar8 = 0x151;
//                                         } else {
//                                             if (m_objectID == 0x157)
//                                                 goto LAB_0036757e;
//                                             iVar8 = 0x159;
//                                         }
//                                     LAB_00363f22:
//                                         if (m_objectID != iVar8)
//                                             goto LAB_003677a4;
//                                     }
//                                 } else if (m_objectID != 0x163) {
//                                     if (0x163 < m_objectID) {
//                                         if (m_objectID == 0x166)
//                                             goto LAB_00367382;
//                                         if (m_objectID == 0x16b)
//                                             goto LAB_003675d0;
//                                         goto LAB_003677a4;
//                                     }
//                                     if (m_objectID != 0x15f) {
//                                         iVar8 = 0x161;
//                                         goto LAB_00363f22;
//                                     }
//                                 }
//                             }
//                             goto LAB_0036757e;
//                         }
//                     LAB_003675be:
//                         m_objectType = 0x19;
//                         m_isSolid = true;
//                         m_dontFadeTinted = true;
//                     } else if (m_objectID < 0x199) {
//                         if (m_objectID < 0x196) {
//                             if (m_objectID < 0x175) {
//                                 if (0x172 < m_objectID)
//                                     goto LAB_0036757e;
//                                 if (m_objectID == 0x16e)
//                                     goto LAB_003675d0;
//                                 if (0x16d < m_objectID) {
//                                     if (m_objectID == 0x16f)
//                                         goto LAB_003675ec;
//                                     if (m_objectID != 0x170)
//                                         goto LAB_003677a4;
//                                 }
//                                 goto LAB_00366478;
//                             }
//                             if (m_objectID == 0x188)
//                                 goto LAB_00366510;
//                             if (m_objectID < 0x189) {
//                                 if (m_objectID < 0x177)
//                                     goto LAB_003670ea;
//                             } else {
//                                 if (m_objectID == 0x189)
//                                     goto LAB_00367324;
//                                 if (m_objectID == 0x195)
//                                     goto LAB_00366226;
//                             }
//                         } else {
//                         LAB_003656a4:
//                             setDefaultMainColorMode(this, 0x3ef);
//                             m_objectType = 7;
//                             m_defaultZOrder = 1;
//                             m_defaultZLayer = 3;
//                         }
//                     } else if (m_objectID < 0x1a7) {
//                         if (m_objectID < 0x1a5) {
//                             if (m_objectID == 0x19e)
//                                 goto LAB_003656a4;
//                             if (m_objectID < 0x19e)
//                                 goto LAB_00365526;
//                             if (0x1a2 < m_objectID)
//                                 goto LAB_003655ec;
//                         } else {
//                         LAB_00366478:
//                             m_objectType = 2;
//                             m_spriteHeightScale = 0.4;
//                             m_spriteWidthScale = 0.3;
//                             m_defaultZOrder = 1;
//                             if (m_objectID != 0x1bf) {
//                                 if (m_objectID < 0x1c0) {
//                                     flag_a = m_objectID == 0x1a6;
//                                 } else {
//                                     if (m_objectID == 0x6be)
//                                         goto LAB_003664b6;
//                                     flag_a = m_objectID == 0x6c1;
//                                 }
//                                 if (!flag_a)
//                                     goto LAB_003677a4;
//                             }
//                         LAB_003664b6:
//                             cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                             cocos2d::CCPoint::operator=(&m_customBoxOffset, &local_3c);
//                             m_spriteWidthScale = 0.2;
//                         }
//                     } else if (0x1bd < m_objectID) {
//                         if (0x1bf < m_objectID)
//                             goto LAB_003655ec;
//                         goto LAB_00366478;
//                     }
//                 }
//             } else {
//             LAB_00365868:
//                 setDefaultMainColorMode(this, 0x3ed);
//                 m_objectType = 7;
//                 m_defaultZOrder = 9;
//                 m_defaultZLayer = 3;
//             }
//         } else if (m_objectID < 0x360) {
//             if (m_objectID < 0x35d) {
//                 if (m_objectID < 0x2af) {
//                     if (m_objectID < 0x2a9) {
//                         if (m_objectID < 0x1f2) {
//                             if (m_objectID < 0x1f0) {
//                                 if (m_objectID < 0x1db) {
//                                     if (m_objectID < 0x1d8) {
//                                         if (m_objectID == 0x1cc) {
//                                         LAB_003662a8:
//                                             setDefaultMainColorMode(this, 0x3ee);
//                                             m_objectType = 7;
//                                             m_hasAudioScale = true;
//                                             m_isAudioScale = true;
//                                             m_minAudioScale = 0.8;
//                                             m_maxAudioScale = 1.2;
//                                             m_defaultZOrder = 10;
//                                             m_defaultZLayer = 3;
//                                         } else if (m_objectID < 0x1cd) {
//                                             if (m_objectID == 0x1ca)
//                                                 goto LAB_00366510;
//                                             if (0x1ca < m_objectID)
//                                                 goto LAB_00366534;
//                                             m_objectType = 7;
//                                             m_defaultZOrder = 9;
//                                             m_defaultZLayer = 3;
//                                         } else {
//                                             if (0x1d2 < m_objectID)
//                                                 goto LAB_0036768a;
//                                             setDefaultMainColorMode(this, 1);
//                                             m_objectType = 7;
//                                             m_defaultZOrder = 9;
//                                             m_defaultZLayer = 3;
//                                         }
//                                     } else {
//                                         m_objectType = 7;
//                                         m_defaultZOrder = 3;
//                                         m_isTintObject = true;
//                                         m_isSolid = true;
//                                     }
//                                     goto LAB_003677a4;
//                                 }
//                                 if (m_objectID < 0x1ec) {
//                                     if (m_objectID < 0x1e5) {
//                                         if (0x1e2 < m_objectID)
//                                             goto LAB_0036757e;
//                                         if (m_objectID < 0x1dc)
//                                             goto LAB_0036768a;
//                                     }
//                                     goto LAB_003670f8;
//                                 }
//                                 if (m_objectID != 0x1ee) {
//                                     if (0x1ee < m_objectID)
//                                         goto LAB_003662a8;
//                                     goto LAB_0036757e;
//                                 }
//                             }
//                             setDefaultMainColorMode(this, 0x3ed);
//                             m_objectType = 7;
//                             m_hasAudioScale = true;
//                             m_isAudioScale = true;
//                             m_minAudioScale = 0.8;
//                             m_maxAudioScale = 1.2;
//                             m_defaultZOrder = 10;
//                             m_defaultZLayer = 3;
//                         } else if (m_objectID < 0x294) {
//                             if (0x28c < m_objectID)
//                                 goto LAB_003670f8;
//                             if (m_objectID < 0x20c) {
//                                 if (m_objectID < 0x20a) {
//                                     if (m_objectID == 0x1f6)
//                                         goto LAB_003670f8;
//                                     if (m_objectID < 0x1f6) {
//                                         setDefaultMainColorMode(this, 1);
//                                         m_objectType = 7;
//                                         m_defaultZOrder = 9;
//                                         m_defaultZLayer = 3;
//                                     } else if (m_objectID < 0x1fa)
//                                         goto LAB_00365574;
//                                 } else {
//                                     m_objectType = 0x19;
//                                     fVar15 = 30.0;
//                                     m_height = 30.0;
//                                     if (m_objectID == 0x20a) {
//                                         fVar15 = 60.0;
//                                     }
//                                     m_width = fVar15;
//                                 }
//                             } else if (0x280 < m_objectID) {
//                                 if (m_objectID < 0x28b)
//                                     goto LAB_0036710e;
//                                 goto LAB_0036757e;
//                             }
//                         } else if (m_objectID < 0x29b) {
//                             if (m_objectID < 0x299) {
//                                 if (m_objectID != 0x294)
//                                     goto LAB_0036768a;
//                                 m_defaultZOrder = 10;
//                                 m_objectType = 0x1a;
//                                 m_defaultZLayer = 5;
//                                 m_zFixedZLayer = true;
//                                 m_isPortalObject = true;
//                                 if (m_inLevelEditor == false) {
//                                     pCVar2 = createAndAddParticle(this, 0x1a, "portalEffect02.plist", 4, kCCPositionTypeGrouped);
//                                     cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                                     cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                     if (pCVar2 != (CCParticleSystemQuad *)0x0) {
//                                         (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                         pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                         memset(&local_3c, 0, 0x10);
//                                         local_30 = 1.0;
//                                         local_34 = 1.0;
//                                         local_3c.y = 0.78431374;
//                                         (*pcVar12)(pCVar2, &local_3c);
//                                         pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                         memset(&local_3c, 0, 0x10);
//                                         local_30 = 1.0;
//                                         local_34 = 1.0;
//                                         local_3c.y = 0.39215687;
//                                         (*pcVar12)(pCVar2, &local_3c);
//                                     }
//                                 }
//                             } else {
//                             LAB_0036774e:
//                                 m_objectType = 0x19;
//                                 m_defaultZOrder = 3;
//                             }
//                         } else if (m_objectID < 0x2a1) {
//                             if (m_objectID < 0x29c)
//                                 goto LAB_003664d6;
//                         LAB_0036730e:
//                             m_objectType = 7;
//                             m_defaultZOrder = -7;
//                             m_defaultZLayer = 1;
//                         } else if (m_objectID < 0x2a3)
//                             goto LAB_00366560;
//                     } else {
//                     LAB_003670f8:
//                         m_objectType = 7;
//                         m_defaultZOrder = -7;
//                         m_isTintObject = true;
//                     }
//                 } else if (m_objectID < 0x2e2) {
//                     if (0x2d9 < m_objectID)
//                         goto LAB_003670f8;
//                     if (m_objectID < 0x2c9) {
//                         if (0x2c4 < m_objectID)
//                             goto LAB_0036757e;
//                         if (m_objectID < 0x2b7) {
//                             if (m_objectID < 0x2b5) {
//                                 if (0x2b0 < m_objectID)
//                                     goto LAB_003670f8;
//                                 m_defaultZOrder = 10;
//                                 m_defaultZLayer = 3;
//                                 pGVar10 = this->vtable;
//                                 m_objectType = 7;
//                                 m_isSolid = true;
//                                 (*(code *)pGVar10->cocos2d_CCSprite_setColor)(this, &DAT_009a0443);
//                                 m_groupColor2.r = '\x01';
//                             } else {
//                                 m_objectType = 7;
//                                 setDefaultMainColorMode(this, 1);
//                                 m_defaultZOrder = -7;
//                                 m_isSolid = true;
//                                 m_dontFadeTinted = true;
//                             }
//                         } else {
//                             if (0x2be < m_objectID)
//                                 goto LAB_003670f8;
//                             m_objectType = 7;
//                             setDefaultMainColorMode(this, 1);
//                             m_defaultZOrder = -7;
//                         }
//                     } else if (m_objectID == 0x2d1) {
//                     LAB_003664f2:
//                         setDefaultMainColorMode(this, 1);
//                         m_objectType = 7;
//                         m_defaultZOrder = 9;
//                         m_defaultZLayer = 3;
//                     } else if (m_objectID < 0x2d2) {
//                         if (m_objectID == 0x2cf)
//                             goto LAB_003664f2;
//                         if (0x2cf < m_objectID)
//                             goto LAB_003664d6;
//                         if (m_objectID < 0x2cd)
//                             goto LAB_003670f8;
//                     } else {
//                         if (m_objectID != 0x2d5) {
//                             if (0x2d5 < m_objectID)
//                                 goto LAB_0036757e;
//                             goto LAB_003670f8;
//                         }
//                         m_objectType = 7;
//                         setDefaultMainColorMode(this, 1);
//                         m_defaultZOrder = -6;
//                     }
//                 } else {
//                     if (m_objectID == 0x2ff)
//                         goto LAB_003655ec;
//                     if (m_objectID < 0x300) {
//                         if (m_objectID == 0x2eb) {
//                         LAB_00366d30:
//                             m_objectType = 0x1c;
//                             m_defaultZOrder = 10;
//                             m_defaultZLayer = 5;
//                             m_zFixedZLayer = true;
//                             m_isPortalObject = true;
//                             cocos2d::CCPoint::CCPoint(&local_3c, 12.0, 0.0);
//                             cocos2d::CCPoint::operator=(&m_customBoxOffset, &local_3c);
//                             m_width = 25.0;
//                             if (m_inLevelEditor == false) {
//                                 pCVar2 = createAndAddParticle(this, m_objectType, "portalEffect02.plist", 4,
//                                                               kCCPositionTypeGrouped);
//                                 cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                                 cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                 if (pCVar2 != (CCParticleSystemQuad *)0x0) {
//                                     (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                     memset(&local_3c, 0, 0x10);
//                                     local_30 = 1.0;
//                                     local_3c.y = 1.0;
//                                     local_34 = 1.0;
//                                     (*pcVar12)(pCVar2, &local_3c);
//                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                     memset(&local_3c, 0, 0x10);
//                                     local_30 = 1.0;
//                                     local_3c.y = 0.39215687;
//                                     local_34 = 0x3f169697;
//                                     (*pcVar12)(pCVar2, &local_3c);
//                                 }
//                             }
//                         } else if (m_objectID < 0x2ec) {
//                             if (m_objectID == 0x2e3) {
//                             LAB_0036710e:
//                                 m_objectType = 7;
//                                 m_defaultZOrder = -7;
//                                 m_isTintObject = true;
//                                 m_width = 30.0;
//                                 m_height = 30.0;
//                             } else {
//                                 if (m_objectID < 0x2e3)
//                                     goto LAB_0036730e;
//                                 if (m_objectID == 0x2e8)
//                                     goto LAB_0036775c;
//                                 if (m_objectID == 0x2e9) {
//                                     m_defaultZOrder = 10;
//                                     m_objectType = 0x1b;
//                                     m_defaultZLayer = 5;
//                                     m_zFixedZLayer = true;
//                                     m_isPortalObject = true;
//                                     if (m_inLevelEditor == false) {
//                                         pCVar2 = createAndAddParticle(this, 0x1b, "portalEffect02.plist", 4, kCCPositionTypeGrouped);
//                                         cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                                         cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                         if (pCVar2 != (CCParticleSystemQuad *)0x0) {
//                                             (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                             pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                             memset(&local_3c, 0, 0x10);
//                                             local_30 = 1.0;
//                                             local_3c.x = 0.5882353;
//                                             local_3c.y = 0.5882353;
//                                             local_34 = 0x3f169697;
//                                             (*pcVar12)(pCVar2, &local_3c);
//                                             pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                             memset(&local_3c, 0, 0x10);
//                                             local_30 = 1.0;
//                                             local_3c.x = 0.19607843;
//                                             local_3c.y = 0.19607843;
//                                             local_34 = 0x3e969697;
//                                             (*pcVar12)(pCVar2, &local_3c);
//                                         }
//                                     }
//                                 }
//                             }
//                         } else if (m_objectID < 0x2f8) {
//                             if (m_objectID < 0x2f0) {
//                                 if (m_objectID == 0x2ed)
//                                     goto LAB_00366e30;
//                             } else {
//                             LAB_00367156:
//                                 m_objectType = 7;
//                                 m_defaultZOrder = -7;
//                                 m_isTintObject = true;
//                             }
//                         } else if (0x2f9 < m_objectID)
//                             goto LAB_00367156;
//                     } else {
//                         if (m_objectID < 0x351) {
//                             if (m_objectID < 0x349) {
//                                 if (m_objectID < 0x308) {
//                                     if (m_objectID < 0x301)
//                                         goto LAB_00366478;
//                                     goto LAB_00367156;
//                                 }
//                                 if (0x1a < m_objectID - 0x327U)
//                                     goto LAB_003677a4;
//                             }
//                             goto LAB_003671c0;
//                         }
//                         if (m_objectID < 0x35a) {
//                             if (0x354 < m_objectID)
//                                 goto LAB_003676d6;
//                             iVar8 = 0x352;
//                         } else {
//                             iVar8 = 0x35b;
//                         }
//                         if (m_objectID == iVar8)
//                             goto LAB_003676d6;
//                     }
//                 }
//             } else {
//             LAB_003676d6:
//                 m_objectType = 7;
//                 m_defaultZOrder = -7;
//             }
//         } else if (m_objectID < 0x3f6) {
//             if (0x3f0 < m_objectID)
//                 goto LAB_00365574;
//             if (m_objectID < 0x396) {
//                 if (m_objectID < 0x394) {
//                     if (m_objectID < 0x381) {
//                         if (m_objectID < 0x37d) {
//                             if (m_objectID < 0x376) {
//                                 if ((0x36f < m_objectID) ||
//                                    ((0x362 < m_objectID && ((m_objectID < 0x36b || (m_objectID - 0x36dU < 2))))))
//                                     goto LAB_003671c0;
//                             } else {
//                                 if (m_objectID < 0x378)
//                                     goto LAB_0036757e;
//                                 if (m_objectID < 0x37c)
//                                     goto LAB_003671c0;
//                             }
//                         } else {
//                         LAB_003671c0:
//                             m_objectType = 7;
//                             m_defaultZOrder = -7;
//                         }
//                     } else {
//                         if (m_objectID == 0x38a)
//                             goto LAB_003656a4;
//                         if (m_objectID < 0x38b) {
//                             if (0x382 < m_objectID) {
//                                 if (m_objectID < 0x386)
//                                     goto LAB_0036775c;
//                                 if (0x386 < m_objectID)
//                                     goto LAB_00367156;
//                             }
//                         } else {
//                             if (m_objectID == 0x38f)
//                                 goto LAB_00367156;
//                             if (m_objectID < 0x38f)
//                                 goto LAB_003656c4;
//                             if (m_objectID != 0x392) {
//                                 iVar8 = 0x393;
//                                 goto LAB_0036441e;
//                             }
//                             setDefaultMainColorMode(this, 1);
//                             m_objectType = 7;
//                             m_defaultZOrder = 1;
//                         }
//                     }
//                 } else {
//                 LAB_003656c4:
//                     setDefaultMainColorMode(this, 1);
//                     m_objectType = 7;
//                     m_defaultZOrder = -5;
//                     m_defaultZLayer = 3;
//                     m_colorZLayerRelated = true;
//                 }
//             } else if (m_objectID < 0x3c2) {
//                 if (0x3b7 < m_objectID)
//                     goto LAB_00367156;
//                 if (m_objectID < 0x3a8) {
//                     if (m_objectID < 0x39f) {
//                         if (m_objectID == 0x397) {
//                             m_objectType = 2;
//                             setDefaultMainColorMode(this, 0x3f2);
//                         } else {
//                             if (m_objectID < 0x397)
//                                 goto LAB_00365976;
//                             if (0x39c < m_objectID) {
//                                 m_objectType = 7;
//                                 setDefaultMainColorMode(this, 0x3f3);
//                                 m_defaultZLayer = 1;
//                                 m_updateCustomContentSize = true;
//                                 pCVar6 = &m_customBoxOffset;
//                                 if (m_objectID == 0x39d) {
//                                     m_width = 70.0;
//                                     m_height = 70.0;
//                                     cocos2d::CCPoint::CCPoint(&local_3c, -35.0, 35.0);
//                                     cocos2d::CCPoint::operator=(pCVar6, &local_3c);
//                                 } else {
//                                     m_width = 130.0;
//                                     m_height = 130.0;
//                                 }
//                                 cocos2d::CCPoint::CCPoint(&local_3c, -(m_width * 0.5), m_height * 0.5);
//                                 cocos2d::CCPoint::operator=(pCVar6, &local_3c);
//                             }
//                         }
//                     } else {
//                     LAB_003672a8:
//                         m_objectType = 7;
//                         m_defaultZOrder = -7;
//                         setDefaultMainColorMode(this, 0x3f3);
//                     }
//                 } else if (m_objectID < 0x3ab) {
//                     setDefaultMainColorMode(this, 0x3f3);
//                     m_objectType = 7;
//                     m_defaultZOrder = -5;
//                     m_defaultZLayer = 3;
//                 } else if (m_objectID < 0x3af)
//                     goto LAB_003656c4;
//             } else if (m_objectID == 0x3df) {
//             LAB_003664d6:
//                 m_objectType = 2;
//                 m_spriteHeightScale = 0.4;
//                 m_spriteWidthScale = 0.3;
//                 m_defaultZOrder = 1;
//             } else if (m_objectID < 0x3e0) {
//                 if (m_objectID == 0x3dd)
//                     goto LAB_003664d6;
//                 if (0x3dd < m_objectID)
//                     goto LAB_003664f2;
//                 if (m_objectID - 0x3c4U < 0xe)
//                     goto LAB_00367156;
//             } else if (m_objectID < 0x3ee) {
//                 if (m_objectID < 0x3e9) {
//                     if (m_objectID == 0x3e0)
//                         goto LAB_003664f2;
//                 } else {
//                     m_objectType = 7;
//                     m_defaultZOrder = 9;
//                     m_defaultZLayer = 3;
//                     setDefaultMainColorMode(this, 0x3ed);
//                 }
//             } else if (m_objectID < 0x3f0)
//                 goto LAB_0036775c;
//         } else if (m_objectID < 0x482) {
//             if (0x473 < m_objectID)
//                 goto LAB_003670f8;
//             if (m_objectID < 0x454) {
//                 if (m_objectID < 1099) {
//                     if (m_objectID == 0x419)
//                         goto LAB_0036775c;
//                     if (0x419 < m_objectID) {
//                         if (m_objectID < 0x436) {
//                             if (0x432 < m_objectID)
//                                 goto LAB_0036710e;
//                             if (m_objectID != 0x426)
//                                 goto LAB_003677a4;
//                         }
//                         goto LAB_003671c0;
//                     }
//                     if (m_objectID < 0x3fb)
//                         goto LAB_003672a8;
//                     if (0x408 < m_objectID)
//                         goto LAB_00367156;
//                 } else {
//                 LAB_003672c2:
//                     m_objectType = 7;
//                     m_defaultZOrder = -8;
//                     setDefaultMainColorMode(this, 0x3ef);
//                 }
//             } else if (m_objectID < 0x468) {
//                 if (m_objectID < 0x462) {
//                     if (m_objectID < 0x45f) {
//                         if (0x454 < m_objectID)
//                             goto LAB_003672c2;
//                         m_objectType = 7;
//                         m_defaultZOrder = -8;
//                         setDefaultMainColorMode(this, 0x3ef);
//                         (this->CCSprite).m_bDontDraw = true;
//                     } else if (m_objectID == 0x460)
//                         goto LAB_003676e6;
//                 } else {
//                 LAB_003676e6:
//                     m_objectType = 7;
//                     m_defaultZOrder = 4;
//                     m_width = 30.0;
//                     m_height = 30.0;
//                     m_updateCustomContentSize = true;
//                     setDefaultMainColorMode(this, 0x3f3);
//                 }
//             } else if (0x46b < m_objectID) {
//                 if (m_objectID < 0x472)
//                     goto LAB_003676e6;
//             LAB_0036770e:
//                 m_objectType = 7;
//                 m_defaultZOrder = 4;
//                 m_width = 15.0;
//                 m_height = 15.0;
//                 m_updateCustomContentSize = true;
//                 setDefaultMainColorMode(this, 0x3f3);
//             }
//         } else if (m_objectID == 0x4b2) {
//         LAB_0036768a:
//             m_objectType = 0;
//             m_defaultZOrder = 3;
//         } else if (m_objectID < 0x4b3) {
//             if (m_objectID < 0x492) {
//                 if (0x489 < m_objectID)
//                     goto LAB_00367156;
//                 if (m_objectID == 0x486)
//                     goto LAB_00367306;
//                 if (0x486 < m_objectID)
//                     goto LAB_003671c0;
//                 if (m_objectID == 0x485) {
//                     m_width = 15.0;
//                     m_height = 15.0;
//                 }
//             } else if (m_objectID < 0x4a7) {
//                 if (0x492 < m_objectID)
//                     goto LAB_00367156;
//                 m_objectType = 7;
//                 m_defaultZOrder = -7;
//                 m_isTintObject = true;
//                 m_width = 30.0;
//                 m_height = 30.0;
//                 m_updateCustomContentSize = true;
//             } else {
//                 m_objectType = 7;
//                 m_defaultZOrder = 10;
//                 setDefaultMainColorMode(this, 0x3ec);
//             }
//         } else if (m_objectID < 0x4bb) {
//             if (m_objectID < 0x4b9) {
//                 if (0x4b7 < m_objectID) {
//                     m_objectType = 0;
//                     m_defaultZOrder = 3;
//                     m_width = 15.0;
//                     m_height = 15.0;
//                     goto LAB_003677a4;
//                 }
//                 if (0x4b4 < m_objectID)
//                     goto LAB_003676c8;
//             }
//         LAB_003676b0:
//             m_objectType = 0;
//             m_defaultZOrder = 3;
//             m_width = 30.0;
//             m_height = 30.0;
//         } else if (m_objectID < 0x4c7) {
//             if (0x4c4 < m_objectID)
//                 goto LAB_003676b0;
//             if (m_objectID == 0x4c4)
//                 goto LAB_0036768a;
//         } else {
//         LAB_003676c8:
//             m_objectType = 7;
//             m_defaultZOrder = 3;
//         }
//     } else if (m_objectID < 0x765) {
//         if (m_objectID < 0x761) {
//             if (m_objectID < 0x64b) {
//                 if (m_objectID < 0x648) {
//                     if (m_objectID < 0x548) {
//                         if (0x543 < m_objectID)
//                             goto LAB_003671d0;
//                         if (m_objectID < 0x512) {
//                             if (0x50d < m_objectID)
//                                 goto LAB_00367156;
//                             if (m_objectID < 0x4f4) {
//                                 if (0x4f1 < m_objectID)
//                                     goto LAB_003671c0;
//                                 if (m_objectID < 0x4df) {
//                                     if (0x4d8 < m_objectID)
//                                         goto LAB_0036770e;
//                                     if (m_objectID == 0x4cc) {
//                                         setDefaultMainColorMode(this, 0x3ef);
//                                         m_objectType = 7;
//                                         m_defaultZOrder = 9;
//                                         m_defaultZLayer = 3;
//                                     } else if (0x4cb < m_objectID)
//                                         goto LAB_003672a8;
//                                 } else if (m_objectID == 0x4ed) {
//                                 LAB_00367306:
//                                     m_objectType = 7;
//                                 } else if (m_objectID < 0x4ee) {
//                                     if (m_objectID < 0x4ec)
//                                         goto LAB_003671c0;
//                                 } else if ((m_objectID == 0x4ef) || (m_objectID == 0x4f1))
//                                     goto LAB_00367306;
//                             } else {
//                                 if (m_objectID == 0x4fc)
//                                     goto LAB_00367668;
//                                 if (m_objectID < 0x4fd) {
//                                     if (0x4fa < m_objectID)
//                                         goto LAB_0036760a;
//                                     if (m_objectID < 0x4f5)
//                                         goto LAB_0036775c;
//                                 } else if (m_objectID < 0x50b)
//                                     goto LAB_003671c0;
//                             LAB_00365574:
//                                 setDefaultMainColorMode(this, 1);
//                                 m_objectType = 7;
//                                 m_defaultZOrder = 9;
//                                 m_defaultZLayer = 1;
//                             }
//                         } else if (m_objectID == 0x535) {
//                             m_objectType = 0x23;
//                             m_hasAudioScale = true;
//                             m_spriteWidthScale = 1.2;
//                             m_spriteHeightScale = 1.2;
//                             m_defaultZOrder = 0xc;
//                             m_defaultZLayer = 3;
//                             setDefaultMainColorMode(this, 0);
//                             if ((m_inLevelEditor == false) &&
//                                (pCVar2 = createAndAddParticle(this, m_objectType, "ringEffect.plist", 4,
//                                                               kCCPositionTypeGrouped),
//                                 pCVar2 != (CCParticleSystemQuad *)0 x0)) {
//                                 (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                 pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                 memset(&local_3c, 0, 0x10);
//                                 local_30 = 1.0;
//                                 local_3c.x = 1.0;
//                                 local_3c.y = 0.39215687;
//                                 local_34 = 0x3dc8c8c9;
//                                 (*pcVar12)(pCVar2, &local_3c);
//                                 pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                 memset(&local_3c, 0, 0x10);
//                                 local_30 = 1.0;
//                                 local_3c.x = 1.0;
//                                 (*pcVar12)(pCVar2, &local_3c);
//                             }
//                         } else if (m_objectID < 0x536) {
//                             if (m_objectID < 0x52f) {
//                                 if (m_objectID < 0x52d) {
//                                     if (m_objectID < 0x529) {
//                                         if (m_objectID < 0x513)
//                                             goto LAB_0036710e;
//                                     } else if (m_objectID != 0x52a)
//                                         goto LAB_003677a4;
//                                 }
//                                 goto LAB_00367156;
//                             }
//                             if (m_objectID == 0x533) {
//                                 m_defaultZOrder = 10;
//                                 m_objectType = 0x21;
//                                 m_defaultZLayer = 5;
//                                 m_zFixedZLayer = true;
//                                 m_isPortalObject = true;
//                                 if (m_inLevelEditor == false) {
//                                     pCVar2 = createAndAddParticle(this, 0x21, "portalEffect02.plist", 4, kCCPositionTypeGrouped);
//                                     cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                                     cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                     if (pCVar2 != (CCParticleSystemQuad *)0x0) {
//                                         (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                         pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                         memset(&local_3c, 0, 0x10);
//                                         local_30 = 1.0;
//                                         local_3c.x = 0.78431374;
//                                         local_34 = 1.0;
//                                         (*pcVar12)(pCVar2, &local_3c);
//                                         pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                         memset(&local_3c, 0, 0x10);
//                                         local_30 = 1.0;
//                                         local_3c.x = 0.78431374;
//                                         local_34 = 1.0;
//                                         (*pcVar12)(pCVar2, &local_3c);
//                                     }
//                                 }
//                             } else if (m_objectID < 0x534) {
//                                 if (m_objectID < 0x531)
//                                     goto LAB_00365976;
//                             } else {
//                                 m_defaultZOrder = 0xc;
//                                 m_objectType = 0x22;
//                                 m_defaultZLayer = 3;
//                                 if ((m_inLevelEditor == false) &&
//                                    (pCVar2 = createAndAddParticle(this, 0x22, "bumpEffect.plist", 0, kCCPositionTypeGrouped),
//                                     pCVar2 != (CCParticleSystemQuad *)0x0)) {
//                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                     memset(&local_3c, 0, 0x10);
//                                     local_30 = 1.0;
//                                     local_3c.x = 1.0;
//                                     local_3c.y = 0.19607843;
//                                     local_34 = 0x3e48c8c9;
//                                     (*pcVar12)(pCVar2, &local_3c);
//                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                     memset(&local_3c, 0, 0x10);
//                                     local_30 = 1.0;
//                                     local_3c.x = 1.0;
//                                     (*pcVar12)(pCVar2, &local_3c);
//                                 }
//                             }
//                         } else {
//                             if (m_objectID < 0x53f) {
//                                 if (m_objectID < 0x53d) {
//                                     if (0x53b < m_objectID)
//                                         goto LAB_00366550;
//                                     if (0x539 < m_objectID)
//                                         goto LAB_0036774e;
//                                     if (m_objectID == 0x536)
//                                         goto LAB_00367432;
//                                     goto LAB_003677a4;
//                                 }
//                             } else {
//                                 if (0x541 < m_objectID)
//                                     goto LAB_0036775c;
//                                 if (m_objectID < 0x540)
//                                     goto LAB_00366550;
//                             }
//                         LAB_00366560:
//                             m_objectType = 0x19;
//                             m_doesntFade = true;
//                         }
//                     } else {
//                         if (m_objectID < 0x5e9) {
//                             if (0x5e5 < m_objectID)
//                                 goto LAB_003671e6;
//                             if (m_objectID < 0x5a9) {
//                                 if (0x5a1 < m_objectID)
//                                     goto LAB_00367266;
//                                 if (m_objectID < 0x56b) {
//                                     if (0x556 < m_objectID) {
//                                     LAB_00367220:
//                                         m_objectType = 7;
//                                         m_colorZLayerRelated = true;
//                                         m_defaultZOrder = -5;
//                                         m_defaultZLayer = 3;
//                                         setDefaultMainColorMode(this, 4);
//                                         goto LAB_003677a4;
//                                     }
//                                     if (m_objectID < 0x54c)
//                                         goto LAB_00367244;
//                                 } else if (m_objectID != 0x573) {
//                                     if (0x572 < m_objectID) {
//                                         if (m_objectID < 0x597)
//                                             goto LAB_003677a4;
//                                         goto LAB_003671e6;
//                                     }
//                                     goto LAB_00367244;
//                                 }
//                             } else if (m_objectID < 0x5b9) {
//                                 if (m_objectID < 0x5b5) {
//                                     if (0x5ac < m_objectID)
//                                         goto LAB_00367220;
//                                     m_objectType = 7;
//                                     m_colorZLayerRelated = true;
//                                     m_defaultZOrder = -9;
//                                     setDefaultMainColorMode(this, 2);
//                                     m_maybeNotColorable = true;
//                                     goto LAB_003677a4;
//                                 }
//                             } else if (m_objectID != 0x5d8) {
//                                 if (m_objectID < 0x5d9) {
//                                     if (m_objectID - 0x5bfU < 3)
//                                         goto LAB_003671d0;
//                                 } else {
//                                     iVar8 = 0x5e3;
//                                 LAB_0036495e:
//                                     if (m_objectID == iVar8)
//                                         goto LAB_003671d0;
//                                 }
//                                 goto LAB_003677a4;
//                             }
//                             goto LAB_003671d0;
//                         }
//                         if (m_objectID == 0x635) {
//                         LAB_0036760a:
//                             commonInteractiveSetup(this);
                            
//                             if (m_objectID == 0x63e) {
//                                 uVar9 = false;
//                             } else {
//                                 m_objectID = m_objectID + -0xe11;
//                                 if (m_objectID != 0) {
//                                     m_objectID = 1;
//                                 }
//                                 uVar9 = (undefined)m_objectID;
//                             }
//                             m_colorZLayerRelated = (bool)uVar9;
//                             m_width = 25.0;
//                             m_height = 20.0;
//                         } else if (m_objectID < 0x636) {
//                             if (m_objectID == 0x5fa) {
//                                 m_objectType = 7;
//                             } else if (m_objectID < 0x5fb) {
//                                 if (m_objectID == 0x5ed) {
//                                     setDefaultMainColorMode(this, 1);
//                                     m_objectType = 7;
//                                     m_defaultZOrder = 9;
//                                     m_defaultZLayer = 3;
//                                     m_colorZLayerRelated = true;
//                                 } else {
//                                     if (0x5ed < m_objectID) {
//                                         flag_a = m_objectID == 0x5f0;
//                                         goto LAB_00364420;
//                                     }
//                                     if (m_objectID < 0x5ec)
//                                         goto LAB_00367266;
//                                 }
//                             } else if (m_objectID == 0x632) {
//                                 setDefaultMainColorMode(this, 0x3f3);
//                                 m_defaultZOrder = 0;
//                                 m_objectType = 7;
//                                 m_defaultZLayer = 1;
//                                 *(undefined *)&m_particleScale = 1;
//                                 if (m_inLevelEditor == false) {
//                                     createAndAddParticle(this, 7, "fireballEffect.plist", -2, kCCPositionTypeRelative);
//                                     cocos2d::CCPoint::CCPoint(&local_3c, 0.0, 0.0);
//                                     cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                     m_particleUseObjectColor = true;
//                                     m_particleLocked = true;
//                                 }
//                             } else if (m_objectID < 0x633) {
//                                 if (m_objectID != 0x630) {
//                                     iVar8 = 0x631;
//                                     goto LAB_0036441e;
//                                 }
//                             LAB_00365976:
//                                 m_objectType = 0x2f;
//                                 m_isGroupDisabled = true;
//                                 m_colorSpriteLocked = true;
//                                 setDefaultMainColorMode(this, 0x3f2);
//                             } else {
//                                 if (m_objectID == 0x633)
//                                     goto LAB_0036760a;
//                                 if (m_objectID == 0x634)
//                                     goto LAB_00367668;
//                             }
//                         } else {
//                             if (m_objectID == 0x63e)
//                                 goto LAB_0036760a;
//                             if (m_objectID < 0x63f) {
//                                 if (m_objectID == 0x63b)
//                                     goto LAB_0036775c;
//                                 if (m_objectID < 0x63c) {
//                                     if (m_objectID == 0x636) {
//                                     LAB_00367668:
//                                         m_colorZLayerRelated = true;
//                                         m_objectType = 7;
//                                         m_isGroupDisabled = true;
//                                         m_defaultZOrder = 9;
//                                         m_colorSpriteLocked = true;
//                                         setDefaultMainColorMode(this, 1);
//                                     } else if (m_objectID == 0x63a) {
//                                         m_objectType = 0x24;
//                                         m_hasAudioScale = true;
//                                         m_width = 36.0;
//                                         m_height = 36.0;
//                                         m_defaultZOrder = 0xc;
//                                         m_defaultZLayer = 3;
//                                         setDefaultMainColorMode(this, 0x3f3);
//                                         if (m_inLevelEditor == false) {
//                                             pCVar2 = createAndAddParticle(this, m_objectType, "ringEffect.plist", 4,
//                                                                           kCCPositionTypeGrouped);
//                                             if (pCVar2 != (CCParticleSystemQuad *)0x0) {
//                                                 (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                                 pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                                 memset(&local_3c, 0, 0x10);
//                                                 local_30 = 1.0;
//                                                 local_3c.x = 1.0;
//                                                 local_3c.y = 0.78431374;
//                                                 local_34 = 0x3e48c8c9;
//                                                 (*pcVar12)(pCVar2, &local_3c);
//                                                 pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                                 memset(&local_3c, 0, 0x10);
//                                                 local_3c.y = 0.39215687;
//                                                 local_34 = 0x3dc8c8c9;
//                                                 goto LAB_00365cc4;
//                                             }
//                                             goto UPDATE_PARTICLECOLOR;
//                                         }
//                                     }
//                                 } else {
//                                     setDefaultMainColorMode(this, 0x3f3);
//                                     m_objectType = 7;
//                                     m_defaultZOrder = 1;
//                                     m_defaultZLayer = 3;
//                                 }
//                             } else if (m_objectID == 0x641) {
//                                 setDefaultMainColorMode(this, 0x3f3);
//                                 m_objectType = 7;
//                                 m_defaultZOrder = 8;
//                                 m_defaultZLayer = 3;
//                                 m_colorZLayerRelated = true;
//                             } else if (m_objectID < 0x642) {
//                                 if (m_objectID == 0x63f)
//                                     goto LAB_00367668;
//                                 if (m_objectID == 0x640)
//                                     goto LAB_003653b8;
//                             } else {
//                                 setDefaultMainColorMode(this, 0x3f3);
//                                 m_objectType = 7;
//                                 m_defaultZOrder = 0xc;
//                                 m_defaultZLayer = 3;
//                             }
//                         }
//                     }
//                 } else {
//                     setDefaultMainColorMode(this, 0x3f3);
//                     m_objectType = 7;
//                     m_defaultZOrder = 10;
//                     m_defaultZLayer = 3;
//                 }
//             } else {
//                 if (m_objectID == 0x6e2)
//                     goto LAB_00365592;
//                 if (m_objectID < 0x6e3) {
//                     if (m_objectID == 0x6bb) {
//                     LAB_003675d0:
//                         m_objectType = 0x19;
//                         m_defaultZOrder = 1;
//                         m_width = 30.0;
//                         m_height = 30.0;
//                         m_maybeShouldFixSlopes = true;
//                     } else if (m_objectID < 0x6bc) {
//                         if (m_objectID == 0x6a4) {
//                             setDefaultMainColorMode(this, 0x3f3);
//                             m_defaultZOrder = 0;
//                             m_defaultZLayer = 3;
//                             m_objectType = 7;
//                             if (m_inLevelEditor == false) {
//                                 createAndAddParticle(this, 7, "bubbleEffect.plist", 0, kCCPositionTypeGrouped);
//                                 cocos2d::CCPoint::CCPoint(&local_3c, 0.0, 0.0);
//                                 cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                 m_particleUseObjectColor = true;
//                             }
//                         } else if (m_objectID < 0x6a5) {
//                             if (m_objectID < 0x675) {
//                                 if (0x654 < m_objectID)
//                                     goto LAB_003671d0;
//                                 if (m_objectID != 0x64f) {
//                                     if (m_objectID < 0x650) {
//                                         if (0x64d < m_objectID)
//                                             goto LAB_003677a4;
//                                     } else if (m_objectID != 0x650) {
//                                         iVar8 = 0x651;
//                                         goto LAB_0036495e;
//                                     }
//                                     goto LAB_0036775c;
//                                 }
//                                 setDefaultMainColorMode(this, 1);
//                                 m_objectType = 7;
//                                 m_defaultZOrder = 1;
//                             } else {
//                                 if (m_objectID < 0x695)
//                                     goto LAB_00367220;
//                                 if (m_objectID < 0x6a1)
//                                     goto LAB_00365888;
//                             }
//                         } else {
//                             if (m_objectID == 0x6b4)
//                                 goto LAB_00366478;
//                             if (m_objectID < 0x6b5) {
//                                 if (m_objectID == 0x6a8) {
//                                     m_objectID = 0x25;
//                                 LAB_00365fd0:
//                                     m_objectType = m_objectID;
//                                     m_hasAudioScale = true;
//                                     m_spriteWidthScale = 1.2;
//                                     m_spriteHeightScale = 1.2;
//                                     m_defaultZOrder = 0xc;
//                                     m_defaultZLayer = 3;
//                                     setDefaultMainColorMode(this, 0);
//                                     if ((m_inLevelEditor == false) &&
//                                        (pCVar2 = createAndAddParticle(this, m_objectType, "ringEffect.plist", 4,
//                                                                       kCCPositionTypeGrouped),
//                                         pCVar2 != (CCParticleSystemQuad *)0x0)) {
//                                         (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                         pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                         if (m_objectID == 0x6a8) {
//                                             memset(&local_3c, 0, 0x10);
//                                             local_3c.y = 1.0;
//                                         } else {
//                                             memset(&local_3c, 0, 0x10);
//                                             local_3c.x = 1.0;
//                                         }
//                                         local_30 = 1.0;
//                                         (*pcVar12)(pCVar2, &local_3c);
//                                         pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                         memset(&local_3c, 0, 0x10);
//                                         local_30 = 1.0;
//                                         (*pcVar12)(pCVar2, &local_3c);
//                                     }
//                                 } else if (m_objectID < 0x6a8) {
//                                     m_objectType = 2;
//                                     m_defaultZOrder = 1;
//                                     m_useGlowBGColor = true;
//                                     m_objectRadius = 6.0;
//                                 } else if (0x6ae < m_objectID)
//                                     goto LAB_00366314;
//                             } else {
//                                 if (0x6b9 < m_objectID)
//                                     goto LAB_00366478;
//                                 if (m_objectID < 0x6b7) {
//                                     if (m_objectID == 0x6b5)
//                                         goto LAB_003675d0;
//                                     if (m_objectID == 0x6b6)
//                                         goto LAB_003675ec;
//                                 } else {
//                                 LAB_00366314:
//                                     m_objectType = 2;
//                                     m_spriteHeightScale = 0.4;
//                                     m_spriteWidthScale = 0.3;
//                                     if ((m_objectID == 9) || (m_objectID == 0x6b3)) {
//                                         pcVar12 = (code *)this->vtable->cocos2d_CCSprite_setDisplayFrame;
//                                         uVar3 = cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
//                                         m_objectID = rand();
//                                         fVar15 = (float)FixedToFP(m_objectID, 0x20, 0x20, 0x1f, 0, 0);
//                                         m_objectID = lroundf(fVar15 + fVar15);
//                                         pCVar4 = (CCString *)
//                                             cocos2d::CCString::createWithFormat("pit_%02d_001.png", m_objectID + 1);
//                                         uVar5 = cocos2d::CCString::getCString(pCVar4);
//                                         uVar3 = cocos2d::CCSpriteFrameCache::spriteFrameByName(uVar3, uVar5);
//                                         (*pcVar12)(this, uVar3);
//                                     } else if (m_objectID == 0x87) {
//                                         m_objectID = rand();
//                                         fVar15 = (float)FixedToFP(m_objectID, 0x20, 0x20, 0x1f, 0, 0);
//                                         m_objectID = lroundf(fVar15 * 3.0);
//                                         iVar8 = m_objectID + 1;
//                                         if (iVar8 == DAT_00aaf010) {
//                                             iVar8 = m_objectID + 2;
//                                         }
//                                         pcVar12 = (code *)this->vtable->cocos2d_CCSprite_setDisplayFrame;
//                                         if (4 < iVar8) {
//                                             iVar8 = 1;
//                                         }
//                                         uVar3 = cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
//                                         pCVar4 = (CCString *)
//                                             cocos2d::CCString::createWithFormat("pit_b_%02d_001.png", iVar8);
//                                         uVar5 = cocos2d::CCString::getCString(pCVar4);
//                                         uVar3 = cocos2d::CCSpriteFrameCache::spriteFrameByName(uVar3, uVar5);
//                                         (*pcVar12)(this, uVar3);
//                                         DAT_00aaf010 = iVar8;
//                                     }
                                    
//                                     if (m_objectID == 0xf4) {
//                                     LAB_00366458:
//                                         cocos2d::CCPoint::CCPoint(&local_3c, 5.0, 0.0);
//                                         cocos2d::CCPoint::operator=(&m_customBoxOffset, &local_3c);
//                                         m_spriteWidthScale = 0.2;
//                                     } else if (m_objectID < 0xf5) {
//                                         if (m_objectID == 0xf3) {
//                                         LAB_003663fa:
//                                             cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                                             cocos2d::CCPoint::operator=(&m_customBoxOffset, &local_3c);
//                                             m_spriteWidthScale = 0.2;
//                                         }
//                                     } else {
//                                         if (m_objectID == 0x6b8)
//                                             goto LAB_003663fa;
//                                         if (m_objectID == 0x6b9)
//                                             goto LAB_00366458;
//                                     }
//                                 }
//                             }
//                         }
//                     } else if (m_objectID < 0x6d7) {
//                         if (0x6d4 < m_objectID)
//                             goto LAB_0036757e;
//                         if (m_objectID < 0x6cf) {
//                             if (0x6c8 < m_objectID)
//                                 goto LAB_0036730e;
//                             if (m_objectID < 0x6c2) {
//                                 if (m_objectID < 0x6bd)
//                                     goto LAB_003675ec;
//                                 goto LAB_00366478;
//                             }
//                             if (m_objectID < 0x6c6)
//                                 goto LAB_003664d6;
//                         } else {
//                             if (m_objectID < 0x6d3)
//                                 goto LAB_0036757e;
//                             m_objectType = 0x19;
//                             m_isSolid = true;
//                         }
//                     } else if (m_objectID == 0x6dc) {
//                     LAB_00365526:
//                         setDefaultMainColorMode(this, 0x3ef);
//                         m_objectType = 7;
//                         m_defaultZOrder = 9;
//                         m_defaultZLayer = 3;
//                         if (m_objectID == 0x6dc) {
//                             m_maybeNotColorable = true;
//                         }
//                     } else if (m_objectID < 0x6dd) {
//                         if (0x6da < m_objectID)
//                             goto LAB_003652c2;
//                         if (m_objectID < 0x6d9) {
//                             if (m_objectID == 0x6d7) {
//                                 m_objectID = 0x26;
//                                 goto LAB_00365fd0;
//                             }
//                         } else {
//                         LAB_00365956:
//                             setDefaultMainColorMode(this, 0x3ef);
//                             m_objectType = 7;
//                             m_defaultZOrder = 9;
//                             m_defaultZLayer = 3;
//                         }
//                     } else if (m_objectID == 0x6df) {
//                     LAB_003655be:
//                         setDefaultMainColorMode(this, 1);
//                         m_objectType = 7;
//                         m_defaultZOrder = 9;
//                         m_defaultZLayer = 1;
//                         m_updateCustomContentSize = true;
//                         m_width = 60.0;
//                         m_height = 30.0;
//                     } else {
//                         if (m_objectID < 0x6e0) {
//                             if (m_objectID == 0x6dd)
//                                 goto LAB_00365956;
//                             if (m_objectID != 0x6de)
//                                 goto LAB_003677a4;
//                         } else if (m_objectID != 0x6e0) {
//                             if (m_objectID != 0x6e1)
//                                 goto LAB_003677a4;
//                             goto LAB_003655be;
//                         }
//                     LAB_00365592:
//                         setDefaultMainColorMode(this, 1);
//                         m_objectType = 7;
//                         m_defaultZOrder = 9;
//                         m_defaultZLayer = 1;
//                         m_updateCustomContentSize = true;
//                         m_width = 30.0;
//                         m_height = 30.0;
//                     }
//                 } else if (m_objectID < 0x713) {
//                     if (0x710 < m_objectID)
//                         goto LAB_00367266;
//                     if (m_objectID < 0x705) {
//                         if (0x700 < m_objectID)
//                             goto LAB_003671e6;
//                         if (m_objectID < 0x6f9) {
//                             if (0x6f4 < m_objectID) {
//                             LAB_00367244:
//                                 m_objectType = 7;
//                                 m_colorZLayerRelated = true;
//                                 m_defaultZOrder = -9;
//                                 setDefaultMainColorMode(this, 2);
//                                 m_maybeIsGoEffectObject = true;
//                                 goto LAB_003677a4;
//                             }
//                             if (m_objectID < 0x6e9) {
//                                 if (0x6e3 < m_objectID)
//                                     goto LAB_003656c4;
//                                 goto LAB_003655be;
//                             }
//                         } else if (0x6fc < m_objectID)
//                             goto LAB_00367244;
//                     LAB_003671d0:
//                         m_objectType = 7;
//                         m_colorZLayerRelated = true;
//                         m_defaultZOrder = -7;
//                         goto LAB_003677a4;
//                     }
//                     if (m_objectID < 0x70d) {
//                         if (0x70a < m_objectID) {
//                         LAB_003671e6:
//                             m_objectType = 7;
//                             m_defaultZOrder = -7;
//                             m_colorZLayerRelated = true;
//                             m_maybeIsGoEffectObject = true;
//                             goto LAB_003677a4;
//                         }
//                         if (m_objectID < 0x707) {
//                         LAB_00365888:
//                             setDefaultMainColorMode(this, 0x3ec);
//                             m_objectType = 7;
//                             m_defaultZOrder = 9;
//                             m_defaultZLayer = 3;
//                             goto LAB_003677a4;
//                         }
//                     } else if (0x70e < m_objectID)
//                         goto LAB_003671e6;
//                 LAB_00367266:
//                     m_objectType = 7;
//                     m_colorZLayerRelated = true;
//                     m_defaultZOrder = -9;
//                     setDefaultMainColorMode(this, 2);
//                     m_maybeIsGoEffectObject = true;
//                 } else if (m_objectID < 0x725) {
//                     if (m_objectID < 0x71f) {
//                         if (m_objectID < 0x718) {
//                             if ((m_objectID < 0x716) && (0x714 < m_objectID))
//                                 goto LAB_003652c2;
//                         LAB_0036775c:
//                             m_objectType = 0x14;
//                             m_isInvisible = (bool)(m_inLevelEditor ^ 1);
//                             m_width = 30.0;
//                             m_height = 30.0;
//                         } else if (m_objectID < 0x71c) {
//                             if (0x718 < m_objectID)
//                                 goto LAB_0036775c;
//                             m_objectType = 0x27;
//                             m_isInvisible = (bool)(m_inLevelEditor ^ 1);
//                             m_hasSepcialChild = true;
//                         } else if (m_objectID < 0x71e)
//                             goto LAB_00367554;
//                     } else {
//                     LAB_00367554:
//                         m_objectType = 7;
//                         m_defaultZOrder = -7;
//                         setDefaultMainColorMode(this, 1);
//                     }
//                 } else if (m_objectID < 0x739) {
//                     if (m_objectID < 0x733) {
//                         if (m_objectID == 0x726)
//                             goto LAB_00365956;
//                         if (m_objectID < 0x726) {
//                         LAB_003652c2:
//                             m_objectType = 0x28;
//                             m_isInvisible = (bool)(m_inLevelEditor ^ 1);
//                             m_hasSepcialChild = true;
//                             flag_a = m_objectID == 0xe3d;
//                         LAB_003652e0:
//                             if (flag_a) {
//                                 m_objectRadius = 15.0;
//                             }
//                         } else if (m_objectID - 0x72bU < 4) {
//                             m_objectType = 7;
//                             m_defaultZOrder = 9;
//                             m_defaultZLayer = 3;
//                         }
//                     } else {
//                     LAB_003653b8:
//                         setDefaultMainColorMode(this, 0x3f3);
//                         m_objectType = 7;
//                         m_defaultZOrder = 9;
//                         m_defaultZLayer = 3;
//                         m_colorZLayerRelated = true;
//                     }
//                 } else {
//                     if (0x75d < m_objectID)
//                         goto LAB_00365574;
//                     if (m_objectID < 0x745) {
//                         iVar8 = 0x743;
//                     LAB_003651d6:
//                         if (m_objectID == iVar8)
//                             goto LAB_003652c2;
//                     } else {
//                         m_objectType = 7;
//                         m_defaultZOrder = -7;
//                         m_colorZLayerRelated = true;
//                         setDefaultSecondaryColorMode(this, 0x3f3);
//                     }
//                 }
//             }
//         } else {
//         LAB_00367324:
//             m_objectType = 7;
//             m_defaultZOrder = -4;
//             m_isTintObject = true;
//         }
//     } else if (m_objectID == 0xbd8) {
//         m_objectType = 7;
//         m_isInvisible = (bool)(m_inLevelEditor ^ 1);
//     } else if (m_objectID < 0xbd9) {
//         if (m_objectID == 0xa83)
//             goto LAB_00365294;
//         if (m_objectID < 0xa84) {
//             if (m_objectID == 0x810) {
//             LAB_00366e30:
//                 m_defaultZOrder = 10;
//                 m_objectType = 7;
//                 m_isTeleportObject = m_objectID == 0x2ed;
//                 m_isPortalObject = true;
//                 m_defaultZLayer = 5;
//                 m_zFixedZLayer = true;
//                 if (m_inLevelEditor == false) {
//                     pCVar2 = createAndAddParticle(this, 7, "portalEffect02.plist", 4, kCCPositionTypeGrouped);
//                     cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                     cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                     if (pCVar2 != (CCParticleSystemQuad *)0x0) {
//                         (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                         pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                         memset(&local_3c, 0, 0x10);
//                         local_30 = 1.0;
//                         local_3c.x = 1.0;
//                         local_3c.y = 0.78431374;
//                         (*pcVar12)(pCVar2, &local_3c);
//                         pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                         memset(&local_3c, 0, 0x10);
//                         local_30 = 1.0;
//                         local_3c.x = 1.0;
//                         local_3c.y = 0.39215687;
//                         (*pcVar12)(pCVar2, &local_3c);
//                     }
//                 }
//             } else if (m_objectID < 0x811) {
//                 if (m_objectID < 0x789) {
//                     if (m_objectID < 0x782) {
//                         if (m_objectID < 0x776) {
//                             if (0x773 < m_objectID)
//                                 goto LAB_003670ea;
//                             if (m_objectID < 0x76f) {
//                                 setDefaultMainColorMode(this, 1);
//                                 m_objectType = 7;
//                                 m_defaultZOrder = 9;
//                                 m_defaultZLayer = 3;
//                             } else if (0x771 < m_objectID)
//                                 goto LAB_0036757e;
//                         } else if (0x777 < m_objectID) {
//                             if (m_objectID < 0x77e)
//                                 goto LAB_0036775c;
//                             if (0x77e < m_objectID) {
//                                 setDefaultMainColorMode(this, 1);
//                                 m_colorZLayerRelated = true;
//                                 m_objectType = 7;
//                                 m_defaultZOrder = -5;
//                                 m_defaultZLayer = 3;
//                             }
//                         }
//                     } else {
//                         setDefaultMainColorMode(this, 1);
//                         m_objectType = 7;
//                         m_defaultZOrder = 10;
//                         m_defaultZLayer = 3;
//                         m_colorZLayerRelated = true;
//                     }
//                 } else {
//                     if (m_objectID == 0x7ac)
//                         goto LAB_003656c4;
//                     if (m_objectID < 0x7ad) {
//                         if (m_objectID == 0x78d) {
//                             m_defaultZOrder = 10;
//                             m_objectType = 0x29;
//                             m_defaultZLayer = 5;
//                             m_zFixedZLayer = true;
//                             m_isPortalObject = true;
//                             if (m_inLevelEditor == false) {
//                                 pCVar2 = createAndAddParticle(this, 0x29, "portalEffect02.plist", 4, kCCPositionTypeGrouped);
//                                 cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                                 cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                                 if (pCVar2 != (CCParticleSystemQuad *)0x0) {
//                                     (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                     memset(&local_3c, 0, 0x10);
//                                     local_30 = 1.0;
//                                     local_3c.x = 1.0;
//                                     local_3c.y = 1.0;
//                                     (*pcVar12)(pCVar2, &local_3c);
//                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                     memset(&local_3c, 0, 0x10);
//                                     local_30 = 1.0;
//                                     local_3c.x = 1.0;
//                                     local_3c.y = 0.78431374;
//                                     (*pcVar12)(pCVar2, &local_3c);
//                                 }
//                             }
//                         } else if (m_objectID < 0x78e) {
//                             if (0x78a < m_objectID)
//                                 goto LAB_0036775c;
//                         } else if (m_objectID < 0x790)
//                             goto LAB_0036775c;
//                     } else if (m_objectID < 0x7e1) {
//                         if (0x7de < m_objectID)
//                             goto LAB_0036775c;
//                         if (m_objectID == 0x7dc)
//                             goto LAB_00365976;
//                     } else {
//                         if (m_objectID == 0x80e)
//                             goto LAB_0036775c;
//                         if (m_objectID == 0x80f) {
//                             m_objectType = 0x14;
//                             m_width = 30.0;
//                             m_height = 30.0;
//                             m_isPortalObject = true;
//                             m_defaultZLayer = 3;
//                         }
//                     }
//                 }
//             } else {
//                 if (m_objectID < 0xa2d) {
//                     if (m_objectID < 0x8c7) {
//                         if (m_objectID < 0x8b6) {
//                             if (m_objectID < 0x8b0) {
//                                 if (m_objectID == 0x815)
//                                     goto LAB_003652c2;
//                                 if (m_objectID < 0x816) {
//                                     if (0x811 < m_objectID)
//                                         goto LAB_0036775c;
//                                 } else if (m_objectID < 0x8af)
//                                     goto LAB_00365294;
//                                 goto LAB_003677a4;
//                             }
//                         } else {
//                             if (m_objectID < 0x8bd)
//                                 goto LAB_003652ee;
//                             if (0x8c5 < m_objectID)
//                                 goto LAB_003677a4;
//                         }
//                     }
//                     goto LAB_00365294;
//                 }
//                 if (m_objectID == 0xa4b) {
//                     setDefaultMainColorMode(this, 1);
//                     m_objectType = 7;
//                     m_defaultZOrder = 9;
//                     m_defaultZLayer = 3;
//                     m_colorZLayerRelated = true;
//                     setupPixelScale(this);
//                 } else if (m_objectID < 0xa4c) {
//                     if ((0xa2d < m_objectID) && ((m_objectID < 0xa45 || (0xa46 < m_objectID))))
//                         goto LAB_00365294;
//                 } else {
//                     if (m_objectID != 0xa80) {
//                         if ((m_objectID < 0xa80) || (m_objectID == 0xa81))
//                             goto LAB_00365294;
//                         if (m_objectID != 0xa82)
//                             goto LAB_003677a4;
//                     }
//                 LAB_00365344:
//                     setDefaultMainColorMode(this, 1);
//                     m_objectType = 7;
//                     m_defaultZOrder = 10;
//                     m_defaultZLayer = 3;
//                     m_colorZLayerRelated = true;
//                     m_maybeNotColorable = true;
//                     setupPixelScale(this);
//                 }
//             }
//         } else if (m_objectID < 0xb66) {
//             if (0xb5c < m_objectID)
//                 goto LAB_0036775c;
//             if (m_objectID < 0xb30) {
//                 if (m_objectID < 0xb24) {
//                     if (m_objectID < 0xa91) {
//                         if (m_objectID < 0xa8f) {
//                             if (m_objectID != 0xa85) {
//                                 if (m_objectID < 0xa85)
//                                     goto LAB_00365344;
//                                 if (5 < m_objectID - 0xa87U)
//                                     goto LAB_003677a4;
//                             }
//                             goto LAB_00365294;
//                         }
//                     } else if (m_objectID != 0xad5) {
//                         if (m_objectID < 0xad6) {
//                             if (m_objectID - 0xa94U < 0x3f)
//                                 goto LAB_003656ea;
//                         } else if (0xad7 < m_objectID)
//                             goto LAB_003656ea;
//                         goto LAB_003677a4;
//                     }
//                 LAB_003656ea:
//                     setDefaultMainColorMode(this, 1);
//                     m_objectType = 7;
//                     m_defaultZOrder = -5;
//                     m_defaultZLayer = 1;
//                     m_colorZLayerRelated = true;
//                 } else {
//                     setDefaultMainColorMode(this, 1);
//                     m_objectType = 7;
//                     m_defaultZOrder = -2;
//                     m_defaultZLayer = 1;
//                     m_colorZLayerRelated = true;
//                 }
//             } else if (m_objectID < 0xb56) {
//                 if (0xb52 < m_objectID)
//                     goto LAB_0036775c;
//                 if (m_objectID == 0xb32)
//                     goto LAB_003652c2;
//                 if ((0xb31 < m_objectID) && (m_objectID - 0xb4fU < 3)) {
//                     setDefaultMainColorMode(this, 0x3f3);
//                     m_objectType = 7;
//                     m_defaultZOrder = -5;
//                     m_defaultZLayer = 1;
//                 }
//             } else if (m_objectID < 0xb5a) {
//                 if (0xb57 < m_objectID)
//                     goto LAB_0036775c;
//                 if (m_objectID == 0xb56)
//                     goto LAB_00366d30;
//                 if (m_objectID == 0xb57) {
//                     m_objectType = 0x14;
//                     m_isInvisible = (bool)(m_inLevelEditor ^ 1);
//                     m_width = 30.0;
//                     m_height = 30.0;
//                     m_defaultZOrder = 0;
//                 }
//             } else {
//                 iVar8 = 0xb5b;
//             LAB_0036441e:
//                 flag_a = m_objectID == iVar8;
//             LAB_00364420:
//                 if (flag_a)
//                     goto LAB_0036775c;
//             }
//         } else if (m_objectID < 2999) {
//             if (m_objectID < 0xbab) {
//                 if (m_objectID < 0xb91) {
//                     if (m_objectID < 0xb7f) {
//                         if (m_objectID == 0xb6e) {
//                             m_defaultZOrder = 10;
//                             m_objectType = 0x2a;
//                             m_defaultZLayer = 5;
//                             m_zFixedZLayer = true;
//                             m_isPortalObject = true;
//                             if (m_inLevelEditor == false) {
//                                 pCVar2 = createAndAddParticle(this, 0x2a, "portalEffect02.plist", 4, kCCPositionTypeGrouped);
//                                 if (pCVar2 != (CCParticleSystemQuad *)0x0) {
//                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                                     memset(&local_3c, 0, 0x10);
//                                     local_30 = 1.0;
//                                     local_3c.y = 1.0;
//                                     (*pcVar12)(pCVar2, &local_3c);
//                                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                                     memset(&local_3c, 0, 0x10);
//                                     local_30 = 1.0;
//                                     local_3c.y = 1.0;
//                                     (*pcVar12)(pCVar2, &local_3c);
//                                 }
//                                 cocos2d::CCPoint::CCPoint(&local_3c, -5.0, 0.0);
//                                 cocos2d::CCPoint::operator=(&m_ParticlePostion, &local_3c);
//                             }
//                         } else {
//                             if (0xb6e < m_objectID)
//                                 goto LAB_003656ea;
//                             if (0xb66 < m_objectID)
//                                 goto LAB_0036775c;
//                         }
//                     } else {
//                         setDefaultMainColorMode(this, 1);
//                         m_objectType = 7;
//                         m_defaultZOrder = -5;
//                         m_defaultZLayer = -1;
//                         m_colorZLayerRelated = true;
//                     }
//                 } else if (m_objectID < 0xb9d) {
//                     setDefaultMainColorMode(this, 2);
//                     m_objectType = 7;
//                     m_defaultZOrder = 0;
//                     m_defaultZLayer = 1;
//                     m_colorZLayerRelated = true;
//                 } else {
//                     setDefaultMainColorMode(this, 0x3ec);
//                     m_objectType = 7;
//                     m_defaultZOrder = 5;
//                     m_defaultZLayer = 1;
//                     m_colorZLayerRelated = true;
//                 }
//             } else {
//                 setDefaultMainColorMode(this, 1);
//                 m_objectType = 7;
//                 m_defaultZOrder = 5;
//                 m_defaultZLayer = 1;
//                 m_colorZLayerRelated = true;
//             }
//         } else if (m_objectID < 0xbc8) {
//             if (m_objectID < 0xbbe) {
//                 if (m_objectID == 0xbbc) {
//                     m_objectType = 0x2b;
//                     m_hasAudioScale = true;
//                     m_spriteWidthScale = 1.2;
//                     m_spriteHeightScale = 1.2;
//                     m_defaultZOrder = 0xc;
//                     m_defaultZLayer = 3;
//                     setDefaultMainColorMode(this, 0);
//                     if ((m_inLevelEditor == false) &&
//                        (pCVar2 = createAndAddParticle(this, m_objectID, "ringEffect.plist", 4,
//                                                       kCCPositionTypeGrouped),
//                         pCVar2 != (CCParticleSystemQuad *)0x0)) {
//                         (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                         pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                         memset(&local_3c, 0, 0x10);
//                         local_30 = 1.0;
//                         local_3c.x = 1.0;
//                         local_34 = 1.0;
//                         (*pcVar12)(pCVar2, &local_3c);
//                         pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                         memset(&local_3c, 0, 0x10);
//                         local_30 = 1.0;
//                         local_34 = 1.0;
//                         local_3c.x = 0.39215687;
//                         local_3c.y = 0.09803922;
//                         (*pcVar12)(pCVar2, &local_3c);
//                     }
//                 } else {
//                     if (m_objectID < 0xbbd) {
//                         iVar8 = 2999;
//                         goto LAB_0036441e;
//                     }
//                     m_objectType = 0x2c;
//                     m_defaultZOrder = 0xc;
//                     m_defaultZLayer = 3;
//                     if ((m_inLevelEditor == false) &&
//                        (pCVar2 = createAndAddParticle(this, 0xbbd, "bumpEffect.plist", 0, kCCPositionTypeGrouped),
//                         pCVar2 != (CCParticleSystemQuad *)0x0)) {
//                         pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                         memset(&local_3c, 0, 0x10);
//                         local_30 = 1.0;
//                         local_3c.x = 1.0;
//                         local_34 = 1.0;
//                         (*pcVar12)(pCVar2, &local_3c);
//                         pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                         memset(&local_3c, 0, 0x10);
//                         local_30 = 1.0;
//                         local_34 = 1.0;
//                         local_3c.x = 0.39215687;
//                         local_3c.y = 0.09803922;
//                         (*pcVar12)(pCVar2, &local_3c);
//                     }
//                 }
//             } else {
//                 m_isInvisible = (bool)(m_inLevelEditor ^ 1);
//                 m_width = 30.0;
//                 m_height = 30.0;
//             }
//         } else if (m_objectID == 0xbd3) {
//             m_objectType = 0x2e;
//             m_hasAudioScale = true;
//             m_spriteWidthScale = 1.2;
//             m_spriteHeightScale = 1.2;
//             m_defaultZOrder = 0xc;
//             m_defaultZLayer = 3;
//             setDefaultMainColorMode(this, 0x3f3);
//             if (m_inLevelEditor == false) {
//                 pCVar2 = createAndAddParticle(this, m_objectType, "ringEffect.plist", 4,
//                                               kCCPositionTypeGrouped);
//                 if (pCVar2 != (CCParticleSystemQuad *)0x0) {
//                     (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setRadialAccel)(pCVar2, 0);
//                     (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setRadialAccelVar)(pCVar2, 0);
//                     (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setRotatePerSecond)(pCVar2, 0);
//                     (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setRotatePerSecondVar)(pCVar2, 0);
//                     (*(code *)pCVar2->vtable->cocos2d_CCParticleSystem_setPositionType)(pCVar2, 2);
//                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setStartColor;
//                     memset(&local_3c, 0, 0x10);
//                     local_30 = 1.0;
//                     local_3c.x = 1.0;
//                     local_3c.y = 0.5882353;
//                     (*pcVar12)(pCVar2, &local_3c);
//                     pcVar12 = (code *)pCVar2->vtable->cocos2d_CCParticleSystem_setEndColor;
//                     memset(&local_3c, 0, 0x10);
//                 LAB_00365cc4:
//                     local_30 = 1.0;
//                     local_3c.x = 1.0;
//                     (*pcVar12)(pCVar2, &local_3c);
//                 }
//             UPDATE_PARTICLECOLOR:
//                 m_particleUseObjectColor = true;
//                 m_hasColorSprite = true;
//             }
//         } else if (m_objectID < 0xbd4) {
//             if (m_objectID < 0xbd1)
//                 goto LAB_0036775c;
//         } else if (0xbd4 < m_objectID)
//             goto LAB_0036775c;
//     } else {
//         if (m_objectID == 0xe11)
//             goto LAB_0036760a;
//         if (0xe11 < m_objectID) {
//             if (m_objectID == 0xed1) {
//             LAB_003652ee:
//                 setDefaultMainColorMode(this, 1);
//                 m_objectType = 7;
//                 m_defaultZOrder = 10;
//                 m_defaultZLayer = 3;
//                 m_colorZLayerRelated = true;
//                 m_maybeNotColorable = true;
//                 setupPixelScale(this);
//                 goto LAB_003677a4;
//             }
//             if (0xed1 < m_objectID) {
//                 if (0x10d9 < m_objectID) {
//                     if (m_objectID < 0x10e9) {
//                         if ((m_objectID < 0x10e3) && (0x10df < m_objectID))
//                             goto LAB_003652ee;
//                     } else {
//                         if (0x112f < m_objectID) {
//                             if (m_objectID - 0x1131U < 0x8b) {
//                                 commonInteractiveSetup(this);
//                                 m_width = 30.0;
//                                 m_height = 30.0;
//                                 m_updateCustomContentSize = true;
//                             }
//                             goto LAB_003677a4;
//                         }
//                         if (m_objectID < 0x10ec)
//                             goto LAB_003652ee;
//                     }
//                     goto LAB_00365294;
//                 }
//                 if (0x10d4 < m_objectID)
//                     goto LAB_003652ee;
//                 if (m_objectID < 0x1073) {
//                     if ((3999 < m_objectID) || (m_objectID < 0xed8))
//                         goto LAB_00365294;
//                     if (0xed8 < m_objectID)
//                         goto LAB_0036539a;
//                 } else if ((0x1073 < m_objectID) && ((m_objectID < 0x10cc || (0x10cc < m_objectID))))
//                     goto LAB_00365294;
//                 goto LAB_003677a4;
//             }
//             if (m_objectID < 0xe3b) {
//                 if (m_objectID < 0xe38) {
//                     if (m_objectID < 0xe20) {
//                         if ((m_objectID < 0xe1c) && (0xe19 < m_objectID)) {
//                             setDefaultMainColorMode(this, 0x3f3);
//                             m_objectType = 2;
//                             m_defaultZOrder = 10;
//                             m_defaultZLayer = 5;
//                             m_hasSepcialChild = true;
//                             flag_a = m_objectID == 0xe1b;
//                             goto LAB_003652e0;
//                         }
//                     } else {
//                         if (m_objectID < 0xe21)
//                             goto LAB_003677a4;
//                         if (0xe24 < m_objectID)
//                             goto LAB_003656c4;
//                     }
//                 }
//             } else {
//                 if (m_objectID < 0xe4c) {
//                     if (m_objectID < 0xe48) {
//                         if (0xe46 < m_objectID)
//                             goto LAB_0036775c;
//                         if (m_objectID < 0xe3e) {
//                             if (m_objectID != 0xe3b) {
//                                 iVar8 = 0xe3d;
//                                 goto LAB_003651d6;
//                             }
//                             m_objectType = 0x24;
//                             m_isInvisible = (bool)(m_inLevelEditor ^ 1);
//                             m_width = 30.0;
//                             m_height = 30.0;
//                             goto LAB_003677a4;
//                         }
//                     }
//                 LAB_0036539a:
//                     setDefaultMainColorMode(this, 1);
//                     m_objectType = 7;
//                     m_defaultZOrder = 9;
//                     m_defaultZLayer = 3;
//                     goto LAB_003677a4;
//                 }
//                 if (0xe4e < m_objectID) {
//                     if (0xe73 < m_objectID)
//                         goto LAB_00365294;
//                     goto LAB_003677a4;
//                 }
//             }
//             goto LAB_0036775c;
//         }
//         if (m_objectID < 0xc1a) {
//             if (0xc13 < m_objectID)
//                 goto LAB_00365294;
//             if (m_objectID < 0xbfb) {
//                 if (m_objectID < 0xbee) {
//                     if (m_objectID < 0xbea) {
//                         if (m_objectID < 0xbe2) {
//                             if (0xbdd < m_objectID)
//                                 goto LAB_003657ae;
//                             if (m_objectID < 0xbda)
//                                 goto LAB_0036775c;
//                             setDefaultMainColorMode(this, 1);
//                             m_defaultZOrder = 5;
//                             m_defaultZLayer = 1;
//                             m_objectType = 2;
//                             m_spriteWidthScale = 0.2;
//                             m_spriteHeightScale = 0.4;
//                         } else {
//                             setDefaultMainColorMode(this, 1);
//                             m_objectType = 7;
//                             m_defaultZOrder = 8;
//                             m_defaultZLayer = 1;
//                         }
//                     } else if (m_objectID == 0xbeb) {
//                     LAB_003657ae:
//                         setDefaultMainColorMode(this, 2);
//                         m_objectType = 7;
//                         m_defaultZOrder = 6;
//                         m_defaultZLayer = 1;
//                     } else {
//                         if (m_objectID < 0xbeb)
//                             goto LAB_00365790;
//                         if (m_objectID == 0xbec) {
//                             setDefaultMainColorMode(this, 1);
//                             m_objectType = 7;
//                             m_defaultZOrder = 7;
//                             m_defaultZLayer = 1;
//                         } else if (m_objectID == 0xbed)
//                             goto LAB_003657e6;
//                     }
//                 } else {
//                 LAB_00365790:
//                     setDefaultMainColorMode(this, 1);
//                     m_objectType = 7;
//                     m_defaultZOrder = 5;
//                     m_defaultZLayer = 1;
//                 }
//             } else if (m_objectID == 0xc0e) {
//             LAB_00365804:
//                 setDefaultMainColorMode(this, 1);
//                 m_objectType = 7;
//                 m_defaultZOrder = 8;
//                 m_defaultZLayer = 1;
//                 m_colorZLayerRelated = true;
//             } else {
//                 if (m_objectID < 0xc0f) {
//                     if (m_objectID < 0xc08)
//                         goto LAB_003657ae;
//                 } else if (m_objectID != 0xc11) {
//                     if (m_objectID < 0xc12) {
//                         if (m_objectID == 0xc0f)
//                             goto LAB_003657e6;
//                         if (m_objectID == 0xc10)
//                             goto LAB_00365804;
//                     } else {
//                         if (m_objectID == 0xc12)
//                             goto LAB_00365790;
//                         if (m_objectID == 0xc13)
//                             goto LAB_003657ae;
//                     }
//                     goto LAB_003677a4;
//                 }
//             LAB_003657e6:
//                 setDefaultMainColorMode(this, 2);
//                 m_objectType = 7;
//                 m_defaultZOrder = 8;
//                 m_defaultZLayer = 1;
//             }
//             goto LAB_003677a4;
//         }
//         if (0xd99 < m_objectID) {
//             if (m_objectID < 0xdd6) {
//                 if (0xdd3 < m_objectID)
//                     goto LAB_003652ee;
//                 if ((0xd9c < m_objectID) && ((m_objectID < 0xda4 || (0xda5 < m_objectID))))
//                     goto LAB_00365294;
//             } else {
//                 if (0xe0f < m_objectID)
//                     goto LAB_0036775c;
//                 if (0xdd7 < m_objectID)
//                     goto LAB_00365294;
//                 setDefaultMainColorMode(this, 2);
//                 m_objectType = 7;
//                 m_defaultZOrder = 0xb;
//                 m_defaultZLayer = 3;
//                 m_maybeNotColorable = false;
//                 setupPixelScale(this);
//             }
//             goto LAB_003677a4;
//         }
//         if (m_objectID < 0xd4a) {
//             if (m_objectID < 0xce7) {
//                 if ((0xc93 < m_objectID) ||
//                    ((0xc1c < m_objectID && ((m_objectID < 0xc2f || (m_objectID - 0xc32U < 0x61))))))
//                     goto LAB_00365294;
//             } else if (0xce8 < m_objectID) {
//                 if (0xd45 < m_objectID)
//                     goto LAB_00365344;
//                 goto LAB_00365294;
//             }
//         } else {
//         LAB_00365294:
//             setDefaultMainColorMode(this, 1);
//             m_objectType = 7;
//             m_defaultZOrder = 9;
//             m_defaultZLayer = 3;
//             m_colorZLayerRelated = true;
//             m_maybeNotColorable = true;
//             setupPixelScale(this);
//         }
//     }
// LAB_003677a4:
    
//     if (m_objectID < 0x78d) {
//         if (m_objectID < 0x78b) {
//             if (m_objectID < 0x3f0) {
//                 if ((m_objectID < 0x3ee) && (m_objectID != 0xdd)) {
//                     if (m_objectID < 0xde) {
//                         if (m_objectID != 0x2c) {
//                             if (m_objectID < 0x2d) {
//                                 bVar14 = 0xb < m_objectID - 0x16U;
//                                 flag_a = m_objectID - 0x16U == 0xc;
//                                 goto LAB_00367972;
//                             }
//                             if (m_objectID < 0x37)
//                                 goto LAB_0036797a;
//                             if (0x3b < m_objectID) {
//                                 flag_a = m_objectID == 0x69;
//                                 goto LAB_00367904;
//                             }
//                         }
//                     } else if (m_objectID < 0x2e9) {
//                         if (m_objectID < 0x2e7) {
//                             iVar8 = m_objectID + -0x2cd;
//                         LAB_00367890:
//                             bVar14 = iVar8 != 0;
//                             flag_a = iVar8 == 1;
//                             goto LAB_00367972;
//                         }
//                     } else {
//                         if (m_objectID < 899)
//                             goto LAB_0036797a;
//                         if (0x385 < m_objectID) {
//                             iVar8 = 0x393;
//                             goto LAB_00367902;
//                         }
//                     }
//                 }
//             } else if (m_objectID < 0x64e) {
//                 if (m_objectID < 0x64b) {
//                     if (m_objectID < 0x544) {
//                         if ((m_objectID < 0x542) && (m_objectID != 0x419)) {
//                             iVar8 = 0x4f4;
//                         LAB_00367902:
//                             flag_a = m_objectID == iVar8;
//                         LAB_00367904:
//                             if (!flag_a)
//                                 goto LAB_0036797a;
//                         }
//                     } else if ((m_objectID != 0x631) && (m_objectID != 0x63b)) {
//                         flag_a = m_objectID == 0x5f0;
//                         goto LAB_00367904;
//                     }
//                 }
//             } else {
//                 if (0x71b < m_objectID) {
//                     bVar14 = 4 < m_objectID - 0x778U;
//                     flag_a = m_objectID - 0x778U == 5;
//                     goto LAB_00367972;
//                 }
//                 if ((m_objectID < 0x716) && (m_objectID != 0x650)) {
//                     if (0x64f < m_objectID) {
//                         iVar8 = m_objectID + -0x713;
//                         goto LAB_00367890;
//                     }
//                     goto LAB_0036797a;
//                 }
//             }
//         }
//     LAB_00367974:
//         m_isPortalObject = true;
//     } else {
//         if (m_objectID == 2999)
//             goto LAB_00367974;
//         if (m_objectID < 3000) {
//             if (m_objectID < 0xb56) {
//                 if (m_objectID < 0xb53) {
//                     if (m_objectID < 0x7e1) {
//                         if (m_objectID < 0x7df) {
//                             iVar8 = m_objectID + -0x78e;
//                             goto LAB_00367890;
//                         }
//                     } else if (m_objectID != 0x80e) {
//                         if (0x80d < m_objectID) {
//                             iVar8 = -0x811;
//                             goto LAB_0036795e;
//                         }
//                         goto LAB_0036797a;
//                     }
//                 }
//             } else {
//                 if (0xb65 < m_objectID) {
//                     bVar14 = 5 < m_objectID - 0xb67U;
//                     flag_a = m_objectID - 0xb67U == 6;
//                     goto LAB_00367972;
//                 }
//                 if (m_objectID < 0xb5d) {
//                     if (m_objectID < 0xb57)
//                         goto LAB_0036797a;
//                     if (0xb59 < m_objectID) {
//                         iVar8 = 0xb5b;
//                         goto LAB_00367902;
//                     }
//                 }
//             }
//             goto LAB_00367974;
//         }
//         if (m_objectID < 0xe20) {
//             if (m_objectID < 0xe1c) {
//                 if (m_objectID < 0xbda) {
//                     if (m_objectID < 0xbd5) {
//                         bVar14 = 0x11 < m_objectID - 0xbbeU;
//                         flag_a = m_objectID - 0xbbeU == 0x12;
//                         goto LAB_00367972;
//                     }
//                 } else if (m_objectID != 0xe10) {
//                     if (m_objectID < 0xe10)
//                         goto LAB_0036797a;
//                     bVar14 = 6 < m_objectID - 0xe12U;
//                     flag_a = m_objectID - 0xe12U == 7;
//                     goto LAB_00367972;
//                 }
//             }
//             goto LAB_00367974;
//         }
//         if (0xe3b < m_objectID) {
//             if (m_objectID != 0xe47) {
//                 if (m_objectID < 0xe47)
//                     goto LAB_0036797a;
//                 bVar14 = 1 < m_objectID - 0xe4cU;
//                 flag_a = m_objectID - 0xe4cU == 2;
//                 goto LAB_00367972;
//             }
//             goto LAB_00367974;
//         }
//         if (0xe37 < m_objectID)
//             goto LAB_00367974;
//         iVar8 = -0xe21;
//     LAB_0036795e:
//         bVar14 = 2 < (unsigned int)(m_objectID + iVar8);
//         flag_a = m_objectID + iVar8 == 3;
//     LAB_00367972:
//         if (!bVar14 || flag_a)
//             goto LAB_00367974;
//     }
// LAB_0036797a:
//     if (m_objectID < 0x3f0) {
//         if (0x3ed < m_objectID)
//             goto LAB_00367cf4;
//         if (m_objectID == 0x15f) {
//         LAB_00367d14:
//             m_width = 60.0;
//         LAB_00367d1c:
//             m_height = 30.0;
//         } else {
//             if (m_objectID < 0x160) {
//                 if (m_objectID != 0x54) {
//                     if (m_objectID < 0x55) {
//                         if (0x2f < m_objectID) {
//                             if (m_objectID < 0x4f) {
//                                 if (m_objectID < 0x45) {
//                                     if (m_objectID < 0x37)
//                                         goto LAB_00367d34;
//                                     if (0x3b < m_objectID) {
//                                         flag_a = m_objectID == 0x43;
//                                         goto LAB_00367b2e;
//                                     }
//                                     goto LAB_00367cf4;
//                                 }
//                             } else {
//                                 bVar14 = 1 < m_objectID - 0x50U;
//                                 flag_a = m_objectID - 0x50U == 2;
//                             LAB_00367a28:
//                                 if (bVar14 && !flag_a)
//                                     goto LAB_00367d34;
//                             }
//                         LAB_00367d22:
//                             m_width = 30.0;
//                             goto LAB_00367d1c;
//                         }
//                         if (m_objectID < 0x2d) {
//                             if (m_objectID < 0x25) {
//                                 if (m_objectID < 0x16) {
//                                     m_objectType = m_objectID - 10;
//                                     goto LAB_00367ccc;
//                                 }
//                             } else {
//                                 flag_a = m_objectID == 0x26;
//                             LAB_00367b2e:
//                                 if (!flag_a)
//                                     goto LAB_00367d34;
//                             }
//                         }
//                     } else if (m_objectID != 0xdd) {
//                         if (m_objectID < 0xde) {
//                             if (m_objectID != 0x69) {
//                                 if (m_objectID < 0x6a) {
//                                     if (m_objectID != 99) {
//                                         flag_a = m_objectID == 0x65;
//                                         goto LAB_00367b2e;
//                                     }
//                                 } else if (m_objectID != 0x6f) {
//                                     if (0x6e < m_objectID) {
//                                         m_objectType = m_objectID - 0x8c;
//                                         goto LAB_00367cde;
//                                     }
//                                     goto LAB_00367d34;
//                                 }
//                             }
//                         } else {
//                             if (0x11f < m_objectID) {
//                                 if (m_objectID == 0x133)
//                                     goto LAB_00367d14;
//                                 if (m_objectID != 0x15d) {
//                                     iVar8 = 0x131;
//                                     goto LAB_00367a82;
//                                 }
//                                 goto LAB_00367d22;
//                             }
//                             if (m_objectID < 0x11e) {
//                                 bVar14 = 4 < m_objectID - 0x107U;
//                                 flag_a = m_objectID - 0x107U == 5;
//                                 goto LAB_00367a28;
//                             }
//                         }
//                     }
//                 }
//                 goto LAB_00367cf4;
//             }
//             if (m_objectID != 0x35b) {
//                 if (m_objectID < 0x35c) {
//                     if (m_objectID < 0x2ea) {
//                         if ((m_objectID < 0x2e7) && (m_objectID != 0x294)) {
//                             if (0x294 < m_objectID) {
//                                 iVar8 = -0x2cd;
//                                 goto LAB_00367c12;
//                             }
//                             if (m_objectID != 0x1d5) {
//                                 iVar8 = 0x1d7;
//                             LAB_00367a82:
//                                 if (m_objectID != iVar8)
//                                     goto LAB_00367d34;
//                             }
//                             goto LAB_00367d22;
//                         }
//                         goto LAB_00367cf4;
//                     }
//                     if (m_objectID < 0x351) {
//                         if (m_objectID < 0x349) {
//                             if (m_objectID != 0x2eb) {
//                                 iVar8 = 0x2ed;
//                                 goto LAB_00367b2c;
//                             }
//                             goto LAB_00367cf4;
//                         }
//                     } else if (m_objectID != 0x352) {
//                         if (0x351 < m_objectID) {
//                             bVar14 = 3 < m_objectID - 0x355U;
//                             flag_a = m_objectID - 0x355U == 4;
//                             goto LAB_00367b96;
//                         }
//                         goto LAB_00367d34;
//                     }
//                 } else if (m_objectID < 0x376) {
//                     if (m_objectID < 0x370) {
//                         if (m_objectID < 0x36b) {
//                             if (0x362 < m_objectID)
//                                 goto LAB_00367ce4;
//                             bVar14 = 1 < m_objectID - 0x35dU;
//                             flag_a = m_objectID - 0x35dU == 2;
//                         } else {
//                             bVar14 = m_objectID != 0x36d;
//                             flag_a = m_objectID == 0x36e;
//                         }
//                     LAB_00367b96:
//                         if (bVar14 && !flag_a)
//                             goto LAB_00367d34;
//                     }
//                 } else {
//                     if (0x380 < m_objectID) {
//                         if (m_objectID < 899)
//                             goto LAB_00367d34;
//                         if (0x385 < m_objectID) {
//                             iVar8 = 0x393;
//                             goto LAB_00367b2c;
//                         }
//                         goto LAB_00367cf4;
//                     }
//                     if (m_objectID < 0x37d) {
//                         bVar14 = 2 < m_objectID - 0x378U;
//                         flag_a = m_objectID - 0x378U == 3;
//                         goto LAB_00367b96;
//                     }
//                 }
//             }
//         LAB_00367ce4:
//             m_colorZLayerRelated = true;
//             m_defaultZOrder = -7;
//         }
//     } else {
//         if (m_objectID < 0x77e) {
//             if (0x777 < m_objectID)
//                 goto LAB_00367cf4;
//             if (m_objectID < 0x544) {
//                 if (m_objectID < 0x542) {
//                     if (m_objectID < 0x4f4) {
//                         if (m_objectID < 0x4f2) {
//                             if (0x489 < m_objectID) {
//                                 bVar14 = 0xb < m_objectID - 0x4dfU;
//                                 flag_a = m_objectID - 0x4dfU == 0xc;
//                                 goto LAB_00367b96;
//                             }
//                             if (m_objectID < 0x487) {
//                                 if (m_objectID == 0x419) {
//                                     m_width = 30.0;
//                                     m_height = 30.0;
//                                     setDefaultMainColorMode(this, 0);
//                                     m_updateCustomContentSize = true;
//                                 } else if (m_objectID == 0x426)
//                                     goto LAB_00367ce4;
//                                 goto LAB_00367d34;
//                             }
//                         }
//                     } else {
//                         if (0x50a < m_objectID) {
//                             m_objectType = m_objectID - 0x533;
//                         LAB_00367cde:
//                             bVar14 = 1 < m_objectType;
//                             flag_a = m_objectType == 2;
//                             goto LAB_00367ce0;
//                         }
//                         if (m_objectID < 0x4fd) {
//                             iVar8 = 0x4f4;
//                             goto LAB_00367b2c;
//                         }
//                     }
//                     goto LAB_00367ce4;
//                 }
//                 goto LAB_00367cf4;
//             }
//             if (0x6c5 < m_objectID) {
//                 if (0x71b < m_objectID) {
//                     if (3 < m_objectID - 0x761U)
//                         goto LAB_00367d34;
//                     goto LAB_00367d2a;
//                 }
//                 if (m_objectID < 0x716) {
//                     iVar8 = -0x713;
//                 LAB_00367c12:
//                     bVar14 = m_objectID + iVar8 != 0;
//                     flag_a = m_objectID + iVar8 == 1;
//                     goto LAB_00367ce0;
//                 }
//                 goto LAB_00367cf4;
//             }
//             if (m_objectID < 0x6b3) {
//                 if (m_objectID != 0x63b) {
//                     if (m_objectID < 0x63c) {
//                         if (m_objectID != 0x5f0) {
//                             iVar8 = 0x631;
//                             goto LAB_00367b2c;
//                         }
//                     } else {
//                         if (m_objectID < 0x64b)
//                             goto LAB_00367d34;
//                         if (0x64d < m_objectID) {
//                             flag_a = m_objectID == 0x650;
//                             goto LAB_00367b2e;
//                         }
//                     }
//                 }
//                 goto LAB_00367cf4;
//             }
//         LAB_00367d2a:
//             m_objectID = 0x3f2;
//         } else {
//             if (m_objectID < 0xbd1) {
//                 if (m_objectID < 0xbbc) {
//                     if (m_objectID < 0x815) {
//                         if (m_objectID < 0x812) {
//                             if (m_objectID < 0x7e1) {
//                                 if (m_objectID < 0x7df) {
//                                     bVar14 = 3 < m_objectID - 0x78bU;
//                                     flag_a = m_objectID - 0x78bU == 4;
//                                     goto LAB_00367ce0;
//                                 }
//                             } else if (m_objectID != 0x80e) {
//                                 flag_a = m_objectID == 0x810;
//                                 goto LAB_00367b2e;
//                             }
//                         }
//                     } else {
//                         if (0xb6e < m_objectID) {
//                             iVar8 = 2999;
//                         LAB_00367b2c:
//                             flag_a = m_objectID == iVar8;
//                             goto LAB_00367b2e;
//                         }
//                         if (m_objectID < 0xb6d) {
//                             m_objectType = m_objectID - 0xb53;
//                             goto LAB_00367ccc;
//                         }
//                     }
//                 }
//             } else if (m_objectID < 0xe20) {
//                 if (m_objectID < 0xe1c) {
//                     if (m_objectID < 0xbda) {
//                         if (m_objectID < 0xbd5) {
//                             iVar8 = 0xbd3;
//                             goto LAB_00367b2c;
//                         }
//                     } else if (m_objectID != 0xe10) {
//                         if (0xe0f < m_objectID) {
//                             bVar14 = 6 < m_objectID - 0xe12U;
//                             flag_a = m_objectID - 0xe12U == 7;
//                             goto LAB_00367ce0;
//                         }
//                         goto LAB_00367d34;
//                     }
//                 }
//             } else if (m_objectID < 0xe3b) {
//                 if (m_objectID < 0xe38) {
//                     m_objectType = m_objectID - 0xe21;
//                 LAB_00367ccc:
//                     bVar14 = 2 < m_objectType;
//                     flag_a = m_objectType == 3;
//                 LAB_00367ce0:
//                     if (bVar14 && !flag_a)
//                         goto LAB_00367d34;
//                 }
//             } else if (m_objectID != 0xe47) {
//                 if (0xe46 < m_objectID) {
//                     m_objectType = m_objectID - 0xe4c;
//                     goto LAB_00367cde;
//                 }
//                 goto LAB_00367d34;
//             }
//         LAB_00367cf4:
//             m_objectID = 0;
//         }
//         setDefaultMainColorMode(this, m_objectID);
//     }
// LAB_00367d34:
//     if (m_inLevelEditor) {
        
//         if (m_objectID < 0x790) {
//             if ((m_objectID < 0x78e) && (m_objectID != 0x64b)) {
//                 if (m_objectID < 0x64c) {
//                     if (m_objectID != 0x4f4) {
//                         if (m_objectID < 0x4f5) {
//                             if (m_objectID < 0x3f0) {
//                                 if ((0x3ed < m_objectID) || (m_objectID == 899))
//                                     goto SET_0X290;
//                                 iVar8 = 0x385;
//                             } else {
//                                 iVar8 = 0x419;
//                             }
//                         LAB_00367e22:
//                             flag_a = m_objectID == iVar8;
//                         LAB_00367e66:
//                             if (!flag_a)
//                                 goto LAB_00367e90;
//                         } else if (m_objectID != 0x5f0) {
//                             if (m_objectID < 0x5f1) {
//                                 m_objectID = m_objectID + -0x542;
//                                 goto LAB_00367dea;
//                             }
//                             if (m_objectID != 0x631) {
//                                 iVar8 = 0x63b;
//                                 goto LAB_00367e22;
//                             }
//                         }
//                     }
//                 } else if (m_objectID < 0x77b) {
//                     if (m_objectID < 0x778) {
//                         if (0x714 < m_objectID) {
//                             iVar8 = -0x716;
//                             goto LAB_00367e6e;
//                         }
//                         if (m_objectID < 0x713) {
//                             flag_a = m_objectID == 0x650;
//                             goto LAB_00367e66;
//                         }
//                     }
//                 } else {
//                     if (m_objectID < 0x77c)
//                         goto LAB_00367e90;
//                     if (0x77d < m_objectID) {
//                         m_objectID = m_objectID + -0x78b;
//                         goto LAB_00367dea;
//                     }
//                 }
//             }
//         } else if (m_objectID < 0xbda) {
//             if (m_objectID < 0xbd8) {
//                 if (m_objectID < 0x815) {
//                     if ((m_objectID < 0x813) && (m_objectID != 0x80e)) {
//                         if (0x80e < m_objectID) {
//                             iVar8 = 0x811;
//                             goto LAB_00367e22;
//                         }
//                         m_objectID = m_objectID + -0x7df;
//                     LAB_00367dea:
//                         bVar14 = m_objectID != 0;
//                         flag_a = m_objectID == 1;
//                         goto LAB_00367e88;
//                     }
//                 } else if (m_objectID != 0xb6d) {
//                     if (m_objectID < 0xb6e) {
//                         m_objectID = m_objectID + -0xb54;
//                         goto LAB_00367dea;
//                     }
//                     if (m_objectID != 2999) {
//                         iVar8 = 0xbc8;
//                         goto LAB_00367e22;
//                     }
//                 }
//             }
//         } else if (m_objectID < 0xe25) {
//             if (m_objectID < 0xe21) {
//                 if (0xe19 < m_objectID) {
//                     iVar8 = -0xe1c;
//                 LAB_00367e6e:
//                     bVar14 = 2 < (unsigned int)(m_objectID + iVar8);
//                     flag_a = m_objectID + iVar8 == 3;
//                     goto LAB_00367e88;
//                 }
//                 if (m_objectID < 0xe12) {
//                     flag_a = m_objectID == 0xe10;
//                     goto LAB_00367e66;
//                 }
//             }
//         } else if (m_objectID != 0xe47) {
//             if (m_objectID < 0xe48) {
//                 m_objectID = m_objectID + -0xe38;
//                 goto LAB_00367dea;
//             }
//             bVar14 = 1 < m_objectID - 0xe4cU;
//             flag_a = m_objectID - 0xe4cU == 2;
//         LAB_00367e88:
//             if (bVar14 && !flag_a)
//                 goto LAB_00367e90;
//         }
//     SET_0X290:
//         m_hasSepcialChild = true;
//     }
// LAB_00367e90:
//     if (m_objectType == 0x20)
//         goto LAB_00367ec6;
//     if (m_objectType < 0x21) {
//         if (m_objectType < 0xe) {
//             if (10 < m_objectType)
//                 goto LAB_00367ec6;
//             flag_a = m_objectType == 1;
//         } else {
//             flag_a = m_objectType == 0x1d;
//         }
//     LAB_00367ebc:
//         if ((flag_a) || (m_objectID == 8))
//             goto LAB_00367ec6;
//     } else {
//         if (m_objectType < 0x27) {
//             if (m_objectType < 0x25) {
//                 flag_a = m_objectType == 0x23;
//                 goto LAB_00367ebc;
//             }
//         } else if (m_objectType != 0x2b) {
//             flag_a = m_objectType == 0x2e;
//             goto LAB_00367ebc;
//         }
//     LAB_00367ec6:
//         m_width = 30.0;
//         m_height = 30.0;
//     }
//     if (m_zFixedZLayer) {
//         m_zLayer = 0;
//     }
//     flag_a = shouldLockX(this);
   
//     m_shouldLockX = flag_a;
//     if (((((m_objectType & 0xfffffffd) == 0) || (m_objectType == 0x2f)) || (m_objectType == 0x15)) || (m_objectType == 0x19)) {
//         m_isTintObject = true;
//     }
//     if (m_defaultZLayer == 5) {
//         m_objectID = m_defaultZOrder;
//         flag_a = m_objectID < 0;
//         if (flag_a) {
//             m_objectID = 1;
//         }
//         if (flag_a) {
//             m_defaultZLayer = m_objectID;
//         }
//     }
//     flag_a = dontCountTowardsLimit(this);
//     m_dontCountTowardsLimit = flag_a;
//     flag_a = isTrigger(this);
//     m_isTrigger = flag_a;
//     flag_a = isStoppableTrigger(this);
//     m_isStoppableTrigger = flag_a;
//     if (m_inLevelEditor) {
        
//         if (m_objectID < 0x7e1) {
//             if ((0x7de < m_objectID) || (m_objectID == 0x631))
//                 goto LAB_0036809a;
//             if (0x631 < m_objectID) {
//                 if (m_objectID < 0x77e) {
//                     if ((m_objectID < 0x77c) && (m_objectID != 0x650)) {
//                         if (0x650 < m_objectID) {
//                             iVar8 = -0x778;
//                         LAB_00368036:
//                             bVar14 = 1 < (unsigned int)(m_objectID + iVar8);
//                             flag_a = m_objectID + iVar8 == 2;
//                             goto LAB_00368080;
//                         }
//                         m_objectID = m_objectID + -0x64c;
//                     LAB_0036807e:
//                         bVar14 = m_objectID != 0;
//                         flag_a = m_objectID == 1;
//                     LAB_00368080:
//                         if (bVar14 && !flag_a)
//                             goto LAB_003680a0;
//                     }
//                 } else {
//                     if (m_objectID < 0x78b)
//                         goto LAB_003680a0;
//                     if (0x78c < m_objectID) {
//                         m_objectID = m_objectID + -0x78e;
//                         goto LAB_0036807e;
//                     }
//                 }
//                 goto LAB_0036809a;
//             }
//             if (900 < m_objectID) {
//                 if (m_objectID < 0x3f0) {
//                     if (m_objectID < 0x3ee) {
//                         flag_a = m_objectID == 0x393;
//                         goto LAB_00367f9e;
//                     }
//                 } else if (m_objectID != 0x419) {
//                     iVar8 = 0x4f4;
//                     goto LAB_00368088;
//                 }
//                 goto LAB_0036809a;
//             }
//             if ((m_objectID < 899) && (m_objectID != 0x69)) {
//                 if (m_objectID < 0x6a) {
//                     if (1 < m_objectID - 0x1dU)
//                         goto LAB_003680a0;
//                 } else {
//                     flag_a = m_objectID == 0x2e8;
//                 LAB_00367f9e:
//                     if (!flag_a)
//                         goto LAB_003680a0;
//                 }
//             }
//             m_isTriggerGroup = true;
//             m_isTriggerObject = true;
//         } else {
//             if (m_objectID < 0xb6e) {
//                 if (m_objectID < 0xb67) {
//                     if (m_objectID < 0xb56) {
//                         if (((m_objectID < 0xb53) && (m_objectID != 0x812)) && (m_objectID != 0x814)) {
//                             iVar8 = 0x80e;
//                             goto LAB_00368088;
//                         }
//                     } else if (m_objectID != 0xb5b) {
//                         if (m_objectID < 0xb5c) {
//                             iVar8 = -0xb57;
//                             goto LAB_00368036;
//                         }
//                         bVar14 = 7 < m_objectID - 0xb5dU;
//                         flag_a = m_objectID - 0xb5dU == 8;
//                         goto LAB_00368080;
//                     }
//                 }
//             } else if (m_objectID < 0xe19) {
//                 if ((m_objectID < 0xe12) && (m_objectID != 0xbce)) {
//                     if (m_objectID < 0xbcf) {
//                         iVar8 = 2999;
//                         goto LAB_00368088;
//                     }
//                     if (m_objectID != 0xbd9) {
//                         flag_a = m_objectID == 0xe10;
//                         goto LAB_0036808a;
//                     }
//                 }
//             } else if (m_objectID != 0xe47) {
//                 if (m_objectID < 0xe48) {
//                     m_objectID = m_objectID + -0xe1c;
//                     goto LAB_0036807e;
//                 }
//                 iVar8 = 0xe4e;
//             LAB_00368088:
//                 flag_a = m_objectID == iVar8;
//             LAB_0036808a:
//                 if (!flag_a)
//                     goto LAB_003680a0;
//             }
//         LAB_0036809a:
//             m_isTriggerGroup = true;
//         }
//     LAB_003680a0:
//         if (m_classID == 1) {
//             bVar1 = ignoreEditorDuration(this);
//             bVar1 = bVar1 ^ 1;
//         } else {
//             bVar1 = false;
//         }
//         m_ignoreEditorDuration = (bool)bVar1;
//         flag_a = (bool)isEditorSpawnableTrigger(this);
//         m_isEditorSpawnableTrigger = flag_a;
//     }
//     if (m_hasAudioScale) {
//         *(undefined *)&m_particleScale = 1;
//     }
//     if (m_objectType != 7) {
//         setupSpriteSize(this);
//     }
    
//     if (m_objectID < 0x120) {
//         if ((m_objectID < 0x11e) && (m_objectID != 0x54)) {
//             if (m_objectID < 0x55) {
//                 if (m_objectID < 0x25) {
//                     if (m_objectID < 0x23) {
//                         iVar8 = -10;
//                         goto LAB_00368124;
//                     }
//                 } else {
//                     if (m_objectID < 0x2d)
//                         goto EXIT;
//                     if (0x2f < m_objectID) {
//                         flag_a = m_objectID == 0x43;
//                         goto LAB_003681a4;
//                     }
//                 }
//             } else if (m_objectID < 0x8e) {
//                 if (((m_objectID < 0x8c) && (m_objectID != 0x65)) && (m_objectID != 0x6f)) {
//                     flag_a = m_objectID == 99;
//                     goto LAB_003681a4;
//                 }
//             } else {
//                 iVar8 = -200;
//             LAB_00368124:
//                 if (3 < (unsigned int)(m_objectID + iVar8))
//                     goto EXIT;
//             }
//         }
//     } else if (m_objectID != 0x6a8) {
//         if (m_objectID < 0x6a9) {
//             if (m_objectID != 0x3fe) {
//                 if (m_objectID < 0x3ff) {
//                     if ((m_objectID != 0x2e9) && (m_objectID != 0x2eb)) {
//                         flag_a = m_objectID == 0x294;
//                         goto LAB_003681a4;
//                     }
//                 } else {
//                     if (m_objectID < 0x532)
//                         goto EXIT;
//                     if (0x536 < m_objectID) {
//                         iVar8 = 0x63a;
//                         goto LAB_003681a2;
//                     }
//                 }
//             }
//         } else if (m_objectID != 0xb56) {
//             if (m_objectID < 0xb57) {
//                 if ((m_objectID == 0x78d) || (m_objectID == 0x80f))
//                     goto SET_0X486;
//                 iVar8 = 0x6d7;
//             } else if (m_objectID < 0xbbe) {
//                 if (0xbbb < m_objectID)
//                     goto SET_0X486;
//                 iVar8 = 0xb6e;
//             } else {
//                 iVar8 = 0xbd3;
//             }
//         LAB_003681a2:
//             flag_a = m_objectID == iVar8;
//         LAB_003681a4:
//             if (!flag_a)
//                 goto EXIT;
//         }
//     }
// SET_0X486:
//     m_isSpecialObject = true;
// EXIT:
//     return;
// }



void GameObject::deactivateObject(bool hide) {

    if (hide && (!m_isHidden)) {
        m_isHidden = true;
    } else if (m_isActivated) {
        m_isActivated = false;
        setVisible(false);
        removeFromParentAndCleanup(0);
        m_isBlendingBatchNode = false;
        if (m_enterValueY != -1) {
            m_enterValueX = -1;
            m_enterValueY = -1;
            m_enterReset = true;
            setRScaleX(1.0f);
            setRScaleY(1.0f);
        }
    
        if (m_glowSpriteMain != nullptr) {
            m_glowSpriteMain->removeFromParentAndCleanup(false);
        }
        
        if ((m_colorSprite != nullptr) && (m_isGroupDisabled == false)) {
            m_colorSprite->removeFromParentAndCleanup(false);
        }
    }
}

void GameObject::deselectObject()
{
    m_isSelected = false;
    updateObjectEditorColor();
}

void GameObject::destroyObject()
{
    m_isDisabled = true;
    m_previewIsDisabled = true;
    setOpacity(0);
}


void GameObject::determineSlopeDirection() {
    bool flipX;
    bool flipY;
    float rotation;
    bool is270;
    int r, r2;

    flipX = isFlipX();
    flipY = isFlipY();
    rotation = static_cast<int>(getObjectRotation()) % 360;

    if (rotation == 180.0) {
        r = 1;
    }
    if (rotation != 180.0) {
        r = 0;
    }
    if (rotation == 90.0) {
        r2 = 1;
    CHECK_FOR_270_ANGLE:
        is270 = rotation == 270.0;
    } else {
        if (rotation == -270.0) {
            r2 = 1;
        }
        if (rotation != -270.0) {
            r2 = 0;
        }
        if (rotation != -90.0)
            goto CHECK_FOR_270_ANGLE;
        is270 = true;
    }
    m_upSlope = false;
    if (flipX == 0) {
        if (flipY != 0) {
            if (rotation != 0.0) {
                if (r == 0) {
                    if (is270) {
                    LAB_0035d6dc:
                        m_upSlope = true;
                        m_slopeDirection = 6;
                        return;
                    }
                    if (r2 == 0) {
                        return;
                    }
                LAB_0035d6ec:
                    m_upSlope = true;
                    m_slopeDirection = 7;
                    return;
                }
            LAB_0035d6a6:
                m_slopeDirection = 2;
                return;
            }
        LAB_0035d694:
            m_slopeDirection = 1;
            return;
        }
        if (rotation != 0.0) {
            if (r == 0) {
                if (r2 != 0) {
                    LAB_0035d6c8:
                        m_slopeDirection = 4;
                        return;
                }
                if (!is270) {
                    return;
                }
            LAB_0035d6d2:
                m_slopeDirection = 5;
                return;
            }
        LAB_0035d6b8:
            m_upSlope = true;
            m_slopeDirection = 3;
            return;
        }
    } else {
        if (!flipY) {
            if (!r) {
                if (rotation != 0.0) {
                    if (r2)
                        goto LAB_0035d6dc;
                    if (!is270) {
                        return;
                    }
                    goto LAB_0035d6ec;
                }
                goto LAB_0035d6a6;
            }
            goto LAB_0035d694;
        }
        if (!r) {
            if (rotation != 0.0) {
                if (is270)
                    goto LAB_0035d6c8;
                if (!r2) {
                    return;
                }
                goto LAB_0035d6d2;
            }
            goto LAB_0035d6b8;
        }
    }
    m_upSlope = true;
    m_slopeDirection = 0;
}

bool GameObject::didScaleXChange(){
    return ((m_scaleX * 10000.0) - (m_customScaleX * 10000.0)) != 0;
}

bool GameObject::didScaleYChange(){
    return ((m_scaleY * 10000.0) - (m_customScaleY * 10000.0)) != 0;
};


void GameObject::dirtifyObjectPos()
{
    m_isObjectPosDirty = true;
    m_isUnmodifiedPositionsDirty = true;
}


void GameObject::dirtifyObjectRect()
{
    m_isObjectRectDirty = true;
    m_isOrientedBoxDirty = true;
}

void GameObject::disableObject(){
    m_isDisabled = true;
    m_previewIsDisabled = true;
    setOpacity(0);
    triggerActivated(0);
}

bool GameObject::dontCountTowardsLimit(){
    return m_objectID == 31;
}


void GameObject::duplicateAttributes(GameObject *object)
{
    m_zOrder = object->getObjectZOrder();
    setCustomZLayer(static_cast<int>(object->getObjectZLayer()));
    m_editorLayer = object->m_editorLayer;
    m_editorLayer2 = object->m_editorLayer2;
    m_isDontFade = object->m_isDontFade;
    m_isHighDetail = object->m_isHighDetail;
    m_iceBlock = object->m_iceBlock;
    m_isDontEnter = object->m_isDontEnter;
    m_isNoTouch = object->m_isNoTouch;
    m_isGripSlope = object->m_isGripSlope;
    m_hasNoEffects = object->m_hasNoEffects;
    m_isPassable = object->m_isPassable;
    m_disableGlow = object->m_disableGlow;
    m_isHide = object->m_isHide;
    m_isNonStickX = object->m_isNonStickX;
    m_isNonStickY = object->m_isNonStickY;
    m_isDontBoostY = object->m_isDontBoostY;
    m_isExtraSticky = object->m_isExtraSticky;
    m_isScaleStick = object->m_isScaleStick;
    m_isDontBoostX = object->m_isDontBoostX;
    m_hasNoParticles = object->m_hasNoParticles;
    m_hasNoAudioScale = object->m_hasNoAudioScale;
}


void GameObject::duplicateColorMode(GameObject *obj) {

    if((((m_isDetailOnly) && (m_detailColor == nullptr) &&
        (obj->m_detailColor != nullptr) && (obj->m_detailColor->getColorMode() != 0)))) {
        obj->m_baseColor = obj->m_detailColor;
    }
    m_baseColor->setColorMode(obj->m_baseColor->getColorMode());
    m_baseColor->m_hsv = obj->m_baseColor->m_hsv;
    if ((obj->m_detailColor != nullptr) && (m_detailColor != nullptr)) {
        /* setColorMode is not defined on andriod but it's possible to find at FUN_0035b004 */
        m_detailColor->setColorMode(m_detailColor->getColorMode());
        m_detailColor->m_hsv = obj->m_detailColor->m_hsv;
    }
};


void GameObject::duplicateValues(GameObject *object)
{
    if (getRotationX() == getRotationY()) {
        setRotation(object->getRotation());
    }
    else {
        setRotationX(getRotationX());
        setRotationY(getRotationY());
    }
    setFlipX(object->isFlipX());
    setFlipY(object->isFlipY());
    duplicateColorMode(object);
    m_zOrder = object->m_zOrder;
    setCustomZLayer(static_cast<int>(object->getCustomZLayer()));
    m_isDontFade = object->m_isDontFade;
    m_isDontEnter = object->m_isDontEnter;
    m_hasNoEffects = object->m_hasNoEffects;

    for (short i = 0; i < object->m_groupCount; i++) {
        addToGroup(object->getGroupID(i));
    }
  
    updateCustomScaleX(object->m_scaleX);
    updateCustomScaleY(object->m_scaleY);
}




// TODO: DAT_009a0458, DAT_009a0464, DAT_009a0470 Are Unknown therefore I cannot reverse it yet...
// _ccColor3B * GameObject::editorColorForCustomMode(GameObject *this,int colorID)

// {
//   unsigned int extraout_r1;
//   unsigned int uVar1;
//   unsigned int uVar2;
//   unsigned int uVar3;
  
//   if (4 < colorID) {
//     colorID = colorID + -5;
//   }
//   __aeabi_idivmod(colorID,0xc);
//   if (extraout_r1 < 0xc) {
//     uVar3 = (unsigned int)(byte)(&DAT_009a0458)[extraout_r1];
//     uVar1 = (unsigned int)(byte)(&DAT_009a0464)[extraout_r1];
//     uVar2 = (unsigned int)(byte)(&DAT_009a0470)[extraout_r1];
//   }
//   else {
//     uVar2 = 0xff;
//     uVar1 = 0xff;
//     uVar3 = 0xff;
//   }
//   return (_ccColor3B *)(uVar3 | uVar1 << 8 | uVar2 << 0x10);
// }

cocos2d::ccColor3B GameObject::editorColorForMode(int mode)

{
    unsigned int r;
    unsigned int g;
    unsigned int b;

    if(mode == 4) {
        b = 0x96;
    LAB_0035e558:
        g = 0xff;
        r = 0x96;
        goto EXIT;
    }
    if(mode < 5) {
        if(mode == 2) {
            g = 0xff;
            b = 0x96;
            r = 0xff;
            goto EXIT;
        }
        if(2 < mode) {
            b = 0xff;
            goto LAB_0035e558;
        }
        if(mode != 1)
            goto LAB_0035e562;
        g = 0x96;
    LAB_0035e594:
        r = 0xff;
        b = r;
    } else {
        if(mode == 0x3ed) {
            b = 0xff;
            g = 0x96;
            r = 0xaf;
            goto EXIT;
        }
        if(mode < 0x3ee) {
            if(mode == 0x3eb) {
                b = 0;
                g = 0xff;
            } else {
            LAB_0035e562:
                if(m_doesntFade == false) {
                    if(mode - 5U < 0x3e2) {
                        // TODO:
                        // r = editorColorForCustomMode(mode) & 0xff;
                        // g = (editorColorForCustomMode(mode) << 0x10) >> 0x18;
                        // b = (editorColorForCustomMode(mode) << 8) >> 0x18;
                        goto EXIT;
                    }
                    g = 0xff;
                    goto LAB_0035e594;
                }
                b = 0;
                g = 0x7f;
            }
        } else {
            if(mode != 0x3ee) {
                if(mode == 0x3ef) {
                    b = 0xff;
                    g = 0xaf;
                    r = 0x4b;
                    goto EXIT;
                }
                goto LAB_0035e562;
            }
            b = 0x96;
            g = 0x96;
        }
        r = 0xff;
    }
EXIT:
    return cocos2d::ccc3(r, g, b);
}


void GameObject::fastRotateObject(float rotation)
{
    m_rotationXOffset += rotation;
    m_rotationYOffset += rotation;
    addRotation(rotation);
    if ((m_objectType != 7) && (m_shouldUseOuterOb == false)) {
        calculateOrientedBox();
    }
}

/* NOOP */
void GameObject::firstSetup()
{
    return;
}


GameObject::GameObject(){
    m_someOtherIndex = -1;
    m_innerSectionIndex = 0;
    m_outerSectionIndex = 0;
    m_hasExtendedCollision = false;
    m_hasExtendedCollision2 = false;
    m_maybeGroupColor = cocos2d::ccc3(0, 0, 0);
    m_useBlackOpacity = false;
    m_maybeBlackChildIsBlendable = false;
    m_blackChildOpacity = cocos2d::ccc3(0, 0, 0);
    m_inLevelEditor = false;
    m_groupEnabled = false;
    m_editorEnabled = false;
    m_isGroupDisabled = false;
    m_activeMainColorID = 0;
    m_activeDetailColorID = 0;
    m_baseColorUsesHSV = false;
    m_detailColorUsesHSV = false;
    m_positionXOffset = 0.0;
    m_postionYOffset = 0.0;
    m_rotationXOffset = 0.0;
    m_endRotationX = 0.0;
    m_rotationYOffset = 0.0;
    m_endRotationY = 0.0;
    m_scaleXOffset = 0.0;
    m_scaleYOffset = 0.0;
    m_realPositionX = 0.0;
    m_realPositionY = 0.0;
    m_shouldLockX = false;
    m_isFlipX = false;
    m_isFlipY = false;
    m_customBoxOffset = cocos2d::CCPointZero;
    m_boxOffsetCalculated = true;
    m_boxOffset = cocos2d::CCPointZero;
    m_width = 0.0;
    m_OBB2D = nullptr;
    m_shouldUseOuterOb = false;
    m_glowSpriteMain = nullptr;
    m_glowSpriteDetail = nullptr;
    m_height = 0.0;
    m_hasSepcialChild = false;
    m_isActivated = false;
    m_previewIsDisabled = false;
    m_particles = nullptr;
    m_particleString = "";
    m_hasParticles = false;
    m_particleUseObjectColor = false;
    m_hasColorSprite = false;
    m_ParticlePostion = cocos2d::CCPointZero;
    m_particleScale = 0;
    m_textureRect = cocos2d::CCRectZero;
    m_isDirty = false;
    m_isObjectPosDirty = false;
    m_isUnmodifiedPositionsDirty = true;
    m_objectTextureRectHeight = 0.0;
    m_objectRect =  cocos2d::CCRectZero;
    m_unkObjectType = 7;
    m_isObjectRectDirty = false;
    m_isOrientedBoxDirty = false;
    m_colorSpriteLocked = false;
    m_isBlendable = false;
    m_canRoateFree = false;
    m_isMirroredByScale = false;
    m_linkedGroup = 0;
    m_unkObject = nullptr;
    m_mainColorMode = 0;
    m_mainChildColorMode = 0;
    m_shouldBlendBaseColor = false;
    m_shouldBlendDetailColor = false;
    m_hasCustomChild = false;
    m_isAnimatedObject = false;
    m_colorSprite = nullptr;
    m_isParticleObject = false;
    m_objectRadius = 0.0;
    m_isRotationAligned = false;
    m_spriteWidthScale = 0.0;
    m_spriteHeightScale = 0.0;
    m_uniqueID = 0;
    m_objectType = 0;
    m_unmodifiedPositionX = 0.0;
    m_unmodifiedPositionY = 0.0;
    m_lastPositionX = 0.0;
    m_lastPositionY = 0.0;
    m_startPosition =  CCPointMake(0, 0);
    m_hasAudioScale = false;
    m_maybeAnimationScaleValue = -1;
    m_hasNoAudioScale = false;
    m_colorIdx = 1;
    m_isDisabled = false;
    m_startRotationX = 0.0;
    m_startRotationY = 0.0;
    m_startScaleX = 1.0;
    m_startScaleY = 1.0;
    m_customScaleX = 0.0;
    m_customScaleY = 0.0;
    m_startFlipX = false;
    m_startFlipY = false;
    m_isHidden = false;
    m_isInvisible = false;
    m_someAngleValue = 0.0;
    m_unkBool = false;
    m_enterValueX = 0;
    m_enterValueY = 0;
    m_enterChannel = 0;
    m_objectMaterial = 0;
    m_enterReset = false;
    m_disableGlow = false;
    m_objectID = 0;
    m_dontTransfrom = false;
    m_isSolid = false;
    m_ignoreEnter = false;
    m_ignoreFade = false;
    m_dontFadeTinted = false;
    m_isTintObject = false;
    m_isDetailOnly = false;
    m_customColorType = 0;
    m_isDontEnter = false;
    m_isDontFade = false;
    m_hasNoEffects = false;
    m_hasNoParticles = false;
    m_defaultZOrder = 0;
    m_isPortalObject = false;
    m_colorZLayerRelated = false;
    m_isAudioScale = false;
    m_minAudioScale = 0.0;
    m_maxAudioScale = 0.0;
    m_particleLocked = false;
    m_property53 = 0;
    m_doesntFade = false;
    m_useGlowBGColor = false;
    m_useGlowColor = false;
    m_cantColorGlow = false;
    m_opacityMod = 0.0;
    m_upSlope = false;
    m_slopeDirection = 0;
    m_maybeShouldFixSlopes = false;
    m_colorOpacityMod2 = 0.0;
    m_baseColor = nullptr;
    m_detailColor = nullptr;
    m_isBlendingBatchNode = false;
    m_defaultZLayer = 5;
    m_zFixedZLayer = false;
    m_zLayer = 0;
    m_zOrder = 0;
    m_selected = false;
    m_isSelected = false;
    m_unk460 = 0;
    m_unk46d = cocos2d::CCPointZero;
    m_shouldUpdateColorSprite = false;
    m_maybeToggleColorParent = false;
    m_toggleGroupParent = false;
    m_toggleAreaParent = false;
    m_scaleX = 1.0;
    m_scaleY = 1.0;
    m_groups = nullptr;
    m_groupCount = 0;
    m_hasGroupParentsString = false;
    m_colorGroups = nullptr;
    m_colorgroupCount = 0;
    m_opacityGroups = nullptr;
    m_opacityGroupSize = 0;
    m_editorLayer = 0;
    m_editorLayer2 = 0;
    m_enabledGroupsCounter = 0;
    m_updateCustomContentSize = false;
    m_hasContentSize = false;
    m_isNoTouch = false;
    m_lastSize = cocos2d::CCSizeZero;
    m_lastPosition = cocos2d::CCPointZero;
    m_classID = 0;
    m_unkState1 = -1;
    m_followActionState = -1;
    m_unkState2 = -1;
    m_someGameStateValue = true;
    m_color2.r = 0xff;
    m_color2.g = 0xff;
    m_color2.b = 0xff;
    m_isTrigger = false;
    m_isTriggerGroup = false;
    m_isTriggerObject = false;
    m_ignoreEditorDuration = false;
    m_isStoppableTrigger = false;
    m_isEditorSpawnableTrigger = false;
    m_isHighDetail = false;
    m_colorSprite1 = nullptr;
    m_colorSprite2 = nullptr;
    m_goEffectManager = nullptr;
    m_maybeIsGoEffectObject = false;
    m_isMainDecoration = false;
    m_isDetailDecoration = false;
    m_isNotDamaging = false;
    m_maybeNotColorable = false;
    m_isPassable = false;
    m_isHide = false;
    m_isNonStickX = false;
    m_isNonStickY = false;
    m_iceBlock = false;
    m_isGripSlope = false;
    m_isScaleStick = false;
    m_isExtraSticky = false;
    m_isDontBoostY = false;
    m_isDontBoostX = false;
    m_isTeleportObject = false;
    m_objectRotated = false;
    m_pixelScaleXY = 1.0;
    m_pixelScaleX = 1.0;
    m_pixelScaleY = 1.0;
    m_areaOpacityGlu = 0xff;
    m_property155 = 0;
    m_property156 = 0;
    m_areaOpacityFloat = 0.0;
    m_areaOpacityInt = 0;
    m_maybeSavedPositionState = 0;
    m_maybeIgnoreTempOffset = false;
    m_isUIObject = false;
    m_isSpecialObject = false;
}


cocos2d::ccColor3B GameObject::getActiveColorForMode(int id, bool useMain) {

    /* Was able to optimize to a switchblock successfully */
    switch(id) {
        /* SEE: https://wyliemaster.github.io/gddocs/#/resources/client/level-components/level-colors?id=color-channel-id39s */
        case 0x3f2: {
            return BLACK_COLOR_3B;
        }
        case 0x3f3: {
            return WHITE_COLOR_3B;
        }
        case 0x3f4: {
            m_groupColor = m_goEffectManager->colorForEffect((useMain) ? ((cocos2d::CCSprite *)m_colorSprite1)->getColor() : getColor(), 
                // Not sure about this part, Final Guess...
                (useMain) ? m_baseColor->m_hsv : m_detailColor->m_hsv
            );
            return m_groupColor;
        }
        case 0: {
            return WHITE_COLOR_3B;
        }

        default: {
            return (useMain) ? 
                ((cocos2d::CCSprite*)m_colorSprite1)->getColor() : 
                ((cocos2d::CCSprite*)m_colorSprite2)->getColor();
        }
    }
}
/* According to ghidra, This function is static as id is r0... */

/* Incase you don't know what r0 is I'll explain right here 
 * 
 * I use Android32 Because it's easiest for navigating the Assembly Generated crap.
 * Windows is not used because of it's harder learning curve and Andriod has Symbols (ELF Files)
 * 
 * On Andriod32 armabi-7a assembly arguments go in the order of 
 * r0-r3 and then Stack[0x...], Floats/Doubles are structures in assembly 
 * but I have to force translate s0 to r values...
 * since I'm not in the mood to translate this shit off...
 * 
 * If a Value is r0 and not the class object it's one of 2 cases
 * 
 * Static function - Common
 * 
 * Inline function - Rare (Believe me when I say we don't want to see these ones...) as r1 is the class variable
 *                   and then ghidra doesn't show the function anymore which is annoying...
 * 
 * Hopefully, now you know what I am referring to when I talk about R Assembly Values so moving on... 
 * 
 * - Calloc */

const char* GameObject::getBallFrame(int id)
{
  return cocos2d::CCString::createWithFormat("rod_ball_%02d_001.png",(id > 3) ? 3: id)->getCString();
}

/* possibly inlined because r1 is the "this" variable ;-; */
cocos2d::CCRect GameObject::getBoundingRect()
{
    return cocos2d::CCRectApplyAffineTransform(CCRectMake(0.0, 0.0, m_width, m_height),nodeToParentTransform());
}


cocos2d::CCPoint GameObject::getBoxOffset()
{


    if (m_customBoxOffset.equals(cocos2d::CCPointZero)) {
       
        if ((GameManager::sharedState()->m_inLevelEditor) || (m_boxOffsetCalculated)) {
            auto pos_fo = convertToNodeSpace(m_customBoxOffset);
            auto pos_fz = convertToNodeSpace(cocos2d::CCPointZero);
            auto parent = getParent();
            if (parent != nullptr) {
              pos_fo = parent->convertToNodeSpace(pos_fo);
              pos_fz = parent->convertToNodeSpace(pos_fz);
            }
            m_boxOffset = pos_fo - pos_fz;
            m_boxOffsetCalculated = false;
        }
    }
    return m_boxOffset;
  
}

/* There's a possibility this one is inlined... */

std::string GameObject::getColorFrame(std::string frame){
    return __Subroutine_Replace_All(frame, "_001.png","_color_001.png");
};


int GameObject::getColorIndex(){
    switch(m_objectID) {
        case 29:
            return 1000;
        case 30:
            return 1001;
        case 105:
            return 1004;
        case 744:
            return 1003;
        case 899:
            return m_colorIdx;
        case 900:
            return 1009;
        case 915: 
            return 1002;
        default: 
            return 0;
    }
}



#define WRITE_HSV_FUCKERY(writer, COLOR) \
    writer << "." << COLOR->m_hsv.h << COLOR->m_hsv.s << COLOR->m_hsv.v << COLOR->m_hsv.absoluteSaturation << COLOR->m_hsv.absoluteBrightness;

#define FINISH_WRITER_AND_RETURN(writer, result) \
    std::string result = writer.c_str(); writer.Clear(); return result

std::string GameObject::getColorKey(bool isDetail, bool hasGroups)
{
    if (!isDetail) {
      isDetail = m_isDetailOnly;
    }
    fmt::BasicWriter<char> writer;
    if (!isDetail){
        auto scm = getSecondaryColorMode();
        writer << scm;
        if (scm == 1012){
            writer << "." << getColorKey(true, hasGroups);
            if ((m_detailColor != nullptr) && (m_detailColor->m_usesHSV)){
                // Wow Robtop what absolute fuckery.
                WRITE_HSV_FUCKERY(writer, m_detailColor);
            }
        }
    } else {
        auto mcm = getMainColorMode();
        writer << mcm;
        if (m_baseColor->m_usesHSV){
            WRITE_HSV_FUCKERY(writer, m_baseColor);
        }
        if (m_isDetailOnly){
            writer << "d";
        }
    }

    /* At least this part is cleaner than the other... */

    writer << ".";
    
    for (short i = 0; i < m_groupCount; i++){
        writer << m_groups->at(i) << ".";
    }
    
    for (short j = 0; j < m_colorgroupCount; j++){
        writer << m_colorGroups->at(j) << ".";
    }
    writer << "." << isDetail;

    // basicwriter has no detor... (This will get annoying later on...)
    FINISH_WRITER_AND_RETURN(writer, result);
}



ZLayer GameObject::getCustomZLayer(){
    return static_cast<ZLayer>(m_zLayer);
};


std::string GameObject::getGlowFrame(std::string frame){
    return __Subroutine_Replace_All(frame, "_001.png","_glow_001.png");
};

/* TODO: Fix this shit... */
bool GameObject::getGroupDisabled(){
    return m_groupEnabled;
}; 


int GameObject::getGroupID(int ID){
    return (ID < 10) ? m_groups->at(ID) : 0; 
};


std::string GameObject::getGroupString(){
    fmt::BasicWriter<char>writer;
    bool nodot = true;
    for (int i = 0; i < 10; i++){
        short g = m_groups->at(i);
        if (g > 0){
            if (!nodot){
                writer << ".";
            }
            writer << g;
            nodot = false;
        }
    }
    FINISH_WRITER_AND_RETURN(writer, result);
};


bool GameObject::getHasRotateAction(){
    return false;
}

bool GameObject::getHasSyncedAnimation(){
    return false;
}


const cocos2d::CCPoint &GameObject::getLastPosition(){
    return m_lastPosition;
}

GJSpriteColor* GameObject::getMainColor(){
    return m_baseColor;
};

#define GAMEOBJECT_GET_COLOR_MODE(GETTER) \
    GJSpriteColor* color = ##GETTER(); \
    return (color != nullptr) ? color->getColorMode() : 0 \


int GameObject::getMainColorMode(){
    GAMEOBJECT_GET_COLOR_MODE(getMainColor);
};


int GameObject::getObjectDirection(){
    int sd;
    determineSlopeDirection();
    sd = m_slopeDirection - 2;
    if (sd > 5) {
        return 4;
    }
    sd = 1 << (sd & 0xff);
    // Made it into a handful of ternaries to save space sorry if this is confusing...
    return (!(sd & 0x24)) ? ((!(sd & 0x18)) ? ((sd & 3) ? 3: 4) : 1) : 2;
}

// Still unknown until I find a vtable call just like it...
/* Unknown Return: GameObject::getObjectLabel(){ return 0;}; */


float GameObject::getObjectRadius(){
    if ((m_scaleX != 1.0) || (m_scaleY != 1.0)) {
        m_objectRadius = m_objectRadius * ((m_scaleX < m_scaleY) ? m_scaleX: m_scaleY);
    }
    return m_objectRadius;
}; 

cocos2d::CCRect const &GameObject::getObjectRect()
{
    return getObjectRect2(m_spriteWidthScale, m_spriteHeightScale);
}



cocos2d::CCRect GameObject::getObjectRect(float x,float y){
    if (m_isMirroredByScale) {
        m_scaleX = abs(m_scaleX);
        m_scaleY = abs(m_scaleY);
    }

    auto ObjectScale = CCSizeMake(m_width * m_scaleX, m_height * m_scaleY);
    ObjectScale.width *= x;
    ObjectScale.height *= y;

    if (m_isRotationAligned) {
      ObjectScale.height = ObjectScale.width;
      ObjectScale.width = ObjectScale.height;
    }
  
    auto pos = getRealPosition() + getBoxOffset();
    return CCRectMake(
            /* X */
            pos.x - ObjectScale.width * 0.5,
            /* Y */
            pos.y - ObjectScale.height * 0.5,
            /* Width */
            ObjectScale.width, 
            /* Height */
            ObjectScale.height
    );
}

/* Seems to be a function that updates if the objectRect was considered to being filthy... */
cocos2d::CCRect GameObject::getObjectRect2(float x, float y){

    if (m_isObjectRectDirty) {
        /* Update if Object was filthy... */
        m_isObjectRectDirty = false;
        m_objectRect = (m_shouldUseOuterOb) ? getOuterObjectRect() : getObjectRect(x, y);
    }
    return m_objectRect;
};


bool GameObject::getObjectRectDirty() const
{
  return m_isObjectRectDirty;
}


cocos2d::CCRect* GameObject::getObjectRectPointer()
{
    if (m_isObjectRectDirty) {
        getObjectRect();
    }
    return &m_objectRect;
}

/* TBH Robtop, You could make this one into a constexpr if you really wanted to... */
float GameObject::getObjectRotation()
{
    return m_startRotationX + m_rotationXOffset;
}

cocos2d::CCRect GameObject::getObjectTextureRect(){
    float v1;
    if (m_isDirty == false) {
        if (m_isObjectPosDirty) {
            m_isObjectPosDirty = false;
            v1 = m_textureRect.size.height;
            m_textureRect.origin.x = m_lastPositionX - m_textureRect.size.width * 0.5;
            m_textureRect.origin.y = m_lastPositionY - (v1 * 0.5);
        }
    }
    else {
        
        m_isDirty = false;
        m_isObjectPosDirty = false;
        if (m_updateCustomContentSize == false) {
          
            cocos2d::CCSize size = (m_hasContentSize) ? m_lastSize : getContentSize();

            if (m_scaleX != 1.0) {
                size.width = size.width * abs(m_scaleX);
            }

            if (m_scaleY != 1.0) {
                size.height = size.height * abs(m_scaleY);
            }
            if (m_isRotationAligned == false) {
                v1 = cocos2d::CCNode::getRotationX();
                if ((v1 != 0.0) && (abs(v1) != 180.0)) {
                  size.width = (float)sqrtf(size.height * size.height + size.width * size.width) ;
                  size.height = size.width;
                }
            }

            else {
                size.width = size.height;
                size.height = size.width;
            }
            
            m_textureRect.size.width = size.width;
            v1 = size.width * 0.5;
            m_textureRect.size.height = size.height;
            m_textureRect.origin.x = m_lastPositionX - v1;
            m_textureRect.origin.y = (m_lastPositionY - (size.height * 0.5));

            /* No idea what the fuck is going on here either ghidra fucked up or something else is going on... */
            if (size.width <= 30.0) {
                v1 -= 15.0;
            }
            if (size.width <= 30.0) {
                m_objectTextureRectHeight = v1;
            }
        }
        else {
            m_isObjectRectDirty = true;
            m_textureRect = getObjectRect();
        }
    } 
    return m_textureRect;
}


ZLayer GameObject::getObjectZLayer()
{
    /* NOT Robtop's FAULT, BLAME GEODE FOR CUSTOM ENUM BULLSHIT... */
    return static_cast<ZLayer>((static_cast<int>(m_zLayer)) ?  m_zLayer : m_defaultZLayer); 
}


int GameObject::getObjectZOrder(){
    return (m_zOrder) ? m_zOrder: m_defaultZOrder;
};

// Luckily I finished Reverse Engineering Wyliemaster's Original Work so Everything with OBB2D is complete...
OBB2D* GameObject::getOrientedBox(){
    if ((m_OBB2D != nullptr) || (m_isOrientedBoxDirty)){
        calculateOrientedBox();
    }
    return m_OBB2D;
};


bool GameObject::getOrientedRectDirty()
{
    return m_isOrientedBoxDirty;
}

cocos2d::CCRect GameObject::getOuterObjectRect()
{
    if (m_isOrientedBoxDirty) {
        updateOrientedBox();
    }
    return m_OBB2D->getBoundingRect();
}

/* Out of everything I get to decompile, I hate these the most... 
    If anybody wants to fix this ass puzzle be my guest...
*/
int GameObject::getParentMode()
{
    int mode, iVar1;
    bool bVar1, bVar2, bVar3;

    if(m_maybeAnimationScaleValue != -1)
        goto ANIMATED_SCALEVALUE_BELOW_ZERO;
    if(m_hasSepcialChild == false) {
        if(m_isPortalObject == false) {
            if (m_objectID < 0xad3) {
                if (m_objectID < 0xa94) {
                    if (m_objectID < 0x743) {
                        if (m_objectID < 0x734) {
                            if (m_objectID < 0x531) {
                                if (m_objectID < 0x52f) {
                                    if (m_objectID < 0x39a) {
                                        if (m_objectID < 0x398) {
                                            if (m_objectID == 0x392) {
                                                mode = 2;
                                                goto LAB_0035d474;
                                            }
                                            if (m_objectID != 0x396) {
                                                bVar2 = m_objectID == 0x8e;
                                                goto LAB_0035d428;
                                            }
                                        }
                                    } else if(1 < m_objectID - 0x39bU)
                                        goto LAB_0035d472;
                                }
                            } else if (m_objectID != 0x64e) {
                                if (m_objectID < 0x64f) {
                                    if (m_objectID != 0x531) {
                                        bVar2 = m_objectID == 0x630;
                                        goto LAB_0035d33c;
                                    }
                                    goto LAB_0035d466;
                                }
                                if((m_objectID != 0x652) && (m_objectID != 0x718)) {
                                    if (m_objectID == 0x64f)
                                        goto LAB_0035d45e;
                                    goto LAB_0035d472;
                                }
                            }
                        }
                    } else if (m_objectID != 0x7dc) {
                        if (m_objectID < 0x7dd) {
                            if (m_objectID < 0x789) {
                                if(0x77e < m_objectID)
                                    goto LAB_0035d466;
                                bVar2 = m_objectID == 0x744;
                            LAB_0035d33c:
                                if(bVar2)
                                    goto LAB_0035d462;
                            } else if(0x78f < m_objectID) {
                                if (m_objectID < 0x794)
                                    goto LAB_0035d462;
                                iVar1 = 0x7ac;
                            LAB_0035d426:
                                bVar2 = m_objectID == iVar1;
                            LAB_0035d428:
                                if(bVar2)
                                    goto LAB_0035d466;
                            }
                        } else if (m_objectID < 0xa8d) {
                            if(0x815 < m_objectID)
                                goto LAB_0035d46a;
                            if(0x7e3 < m_objectID) {
                                if(0x807 < m_objectID) {
                                    iVar1 = 0x80f;
                                    goto LAB_0035d426;
                                }
                                goto LAB_0035d462;
                            }
                        } else {
                            bVar3 = m_objectID != 0xa8f;
                            bVar2 = m_objectID == 0xa90;
                        LAB_0035d3e6:
                            if(!bVar3 || bVar2)
                                goto LAB_0035d466;
                        }
                        goto LAB_0035d472;
                    }
                    goto LAB_0035d462;
                }
            } else {
                if(0xc19 < m_objectID) {
                    if (m_objectID < 0xed8) {
                        if(0xe73 < m_objectID)
                            goto LAB_0035d46a;
                        if (m_objectID < 0xe47) {
                            if(0xe3d < m_objectID) {
                            LAB_0035d46e:
                                mode = 8;
                                goto LAB_0035d474;
                            }
                            if(0xc1c < m_objectID) {
                                if(0xe0f < m_objectID) {
                                    iVar1 = 0xe11;
                                    goto LAB_0035d426;
                                }
                                goto LAB_0035d46a;
                            }
                        } else if (m_objectID - 0xe48U < 4)
                            goto LAB_0035d46e;
                    } else if (m_objectID < 0x1130) {
                        if(3999 < m_objectID) {
                        LAB_0035d46a:
                            mode = 6;
                            goto LAB_0035d474;
                        }
                        if(0xed8 < m_objectID)
                            goto LAB_0035d46e;
                    } else if (m_objectID - 0x1131U < 0x8b)
                        goto LAB_0035d46a;
                LAB_0035d472:
                    mode = 0;
                    goto LAB_0035d474;
                }
                if(0xc13 < m_objectID)
                    goto LAB_0035d46a;
                if (m_objectID < 0xb52) {
                    if (m_objectID < 0xb4f) {
                        if (m_objectID < 0xb32) {
                            if (m_objectID < 0xb30) {
                                if (m_objectID != 0xad5) {
                                    if(0xad4 < m_objectID) {
                                        iVar1 = 0xad8;
                                        goto LAB_0035d3ee;
                                    }
                                    goto LAB_0035d472;
                                }
                                goto LAB_0035d466;
                            }
                        } else if (m_objectID < 0xb33)
                            goto LAB_0035d472;
                    LAB_0035d462:
                        mode = 3;
                        goto LAB_0035d474;
                    }
                } else {
                    if (m_objectID < 0xbbb) {
                        if (m_objectID < 3000) {
                            bVar3 = 0x46 < m_objectID - 0xb6fU;
                            bVar2 = m_objectID - 0xb6fU == 0x47;
                            goto LAB_0035d3e6;
                        }
                        goto LAB_0035d462;
                    }
                    iVar1 = 0xbda;
                LAB_0035d3ee:
                    if (m_objectID < iVar1)
                        goto LAB_0035d472;
                }
            }
        }
    LAB_0035d466:
        mode = 1;
    } else {
    LAB_0035d45e:
        mode = 4;
    }
LAB_0035d474:
    m_maybeAnimationScaleValue = mode;
ANIMATED_SCALEVALUE_BELOW_ZERO:
    return m_maybeAnimationScaleValue;
}


float GameObject::getRScaleX(){
    return cocos2d::CCNode::getScaleX() * ((isFlipX()) ? 1.0: -1.0);
}

float GameObject::getRScaleY(){
    return cocos2d::CCNode::getScaleY() * ((isFlipY()) ? 1.0: -1.0);
}


cocos2d::CCPoint GameObject::getRealPosition()
{
    /* why the hell do you do this to us why doubles? .-. */
    return CCPointMake(m_lastPositionX, m_lastPositionY);
}



GJSpriteColor * GameObject::getRelativeSpriteColor(int ID)
{
    return (isColorObject() && (ID == 2)) ? m_detailColor : m_baseColor;
}


/* FUN_0035b070 */
bool __SUBROUTINE_UNK_HSV(cocos2d::ccHSVValue *hsv)
{
    return ((hsv->h != 0.0) && (hsv->s == 1.0)) && (hsv->v == 1.0) && (hsv->absoluteSaturation && hsv->absoluteBrightness);
}


#define WRITE_PROPERTY(PROPERTYID, PROPERTY) writer << "," << PROPERTYID << "," << PROPERTY

std::string GameObject::getSaveString(GJBaseGameLayer* base)
{
    fmt::BasicWriter<char> writer;
    writer << "," << 1 << "," << m_objectID;
    WRITE_PROPERTY(2, cocos2d::CCNode::getPosition().x);
    WRITE_PROPERTY(3, cocos2d::CCNode::getPosition().y - 90.0f); 
    
    /* BOOLEANS */
    if (m_disableGlow) 
        WRITE_PROPERTY(96, 1);
    if (m_isPassable)
        WRITE_PROPERTY(134, 1);
    if (m_isHide)
        WRITE_PROPERTY(135, 1);
    if (m_hasExtendedCollision)
        WRITE_PROPERTY(511, 1);
    if (m_isNonStickX)
        WRITE_PROPERTY(136, 1);
    if (m_isNonStickY)
        WRITE_PROPERTY(289, 1);
    if (m_isExtraSticky)
        WRITE_PROPERTY(495, 1);
    if (m_isDontBoostY)
        WRITE_PROPERTY(496, m_isDontBoostY);
    if (m_isDontBoostX)
        WRITE_PROPERTY(509, m_isDontBoostX);
    if (m_isScaleStick) {
        WRITE_PROPERTY(356, m_isScaleStick);
    }
    if (m_hasNoAudioScale) {
        WRITE_PROPERTY(372, m_hasNoAudioScale);
    }
    if (m_customColorType) {
        WRITE_PROPERTY(497, m_customColorType);
    }
    if (m_iceBlock) {
        WRITE_PROPERTY(137, m_iceBlock);
    }
    if (m_isGripSlope) {
        WRITE_PROPERTY(193, m_isGripSlope); 
    }
    if (m_isNoTouch) {
        WRITE_PROPERTY(121, m_isNoTouch);
    } 
    if (m_enterChannel != 0) {
        WRITE_PROPERTY(0x157, m_enterChannel);
    }
    if (m_objectMaterial != 0) {
        WRITE_PROPERTY(0x1be, m_objectMaterial);
    }
    if (isFlipX()) {
        WRITE_PROPERTY(4, 1);
    }
    if (isFlipY()){
        WRITE_PROPERTY(5, 1);
    }
    if (m_linkedGroup > 0) {
        WRITE_PROPERTY(108, m_linkedGroup);
    }
    if (m_editorLayer != 0) {
        WRITE_PROPERTY(20, m_editorLayer);
    }
    if (m_editorLayer2 != 0) {
        WRITE_PROPERTY(0x3d, m_editorLayer); 
    }
    if (m_isHighDetail) {
        WRITE_PROPERTY(0x67, m_isHighDetail);
    }
    if (m_groupCount > 0) {
        WRITE_PROPERTY(0x39, getGroupString());
    } 
    if ((m_hasGroupParentsString) && (base != nullptr)) {
        std::string parent = base->getGroupParentsString(this);
        if (parent.length()) {
            WRITE_PROPERTY(0x112, parent);
        }
    } 
    if (m_isDontFade) {
        WRITE_PROPERTY(0x40, 1);
    }
    if (m_isDontEnter) {
        WRITE_PROPERTY(0x43, 1);
    }
    if (m_hasNoEffects) {
        WRITE_PROPERTY(0x74, m_hasNoEffects);
    }
    if (m_hasNoParticles) {
        WRITE_PROPERTY(0x1fb, m_hasNoParticles);
    }
    if (m_property155 > 0) {
        WRITE_PROPERTY(155, m_property155);
    }
    if (m_property156 > 0) {
        WRITE_PROPERTY(156, m_property156);
    }
    if (m_property53 != 0) {
        WRITE_PROPERTY(53, m_property53);
    }
    if (m_zOrder != 0) {
        WRITE_PROPERTY(0x19, m_zOrder);
    }
    float rx = ((getRotationX() / 360.0) * 0x168);
    float ry = ((getRotationY() / 360.0) * 0x168);
    if (!rx) {
        rx = (rx * 100.0 + 0.5) / 100.0;
    }
    if (!ry) {
        ry = (ry * 100.0 + 0.5) / 100.0;
    }
    if (rx == ry) {
      if (rx == 0.0) goto ROTATIONX_IS_ZERO;
      // ASSUMED...
      WRITE_PROPERTY(6, rx);
    } else {
        WRITE_PROPERTY(0x84, rx);
        WRITE_PROPERTY(0x85, ry);
    }
    ROTATIONX_IS_ZERO:
    if ((m_baseColor)->m_colorID != 0) {
        WRITE_PROPERTY(0x15,m_baseColor->m_colorID);
    } 
    if ((m_detailColor != nullptr) && (m_detailColor->m_colorID != 0)) {
        WRITE_PROPERTY(0x16,m_detailColor->m_colorID);
    }
    if (m_zLayer) {
        WRITE_PROPERTY(0x18, static_cast<int>(m_zLayer));
    }
    if (m_scaleX != 1.0) {
        WRITE_PROPERTY(0x80, m_scaleX);
    }
    if (m_scaleY != 1.0) {
        WRITE_PROPERTY(0x81, m_scaleY);
    }
    if (m_toggleGroupParent) {
        WRITE_PROPERTY(0x22, m_toggleGroupParent);
    } 
    if (m_toggleAreaParent) {
        WRITE_PROPERTY(0x117, m_toggleAreaParent);
    }
    
//         // TODO MAKE A FUCKING MACRO!.
//  if (__SUBROUTINE_UNK_HSV(&m_baseColor->m_hsv)) {
// 
//         local_23c = (GJBaseGameLayer_vtable *)&DAT_0093fb84;
//         local_238 = m_objectID;
//         fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,",");
//         fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,0x29);
//         local_23c = (GJBaseGameLayer_vtable *)&DAT_0093fb84;
//         local_238 = 0;
//         fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,",");
//         fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,1);
//         local_23c = (GJBaseGameLayer_vtable *)&DAT_0093fb84;
//         local_238 = 0;
//         fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,",");
//         fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,0x2b);
//         local_23c = (GJBaseGameLayer_vtable *)&DAT_0093fb84;
//         local_238 = 0;
//         fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,",");
//         pGVar3 = m_baseColor;
//         uVar1._0_1_ = (pGVar3->m_hsv).absoluteSaturation;
//         uVar1._1_1_ = (pGVar3->m_hsv).absoluteBrightness;
//         uVar1._2_1_ = (pGVar3->m_hsv).__pad[0];
//         uVar1._3_1_ = (pGVar3->m_hsv).__pad[1];
//         GameToolbox::stringFromHSV
//                   (&local_244,(pGVar3->m_hsv).h,(pGVar3->m_hsv).s,(pGVar3->m_hsv).v,uVar1,&DAT_0093fae 8)
//         ;
//         local_23c = (GJBaseGameLayer_vtable *)local_244._M_data;
//         local_238 = local_244._M_data[-1]._M_capacity;
//         fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,(char *)local_244._M_data);
//         std::string::~string(&local_244);
//     } 
//   pGVar3 = m_detailColor;
//   if ((pGVar3 != nullptr) &&
//      (m_objectID = FUN_0035b070(&pGVar3->m_hsv), m_objectID == 0)) {
//     local_23c = (GJBaseGameLayer_vtable *)&DAT_0093fb84;
//     local_238 = m_objectID;
//     fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,",");
//     fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,0x2a);
//     local_23c = (GJBaseGameLayer_vtable *)&DAT_0093fb84;
//     local_238 = 0;
//     fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,",");
//     fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,1);
//     local_23c = (GJBaseGameLayer_vtable *)&DAT_0093fb84;
//     local_238 = 0;
//     fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,",");
//     fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,0x2c);
//     local_23c = (GJBaseGameLayer_vtable *)&DAT_0093fb84;
//     local_238 = 0;
//     fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,",");
//     pGVar3 = m_detailColor;
//     uVar2._0_1_ = (pGVar3->m_hsv).absoluteSaturation;
//     uVar2._1_1_ = (pGVar3->m_hsv).absoluteBrightness;
//     uVar2._2_1_ = (pGVar3->m_hsv).__pad[0];
//     uVar2._3_1_ = (pGVar3->m_hsv).__pad[1];
//     GameToolbox::stringFromHSV
//               (&local_240,(pGVar3->m_hsv).h,(pGVar3->m_hsv).s,(pGVar3->m_hsv).v,uVar2,&DAT_0093fae 8)
//     ;
//     local_23c = (GJBaseGameLayer_vtable *)local_240._M_data;
//     local_238 = local_240._M_data[-1]._M_capacity;
//     fmt::BasicWriter<char>::operator<<((BasicWriter<char> *)local_234,(char *)local_240._M_data);
//     std::string::~string(&local_240);
//   }
  FINISH_WRITER_AND_RETURN(writer, ret);
}



cocos2d::CCPoint GameObject::getScalePosDelta()
{


    cocos2d::CCPoint pos = cocos2d::CCPointZero;
    cocos2d::CCRect rect = getObjectRect();

    
    if (m_isRotationAligned) {
        rect.size.height = rect.size.width;
        rect.size.width = rect.size.height;
    }
    
    if (didScaleXChange()) {
        pos.x = (rect.size.width - (rect.size.width / m_scaleX) * m_customScaleX) * 0.5;
    }
    
    if (didScaleYChange()) {
        pos.y = (rect.size.height - (rect.size.height / m_scaleY) * m_customScaleY) * 0.5;
    }
    if (m_isRotationAligned) {
        pos.y = pos.x;
        pos.x = pos.y;
    }
    return pos;
}


GJSpriteColor * GameObject::getSecondaryColor(){
    return m_detailColor;
}

int GameObject::getSecondaryColorMode(){
    // Knew the Macro came in handy later...
    GAMEOBJECT_GET_COLOR_MODE(getSecondaryColor);
};

float GameObject::getSlopeAngle()
{
    auto rect = getObjectRect();
    return atan(rect.size.height / rect.size.width);
}



cocos2d::CCPoint GameObject::getStartPos()
{
    return m_startPosition;
}


// UNSURE...
/* Unknown Return: GameObject::getTextKerning(){}; */


GameObjectType GameObject::getType()
{
    return static_cast<GameObjectType>(m_objectType);
}



cocos2d::CCPoint GameObject::getUnmodifiedPosition(){
    return CCPointMake(m_lastPositionX - m_positionXOffset, m_lastPositionY - m_postionYOffset);
};


cocos2d::ccColor3B GameObject::groupColor(cocos2d::ccColor3B const& color, bool detail)
{
    for (int i = 0; i < m_colorgroupCount; i = i + 1) {
        m_groupColor = m_goEffectManager->colorForGroupID(m_colorGroups->at(i) , m_groupColor, detail);
    }
    return m_groupColor;
}

float GameObject::groupOpacityMod(){
    float opacityMod = 1.0;
    for (int i = 0; i < m_opacityGroupSize; i++){
        opacityMod *= m_goEffectManager->opacityModForGroup(m_opacityGroups->at(i));
        if (opacityMod <= 0.0) 
            return 0.0;
    }
    return opacityMod;
};  


void GameObject::groupWasDisabled(){
    m_enabledGroupsCounter--;
    m_groupEnabled = m_enabledGroupsCounter > 0;
};


void GameObject::groupWasEnabled(){
    m_enabledGroupsCounter++;
    m_groupEnabled = m_enabledGroupsCounter > 0;
};


bool GameObject::hasBeenActivated(){
    return false;
};


bool GameObject::hasBeenActivatedByPlayer(PlayerObject *player)
{
    return false;
}


bool GameObject::hasSecondaryColor(){
    return m_colorSprite != nullptr;
};


// FUCK THESE PUZZLES!!! I HATE THEM!!!

bool GameObject::ignoreEditorDuration() {
    int a;
    unsigned int b;
    bool c;
    bool d;

    if(m_objectType == 0x1e) {
        return true;
    }
    if(0x71b < m_objectID) {
        if (m_objectID < 0xb6f) {
            if(0xb6c < m_objectID) {
                return true;
            }
            if (m_objectID < 0x811) {
                if(0x80d < m_objectID) {
                    return true;
                }
                if (m_objectID == 0x77b) {
                    return true;
                }
                if (m_objectID < 0x77c) {
                    if (m_objectID == 0x743) {
                        return true;
                    }
                    if (m_objectID == 0x778) {
                        return true;
                    }
                    a = 0x725;
                } else {
                    if(0x78f < m_objectID) {
                        c = m_objectID == 0x7e0;
                        goto LAB_0036143c;
                    }
                    if(0x78a < m_objectID) {
                        return true;
                    }
                    a = 0x77d;
                }
            } else if (m_objectID < 0xb55) {
                if(0xb52 < m_objectID) {
                    return true;
                }
                if (m_objectID < 0x816) {
                    if(0x813 < m_objectID) {
                        return true;
                    }
                    a = 0x812;
                } else {
                    a = 0xb32;
                }
            } else {
                if (m_objectID < 0xb56) {
                    return false;
                }
                if (m_objectID < 0xb5a) {
                    return true;
                }
                a = 0xb5b;
            }
        } else if (m_objectID < 0xe1a) {
            if(0xe15 < m_objectID) {
                return true;
            }
            if (m_objectID == 0xbd3) {
                return true;
            }
            if (m_objectID < 0xbd4) {
                if (m_objectID < 0xbbc) {
                    return false;
                }
                if (m_objectID < 0xbc3) {
                    return true;
                }
                d = 7 < m_objectID - 0xbc8U;
                c = m_objectID - 0xbc8U == 8;
                goto LAB_003614e2;
            }
            if (m_objectID == 0xe10) {
                return true;
            }
            if (m_objectID < 0xe11) {
                d = 3 < m_objectID - 0xbd5U;
                c = m_objectID - 0xbd5U == 4;
                goto LAB_003614e2;
            }
            a = 0xe14;
        } else {
            if (m_objectID < 0xe3c) {
                if(0xe37 < m_objectID) {
                    return true;
                }
                if (m_objectID < 0xe1c) {
                    return false;
                }
                if (m_objectID < 0xe20) {
                    return true;
                }
                a = -0xe21;
                goto LAB_003614c8;
            }
            if (m_objectID == 0xe47) {
                return true;
            }
            if (0xe47 < m_objectID) {
                b = m_objectID - 0xe4c;
                goto LAB_003614e0;
            }
            a = 0xe3d;
        }
    LAB_0036143a:
        c = m_objectID == a;
    LAB_0036143c:
        if(!c) {
            return false;
        }
        return true;
    }
    if (0x716 < m_objectID) {
        return true;
    }
    if (m_objectID < 0x120) {
        if(0x11d < m_objectID) {
            return true;
        }
        if(0x3b < m_objectID) {
            if (m_objectID == 0x6f) {
                return true;
            }
            if (m_objectID < 0x70) {
                if (m_objectID == 0x54) {
                    return true;
                }
                if (m_objectID < 0x55) {
                    c = m_objectID == 0x43;
                } else {
                    if (m_objectID == 99) {
                        return true;
                    }
                    c = m_objectID == 0x65;
                }
                goto LAB_0036143c;
            }
            if (m_objectID < 0x8c) {
                return false;
            }
            if (m_objectID < 0x8f) {
                return true;
            }
            a = -200;
        LAB_003614c8:
            d = 2 < (unsigned int)(m_objectID + a);
            c = m_objectID + a == 3;
            goto LAB_003614e2;
        }
        if(0x36 < m_objectID) {
            return true;
        }
        if (m_objectID < 0x22) {
            if(0x1e < m_objectID) {
                return true;
            }
            if (m_objectID < 10) {
                return false;
            }
            if (m_objectID < 0xe) {
                return true;
            }
            d = 5 < m_objectID - 0x16U;
            c = m_objectID - 0x16U == 6;
            goto LAB_003614e2;
        }
        if (m_objectID < 0x23) {
            return false;
        }
        if (m_objectID < 0x25) {
            return true;
        }
        b = m_objectID - 0x2d;
    } else {
        if (m_objectID == 0x631) {
            return true;
        }
        if (m_objectID < 0x632) {
            if (m_objectID == 0x3fe) {
                return true;
            }
            if (m_objectID < 0x3ff) {
                if (m_objectID == 0x2e9) {
                    return true;
                }
                if (m_objectID < 0x2ea) {
                    c = m_objectID == 0x294;
                    goto LAB_0036143c;
                }
                if (m_objectID == 0x2eb) {
                    return true;
                }
                a = 0x2ed;
            } else {
                if (m_objectID == 0x4f4) {
                    return true;
                }
                if(0x4f4 < m_objectID) {
                    d = 4 < m_objectID - 0x531U;
                    c = m_objectID - 0x531U == 5;
                    goto LAB_003614e2;
                }
                a = 0x419;
            }
            goto LAB_0036143a;
        }
        if (m_objectID == 0x650) {
            return true;
        }
        if (m_objectID < 0x651) {
            if (m_objectID < 0x63a) {
                return false;
            }
            if (m_objectID < 0x63c) {
                return true;
            }
            b = m_objectID - 0x64b;
        } else {
            if (m_objectID == 0x6db) {
                return true;
            }
            if (m_objectID < 0x6dc) {
                if (m_objectID == 0x6a8) {
                    return true;
                }
                a = 0x6d7;
                goto LAB_0036143a;
            }
            b = m_objectID - 0x713;
        }
    }
LAB_003614e0:
    d = 1 < b;
    c = b == 2;
LAB_003614e2:
    if(d && !c) {
        return false;
    }
    return true;
}


bool GameObject::ignoreEnter(){
    return m_ignoreEnter;
};


bool GameObject::ignoreFade(){
    return m_ignoreFade;
};


bool GameObject::init(const char *frame)
{
    if (CCSpritePlus::initWithSpriteFrameName(frame)) {
        commonSetup();
        // Recently added to CCNode as one of the final Robtop Added flags...
        m_hasNoManagement = true;
        return true;
    }
    return false;
}   



bool GameObject::initWithTexture(cocos2d::CCTexture2D *texture){
    if (CCSpritePlus::initWithTexture(texture)) {
        commonSetup();
        return true;
    }
    return false;
}


// Static Function... effectID was placed at r0
bool GameObject::isBasicEnterEffect(int effectID)
{
    // if (effectID < 0x3c) {
    //   if ((effectID < 0x37) && (6 < effectID - 0x16U)) {
    //     return false;
    //   }
    // }
    // else if (effectID != 0x77b) {
    //   return false;
    // }
    // return true;

    // My Best Estimate of above's code...
    switch(effectID){
        case 1915:
            return true;
        case 60:
            return true;
        case 55:
            return true;
        default:
            return false;
    }
}

// TODO: Deoptimize
bool GameObject::isBasicTrigger()
{
    int m_objectID;
    bool a;
    bool b;

    if (m_objectID < 0x64e) {
        if (0x64b < m_objectID) {
            return true;
        }
        if (m_objectID < 0x22) {
            if (0x1f < m_objectID) {
                return true;
            }
            b = 5 < m_objectID - 0x16U;
            a = m_objectID - 0x16U == 6;
        } else {
            b = 3 < m_objectID - 0x37U;
            a = m_objectID - 0x37U == 4;
        }
    } else {
        if (m_objectID == 0x77b) {
            return true;
        }
        if (0x77b < m_objectID) {
            if (m_objectID < 0xbc9) {
                return false;
            }
            if (0xbcd < m_objectID) {
                if (m_objectID != 0xbcf) {
                    return false;
                }
                return true;
            }
            return true;
        }
        b = m_objectID != 0x71a;
        a = m_objectID == 0x71b;
    }
    if (!b || a) {
        return true;
    }
    return false;
}

bool GameObject::isColorObject()
{
    m_maybeNotColorable = m_customColorType == 1;
    return ((m_maybeNotColorable == false) && (!hasSecondaryColor()) && (m_baseColor->m_defaultColorID != 0x3ec));
}


bool GameObject::isColorTrigger() {
    bool b;
    // TODO: Deoptimize to this...
    // switch (m_objectID){
    //     case 744:
    //         return true;
    //     case 105:
    //         return false;
    //     case 915:
    //         return true;

    //     default:
    //         return true;
    // }
    if (m_objectID != 0x2e8) {
        if (m_objectID < 0x2e9) {
            if (m_objectID < 0x1d) {
                return false;
            }
            if (m_objectID < 0x1f) {
                return true;
            }
            b = m_objectID == 0x69;
        } else {
            if (m_objectID < 899) {
                return false;
            }
            if (m_objectID < 0x385) {
                return true;
            }
            b = m_objectID == 0x393;
        }
        if (!b) {
            return false;
        }
    }
    return true;
}


// also needs deoptimizing...
bool GameObject::isConfigurablePortal(){
    bool b;

    if (m_objectID < 0x120) {
        if (0x11d < m_objectID) {
            return true;
        }
        if (m_objectID == 0x2f) {
            return true;
        }
        if (m_objectID < 0x30) {
            if (1 < m_objectID - 0xcU) {
                return false;
            }
            return true;
        }
        b = m_objectID == 0x6f;
    } else {
        if (m_objectID == 0x2e9) {
            return true;
        }
        if (m_objectID < 0x2ea) {
            b = m_objectID == 0x294;
        } else {
            if (m_objectID == 0x533) {
                return true;
            }
            b = m_objectID == 0x78d;
        }
    }
    if (b) {
        return true;
    }
    return false;
}

// Fuck these unsolvable switches!!!

bool GameObject::isEditorSpawnableTrigger(){
    int i;
    unsigned int ui;
    bool a, b;

    if (m_objectID == 0x80e) {
        return true;
    }
    if (0x80e < m_objectID) {
        if (m_objectID == 0xbce) {
            return true;
        }
        if (m_objectID < 0xbcf) {
            if (m_objectID == 0xb5b) {
                return true;
            }
            if (0xb5b < m_objectID) {
                if (m_objectID < 0xb6e) {
                    if (0xb66 < m_objectID) {
                        return true;
                    }
                    b = 7 < m_objectID - 0xb5dU;
                    a = m_objectID - 0xb5dU == 8;
                } else {
                    if (m_objectID == 2999) {
                        return true;
                    }
                    if (m_objectID < 2999) {
                        return false;
                    }
                    b = 9 < m_objectID - 0xbbeU;
                    a = m_objectID - 0xbbeU == 10;
                }
                goto LAB_00360ba6;
            }
            if (m_objectID < 0xb56) {
                if (0xb52 < m_objectID) {
                    return true;
                }
                ui = m_objectID - 0x812;
            } else {
                ui = m_objectID - 0xb57;
            }
        } else {
            if (m_objectID < 0xe20) {
                if (0xe1b < m_objectID) {
                    return true;
                }
                if (m_objectID < 0xbd8) {
                    if (0xbd4 < m_objectID) {
                        return true;
                    }
                    a = m_objectID == 0xbd0;
                    goto LAB_00360b66;
                }
                if (m_objectID == 0xbd9) {
                    return true;
                }
                if (m_objectID < 0xbd9) {
                    return false;
                }
                b = 6 < m_objectID - 0xe12U;
                a = m_objectID - 0xe12U == 7;
                goto LAB_00360ba6;
            }
            if (m_objectID < 0xe3a) {
                if (0xe37 < m_objectID) {
                    return true;
                }
                b = 2 < m_objectID - 0xe21U;
                a = m_objectID - 0xe21U == 3;
                goto LAB_00360ba6;
            }
            if (m_objectID == 0xe47) {
                return true;
            }
            if (m_objectID < 0xe47) {
                return false;
            }
            ui = m_objectID - 0xe4c;
        }
    LAB_00360ba4:
        b = 1 < ui;
        a = ui == 2;
    LAB_00360ba6:
        if (b && !a) {
            return false;
        }
        return true;
    }
    if (m_objectID == 0x63b) {
        return true;
    }
    if (m_objectID < 0x63c) {
        if (m_objectID == 0x393) {
            return true;
        }
        if (m_objectID < 0x394) {
            if (m_objectID == 0x69) {
                return true;
            }
            if (m_objectID < 0x6a) {
                i = -0x1d;
            LAB_00360ad2:
                b = m_objectID + i != 0;
                a = m_objectID + i == 1;
                goto LAB_00360ba6;
            }
            if (m_objectID == 0x2e8) {
                return true;
            }
            if (m_objectID < 0x2e8) {
                return false;
            }
            ui = m_objectID - 899;
            goto LAB_00360ba4;
        }
        if (m_objectID == 0x4f4) {
            return true;
        }
        if (m_objectID < 0x4f5) {
            if (m_objectID < 0x3ee) {
                return false;
            }
            if (m_objectID < 0x3f0) {
                return true;
            }
            i = 0x419;
        } else {
            if (m_objectID < 0x542) {
                return false;
            }
            if (m_objectID < 0x544) {
                return true;
            }
            i = 0x631;
        }
    } else if (m_objectID < 0x77b) {
        if (0x777 < m_objectID) {
            return true;
        }
        if (m_objectID == 0x713) {
            return true;
        }
        if (m_objectID < 0x714) {
            if (m_objectID < 0x64b) {
                return false;
            }
            if (m_objectID < 0x64e) {
                return true;
            }
            a = m_objectID == 0x650;
            goto LAB_00360b66;
        }
        if (m_objectID < 0x716) {
            return false;
        }
        if (m_objectID < 0x718) {
            return true;
        }
        i = 0x719;
    } else {
        if (m_objectID == 0x78c) {
            return true;
        }
        if (m_objectID < 0x78d) {
            i = -0x77c;
            goto LAB_00360ad2;
        }
        if (m_objectID < 0x78e) {
            return false;
        }
        if (m_objectID < 0x790) {
            return true;
        }
        i = 0x7df;
    }
    a = m_objectID == i;
LAB_00360b66:
    if (!a) {
        return false;
    }
    return true;
}



bool GameObject::isFacingDown()
{
    bool down;
    unsigned int u = (unsigned int)getObjectRotation();
    bool flipY = isFlipY();
    if ((u % 90) == 0) {
      down = u == 180;
    }
    else if ((u - 90) <= 180) {
      down = true;
    }
    else {
      down = (u + 270) <= 180;
    }
    return (flipY) ? (down ^ 1) : down;
}

// Lost my Motivation... 
bool GameObject::isFacingLeft(){}
// {
//   bool iVar3;
//   byte bVar1;
//   float fVar2;
//   int iVar5;
//   uint uVar6;
//   uint uVar7;
//   int extraout_r1;
//   int iVar8;
//   int iVar4;
  
//   fVar2 = (float)(*(code *)this->vtable->GameObject_getObjectRotation)();
//   iVar8 = (int)fVar2;
//   iVar4 = (*(code *)this->vtable->GameObject_isFlipY)(this);
//   iVar5 = __aeabi_idivmod(iVar8,0x5a);
//   if (extraout_r1 == 0) {
//     if (iVar8 < 0) {
//       iVar8 = iVar8 + 0x168;
//     }
//     if (iVar8 == 0x10e) {
//       return (bool)((byte)iVar4 ^ 1);
//     }
//     if (iVar8 == 0x5a) {
//       iVar5 = iVar4;
//     }
//     bVar1 = (byte)iVar5;
//     if (iVar8 != 0x5a) {
//       bVar1 = 0;
//     }
//   }
//   else {
//     if (iVar8 - 0x5bU < 0xb3) {
//       bVar1 = 1;
//     }
//     else {
//       uVar6 = iVar8 + 0x10d;
//       uVar7 = uVar6;
//       if (0xb2 < uVar6) {
//         uVar7 = 0;
//       }
//       bVar1 = (byte)uVar7;
//       if (uVar6 < 0xb3) {
//         bVar1 = 1;
//       }
//     }
//     if (iVar4 != 0) {
//       return (bool)(bVar1 ^ 1);
//     }
//   }
//   return (bool)bVar1;
// }


bool GameObject::isFlipX()
{
    return m_isFlipX;
}


bool GameObject::isFlipY()
{
    return m_isFlipY;
}


bool GameObject::isSettingsObject()
{
    switch (m_objectID){
        case 3613:
            return false;
        case 3622:
            return true;
        default:
            return true;
    }
}

// I think you know why I'm skipping these for now until I can find a deoptimizing expert...
bool GameObject::isSpawnableTrigger()
{
    return;
}

// Doesn't look as bad as isSpawnableTrigger if someone wants to solve it...
bool GameObject::isSpecialObject()
{
    return;
}


bool GameObject::isSpecialSpawnObject()
{
    return false;
}

// Personally I am not in the mood for unsolvable switchblocks
bool GameObject::isSpeedObject()
{
    return;
}

// And Another one
bool GameObject::isStoppableTrigger()
{
    return;
}

// Same Problem as all the above...
bool GameObject::isTrigger()
{
    return;
}

// Has a bunch of inlined slop, Find out what FUN_0076e56c, FUN_0076e5a4, and FUN_0076d7b8 is and I'll reconsider...
// or unless robtop pulls out a new twitch stream where this function is visable there's no hope...
void GameObject::loadGroupsFromString(std::string p0)
{
    return;
}



void GameObject::makeInvisible(){
    m_previewIsDisabled = true;
    m_isInvisible = true;
    setOpacity(0);
};

void GameObject::makeVisible()
{
    m_previewIsDisabled = false;
    m_isInvisible = false;
    setOpacity(0xff);
}

/* Mentally not prepared and don't know how to approch these... */
GameObject* GameObject::objectFromVector(std::vector<std::string>& p0, std::vector<void*>& p1, GJBaseGameLayer* p2, bool p3)
{
    return;
}


// Makes a bad code generation where CCRGBAProtocol_vtable* is thrown out of wack...
/* Unknown Return: GameObject::opacityModForMode(int p0, bool p1){}; */


/* Unknown Return: GameObject::parentForZLayer(int p0, bool p1, int p2){}; */


/* Unknown Return: GameObject::particleWasActivated(){}; */


/* Unknown Return: GameObject::perspectiveColorFrame(char const* p0, int p1){}; */


/* Unknown Return: GameObject::perspectiveFrame(char const* p0, int p1){}; */

void GameObject::playDestroyObjectAnim(GJBaseGameLayer* p0)
{
    return;
}



/* Unknown Return: GameObject::playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, float p10, float p11){}; */


/* Unknown Return: GameObject::playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4){}; */

void GameObject::playShineEffect()
{
    return;
}



/* Unknown Return: GameObject::quickUpdatePosition(){}; */


/* Unknown Return: GameObject::quickUpdatePosition2(){}; */


/* Unknown Return: GameObject::removeColorSprite(){}; */

void GameObject::removeFromGroup(int p0)
{
    return;
}



/* Unknown Return: GameObject::removeGlow(){}; */


/* Unknown Return: GameObject::reorderColorSprite(){}; */


/* Unknown Return: GameObject::resetColorGroups(){}; */


/* Unknown Return: GameObject::resetGroupDisabled(){}; */


/* Unknown Return: GameObject::resetGroups(){}; */


/* Unknown Return: GameObject::resetMID(){}; */


/* Unknown Return: GameObject::resetMainColorMode(){}; */


void GameObject::resetMoveOffset(){
    
};

void GameObject::resetObject()
{
    return;
}



/* Unknown Return: GameObject::resetRScaleForced(){}; */


/* Unknown Return: GameObject::resetSecondaryColorMode(){}; */


/* Unknown Return: GameObject::restoreObject(){}; */


/* Unknown Return: GameObject::saveActiveColors(){}; */

void GameObject::selectObject(cocos2d::ccColor3B p0)
{
    return;
}


void GameObject::setAreaOpacity(float p0, float p1, int p2)
{
    return;
}


void GameObject::setChildColor(cocos2d::ccColor3B const& p0)
{
    return;
}


void GameObject::setCustomZLayer(int p0)
{
    return;
}


void GameObject::setDefaultMainColorMode(int p0)
{
    return;
}


void GameObject::setDefaultSecondaryColorMode(int p0)
{
    return;
}


void GameObject::setFlipX(bool flipX)
{
    return;
}


void GameObject::setFlipY(bool flipY)
{
    return;
}


void GameObject::setGlowColor(cocos2d::ccColor3B const& p0)
{
    return;
}


void GameObject::setGlowOpacity(unsigned char p0)
{
    return;
}


void GameObject::setLastPosition(cocos2d::CCPoint const& p0)
{
    return;
}


void GameObject::setMainColorMode(int p0)
{
    return;
}


void GameObject::setObjectColor(cocos2d::ccColor3B const& p0)
{
    return;
}


void GameObject::setObjectLabel(cocos2d::CCLabelBMFont* p0)
{
    return;
}


void GameObject::setObjectRectDirty(bool p0)
{
    return;
}


void GameObject::setOpacity(unsigned char p0)
{
    return;
}


void GameObject::setOrientedRectDirty(bool p0)
{
    return;
}


void GameObject::setPosition(cocos2d::CCPoint const& p0)
{
    return;
}


void GameObject::setRRotation(float p0)
{
    return;
}


void GameObject::setRScale(float p0)
{
    return;
}


void GameObject::setRScaleX(float p0)
{
    return;
}


void GameObject::setRScaleY(float p0)
{
    return;
}


void GameObject::setRotation(float p0)
{
    return;
}


void GameObject::setRotationX(float p0)
{
    return;
}


void GameObject::setRotationY(float p0)
{
    return;
}


void GameObject::setScale(float p0)
{
    return;
}


void GameObject::setScaleX(float p0)
{
    return;
}


void GameObject::setScaleY(float p0)
{
    return;
}


void GameObject::setSecondaryColorMode(int p0)
{
    return;
}


void GameObject::setStartPos(cocos2d::CCPoint p0)
{
    return;
}


void GameObject::setType(GameObjectType p0)
{
    return;
}


void GameObject::setVisible(bool p0)
{
    return;
}



/* Unknown Return: GameObject::setupColorSprite(int p0, bool p1){}; */

void GameObject::setupCustomSprites(std::string p0)
{
    return;
}



/* Unknown Return: GameObject::setupPixelScale(){}; */


/* Unknown Return: GameObject::setupSpriteSize(){}; */

bool GameObject::shouldBlendColor(GJSpriteColor* p0, bool p1)
{
    return;
}



/* Unknown Return: GameObject::shouldDrawEditorHitbox(){}; */


/* Unknown Return: GameObject::shouldLockX(){}; */


/* Unknown Return: GameObject::shouldNotHideAnimFreeze(){}; */


/* Unknown Return: GameObject::shouldShowPickupEffects(){}; */


/* Unknown Return: GameObject::slopeFloorTop(){}; */


/* Unknown Return: GameObject::slopeWallLeft(){}; */


/* Unknown Return: GameObject::slopeYPos(cocos2d::CCRect p0){}; */


/* Unknown Return: GameObject::slopeYPos(float p0){}; */


/* Unknown Return: GameObject::slopeYPos(GameObject* p0){}; */


/* Unknown Return: GameObject::spawnDefaultPickupParticle(GJBaseGameLayer* p0){}; */


/* Unknown Return: GameObject::spawnXPosition(){}; */


/* Unknown Return: GameObject::transferObjectRect(cocos2d::CCRect& p0){}; */

void GameObject::triggerActivated(float p0)
{
    return;
}


void GameObject::triggerObject(GJBaseGameLayer* p0, int p1, std::vector<int> const* p2)
{
    return;
}



/* Unknown Return: GameObject::unclaimParticle(){}; */

void GameObject::update(float p0)
{
    return;
}



/* Unknown Return: GameObject::updateBlendMode(){}; */


/* Unknown Return: GameObject::updateCustomColorType(short p0){}; */

void GameObject::updateCustomScaleX(float p0)
{
    return;
}


void GameObject::updateCustomScaleY(float p0)
{
    return;
}



/* Unknown Return: GameObject::updateHSVState(){}; */


/* Unknown Return: GameObject::updateIsOriented(){}; */


/* Unknown Return: GameObject::updateMainColor(cocos2d::ccColor3B const& p0){}; */


/* Unknown Return: GameObject::updateMainColorOnly(){}; */


/* Unknown Return: GameObject::updateMainOpacity(){}; */


/* Unknown Return: GameObject::updateMainParticleOpacity(unsigned char p0){}; */

void GameObject::updateObjectEditorColor()
{
    return;
}



/* Unknown Return: GameObject::updateOrientedBox(){}; */


/* Unknown Return: GameObject::updateParticleColor(cocos2d::ccColor3B const& p0){}; */


/* Unknown Return: GameObject::updateParticleOpacity(unsigned char p0){}; */


/* Unknown Return: GameObject::updateSecondaryColor(cocos2d::ccColor3B const& p0){}; */


/* Unknown Return: GameObject::updateSecondaryColorOnly(){}; */


/* Unknown Return: GameObject::updateSecondaryOpacity(){}; */


/* Unknown Return: GameObject::updateSecondaryParticleOpacity(unsigned char p0){}; */


/* Unknown Return: GameObject::updateStartPos(){}; */

void GameObject::updateStartValues()
{
    return;
}



/* Unknown Return: GameObject::updateTextKerning(int p0){}; */


/* Unknown Return: GameObject::updateUnmodifiedPositions(){}; */


/* Unknown Return: GameObject::usesFreezeAnimation(){}; */


/* Unknown Return: GameObject::usesSpecialAnimation(){}; */

