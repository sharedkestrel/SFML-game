/**
 * Project Untitled
 */


#ifndef _OINTMENT_H
#define _OINTMENT_H

#include "Weapon.h"


class Ointment: public Weapon {
private: 
    int pots;
    boolean stackable = true;
};

#endif //_OINTMENT_H