/**
 * Project Untitled
 */


#ifndef _CRIMINALE_H
#define _CRIMINALE_H

#include "MainCharacter.h"
#include "Melee.h"


class Criminale: public MainCharacter {
public:
    Criminale();

    void Move(unsigned short int side);
private:
    Melee * melee = nullptr;
    int strength;
};

#endif //_CRIMINALE_H