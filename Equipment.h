/**
 * Project Untitled
 */


#ifndef _EQUIPMENT_H
#define _EQUIPMENT_H

#include "Item.h"


class Equipment: public Item {
public: 
    
    bool equip();
    
    bool unequip();
protected: 
    bool stackable = false;
};

#endif //_EQUIPMENT_H