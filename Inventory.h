/**
 * Project Untitled
 */


#ifndef _INVENTORY_H
#define _INVENTORY_H

#include "Armor.h"
#include "Amulet.h"

class Inventory {
public:

    Inventory();
    ~Inventory();
    
    bool addItem(Item& newItem, int quantity = 1);
    
    bool removeItem(int slotToRemove);

    int getGold() const {
        return gold;
    }

    void setGold(int gold) {
        Inventory::gold = gold;
    }

    Armor * getArmorSlot() const {
        return armorSlot;
    }

    void setArmorSlot(Armor *armorSlot) {
        Inventory::armorSlot = armorSlot;
    }

    Amulet *getAmuletSlot() const {
        return amuletSlot;
    }

    void setAmuletSlot(Amulet *amuletSlot) {
        Inventory::amuletSlot = amuletSlot;
    }

    struct slot {
        Item * item;
        int quantity;
    };
private:
    int maxSlots = 32; //Numero massimo di oggetti unici
    struct slot *inventorySlot[];
    int gold = 0;
    Armor* armorSlot = nullptr;
    Amulet* amuletSlot = nullptr;
};

#endif //_INVENTORY_H