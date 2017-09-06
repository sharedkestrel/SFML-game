/**
 * Project Untitled
 */


#ifndef _MELEE_H
#define _MELEE_H

#include "Weapon.h"


class Melee: public Weapon {
private: 
    int durability;
    int damageIncrease;
};

#endif //_MELEE_H