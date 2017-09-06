/**
 * Project Untitled
 */


#ifndef _KNIFE_H
#define _KNIFE_H

#include "Weapon.h"


class Knife: public Weapon {
private: 
    int knives;
    int damage;
    bool stackable = true;
};

#endif //_KNIFE_H