/**
 * Project Untitled
 */


#ifndef _MOLOTOV_H
#define _MOLOTOV_H

#include "Potion.h"


class Molotov: public Potion {
private: 
    int damagePerTurn;
    int turnDuration;
};

#endif //_MOLOTOV_H