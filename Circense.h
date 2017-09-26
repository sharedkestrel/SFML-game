/**
 * Project Untitled
 */


#ifndef _CIRCENSE_H
#define _CIRCENSE_H

#include "MainCharacter.h"


class Circense: public MainCharacter {

public:
    Circense();
    ~Circense();

private: 
    Knife * knife;
};

#endif //_CIRCENSE_H