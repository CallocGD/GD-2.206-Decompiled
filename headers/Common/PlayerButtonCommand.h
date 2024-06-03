#ifndef __PLAYERBUTTONCOMMAND_H__
#define __PLAYERBUTTONCOMMAND_H__


#include "../includes.h"

class PlayerButtonCommand {
public:
    PlayerButton m_button;
    bool m_isPush;
    bool m_isPlayer2;
    int m_step;
};

#endif /* __PLAYERBUTTONCOMMAND_H__ */