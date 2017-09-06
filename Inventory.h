/**
 * Project Untitled
 */


#ifndef _INVENTORY_H
#define _INVENTORY_H

class Inventory {
public: 
    
    bool addItem();
    
    bool removeItem();
    class slot {
    public: 
        UnsellableItem * item;
        int quantity;
    };
private: 
    struct * slot[];
    int gold = 0;
    * Armor armorSlot;
    * Amulet amuletSlot;
};

#endif //_INVENTORY_H