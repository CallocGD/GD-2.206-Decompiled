
#include "includes.h"
#include "GameObject.h"



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

void GameObject::activatedByPlayer(PlayerObject* player){};


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
        if ((m_shouldBlendDetailColor != false) && (m_colorZLayerRelated != false)) {
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
          
            if (m_colorSpriteLocked != false) {
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
void __thiscall GameObject::addGlow(std::string frame)
{
    GameManager *GM;
    int extraObjectID;
    int m_objectID;
    int extraObjectID2;
    bool checkB;
    bool checkA;

    if ((m_inLevelEditor != false) ||
        /* GameManager Boolean needs finding, Feel free to make a PR if found... */
        (((GM = GameManager::sharedState(), /* GM->field143_0x29e != false */ 1 &&
                                                (m_doesntFade == false)) ||
          (m_isHide != false))))
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
        m_glowSpriteMain = cocos2d::CCSprite::createWithSpriteFrameName(frame->c_str());
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
    if ((((m_shouldBlendBaseColor != false) && (m_colorSprite != nullptr)) && (m_shouldBlendDetailColor == false)) && (m_colorZLayerRelated == false)) {
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
void GameObject::addNewSlope01Glow(bool dontDraw)
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
    size_t i;

    if ((m_colorgroupCount < 10) && (groupID <= 9999)) {
        createColorGroupContainer(10);
        for (i = 0; i < m_colorgroupCount; i++){
            if (m_colorGroups->at(i) == groupID){
                return;
            }
        }
        // Robtop, Please Tell me why you write code this way?
        m_colorGroups->operator[](i) = static_cast<short>(groupID);
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
        m_opacityGroups->operator[](m_opacityGroupSize) = groupID;
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

void __thiscall GameObject::assignUniqueID()
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
  return false;
}



bool GameObject::canRotateFree(){
    int ot = static_cast<int>(m_objectType);
    /* if someone wants to fix this, be my guest... */
    if ((ot < 0x1a) && ((1 << (ot & 0xff) & 0x2200001U) != 0)) {
        return m_isNoTouch;
    }
    return true;
}; 

// TODO: claimParticle and then the rest...

/* Unknown Return: GameObject::claimParticle(){}; */


/* Unknown Return: GameObject::colorForMode(int p0, bool p1){}; */


/* Unknown Return: GameObject::commonInteractiveSetup(){}; */

void GameObject::commonSetup()
{
    return;
}



/* Unknown Return: GameObject::copyGroups(GameObject* p0){}; */


/* Unknown Return: GameObject::createAndAddParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3){}; */


/* Unknown Return: GameObject::createColorGroupContainer(int p0){}; */


/* Unknown Return: GameObject::createGlow(std::string p0){}; */

void GameObject::createGroupContainer(int p0)
{
    return;
}



/* Unknown Return: GameObject::createOpacityGroupContainer(int p0){}; */


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

GameObject* GameObject::createWithFrame(char const* p0)
{
    return;
}


GameObject* GameObject::createWithKey(int p0)
{
    return;
}


void GameObject::customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1)
{
    return;
}


void GameObject::customSetup()
{
    return;
}


void GameObject::deactivateObject(bool p0)
{
    return;
}


void GameObject::deselectObject()
{
    return;
}


void GameObject::determineSlopeDirection()
{
    return;
}



/* Unknown Return: GameObject::didScaleXChange(){}; */


/* Unknown Return: GameObject::didScaleYChange(){}; */


/* Unknown Return: GameObject::dirtifyObjectPos(){}; */


/* Unknown Return: GameObject::dirtifyObjectRect(){}; */


/* Unknown Return: GameObject::disableObject(){}; */


/* Unknown Return: GameObject::dontCountTowardsLimit(){}; */


/* Unknown Return: GameObject::duplicateAttributes(GameObject* p0){}; */


/* Unknown Return: GameObject::duplicateColorMode(GameObject* p0){}; */

void GameObject::duplicateValues(GameObject* p0)
{
    return;
}



/* Unknown Return: GameObject::editorColorForCustomMode(int p0){}; */


/* Unknown Return: GameObject::editorColorForMode(int p0){}; */


/* Unknown Return: GameObject::fastRotateObject(float p0){}; */

void GameObject::firstSetup()
{
    return;
}


// GameObject::GameObject()


/* Unknown Return: GameObject::getActiveColorForMode(int p0, bool p1){}; */


/* Unknown Return: GameObject::getBallFrame(int p0){}; */


/* Unknown Return: GameObject::getBoundingRect(){}; */


/* Unknown Return: GameObject::getBoxOffset(){}; */


/* Unknown Return: GameObject::getColorFrame(std::string p0){}; */


/* Unknown Return: GameObject::getColorIndex(){}; */

// std::string GameObject::getColorKey(bool p0, bool p1)
// {
    
// }



/* Unknown Return: GameObject::getCustomZLayer(){}; */


/* Unknown Return: GameObject::getGlowFrame(std::string p0){}; */


/* Unknown Return: GameObject::getGroupDisabled(){}; */


/* Unknown Return: GameObject::getGroupID(int p0){}; */


/* Unknown Return: GameObject::getGroupString(){}; */


/* Unknown Return: GameObject::getHasRotateAction(){}; */


/* Unknown Return: GameObject::getHasSyncedAnimation(){}; */


/* Unknown Return: GameObject::getLastPosition(){}; */


/* Unknown Return: GameObject::getMainColor(){}; */


/* Unknown Return: GameObject::getMainColorMode(){}; */


/* Unknown Return: GameObject::getObjectDirection(){}; */


/* Unknown Return: GameObject::getObjectLabel(){}; */


/* Unknown Return: GameObject::getObjectRadius(){}; */

// cocos2d::CCRect const& GameObject::getObjectRect()
// {
//     return;
// }


// cocos2d::CCRect GameObject::getObjectRect(float p0, float p1)
// {
//     return;
// }



/* Unknown Return: GameObject::getObjectRect2(float p0, float p1){}; */


/* Unknown Return: GameObject::getObjectRectDirty(){}; */


/* Unknown Return: GameObject::getObjectRectPointer(){}; */


/* Unknown Return: GameObject::getObjectRotation(){}; */


/* Unknown Return: GameObject::getObjectTextureRect(){}; */


/* Unknown Return: GameObject::getObjectZLayer(){}; */


/* Unknown Return: GameObject::getObjectZOrder(){}; */


/* Unknown Return: GameObject::getOrientedBox(){}; */


/* Unknown Return: GameObject::getOrientedRectDirty(){}; */


/* Unknown Return: GameObject::getOuterObjectRect(){}; */


/* Unknown Return: GameObject::getParentMode(){}; */


/* Unknown Return: GameObject::getRScaleX(){}; */


/* Unknown Return: GameObject::getRScaleY(){}; */

cocos2d::CCPoint GameObject::getRealPosition()
{
    return;
}



/* Unknown Return: GameObject::getRelativeSpriteColor(int p0){}; */

std::string GameObject::getSaveString(GJBaseGameLayer* p0)
{
    return;
}



/* Unknown Return: GameObject::getScalePosDelta(){}; */


/* Unknown Return: GameObject::getSecondaryColor(){}; */


/* Unknown Return: GameObject::getSecondaryColorMode(){}; */


/* Unknown Return: GameObject::getSlopeAngle(){}; */

cocos2d::CCPoint GameObject::getStartPos()
{
    return m_startPosition;
}



/* Unknown Return: GameObject::getTextKerning(){}; */

GameObjectType GameObject::getType()
{
    return;
}



/* Unknown Return: GameObject::getUnmodifiedPosition(){}; */


/* Unknown Return: GameObject::groupColor(cocos2d::ccColor3B const& p0, bool p1){}; */


/* Unknown Return: GameObject::groupOpacityMod(){}; */


/* Unknown Return: GameObject::groupWasDisabled(){}; */


/* Unknown Return: GameObject::groupWasEnabled(){}; */


/* Unknown Return: GameObject::hasBeenActivated(){}; */


/* Unknown Return: GameObject::hasBeenActivatedByPlayer(PlayerObject* p0){}; */


/* Unknown Return: GameObject::hasSecondaryColor(){}; */

bool GameObject::ignoreEditorDuration()
{
    return;
}



/* Unknown Return: GameObject::ignoreEnter(){}; */


/* Unknown Return: GameObject::ignoreFade(){}; */

bool GameObject::init(char const* p0)
{
    return;
}


bool GameObject::initWithTexture(cocos2d::CCTexture2D* p0)
{
    return;
}


bool GameObject::isBasicEnterEffect(int p0)
{
    return;
}


bool GameObject::isBasicTrigger()
{
    return;
}


bool GameObject::isColorObject()
{
    return;
}


bool GameObject::isColorTrigger()
{
    return;
}


bool GameObject::isConfigurablePortal()
{
    return;
}


bool GameObject::isEditorSpawnableTrigger()
{
    return;
}


bool GameObject::isFacingDown()
{
    return;
}


bool GameObject::isFacingLeft()
{
    return;
}


bool GameObject::isFlipX()
{
    return;
}


bool GameObject::isFlipY()
{
    return;
}


bool GameObject::isSettingsObject()
{
    return;
}


bool GameObject::isSpawnableTrigger()
{
    return;
}


bool GameObject::isSpecialObject()
{
    return;
}


bool GameObject::isSpecialSpawnObject()
{
    return;
}


bool GameObject::isSpeedObject()
{
    return;
}


bool GameObject::isStoppableTrigger()
{
    return;
}


bool GameObject::isTrigger()
{
    return;
}


void GameObject::loadGroupsFromString(std::string p0)
{
    return;
}



/* Unknown Return: GameObject::makeInvisible(){}; */

GameObject* GameObject::objectFromVector(std::vector<std::string>& p0, std::vector<void*>& p1, GJBaseGameLayer* p2, bool p3)
{
    return;
}



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


void GameObject::setFlipX(bool p0)
{
    return;
}


void GameObject::setFlipY(bool p0)
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

