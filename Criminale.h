/**
 * Project Untitled
 */


#ifndef _CRIMINALE_H
#define _CRIMINALE_H

#include "MainCharacter.h"


class Criminale: public MainCharacter {
private: 
    Melee* melee;
    int strength;
};

#endif //_CRIMINALE_H