/**
 * Project Untitled
 */


#ifndef _AMULET_H
#define _AMULET_H

#include "Gear.h"


class Amulet: public Gear {
public: 
    
    void applyEffect();
private: 
    std::string name = "gianni";
};

#endif //_AMULET_H