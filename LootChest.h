/**
 * Project Untitled
 */


#ifndef _LOOTCHEST_H
#define _LOOTCHEST_H

#include "TriggerObject.h"


class LootChest: public TriggerObject {
public: 
    
    void loot();
private: 
    bool looted;
    UnsellableItem* items[];
    int goldLoot;
};

#endif //_LOOTCHEST_H