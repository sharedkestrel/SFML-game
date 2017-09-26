/**
 * Project Untitled
 */

//#include <exception>
#include "Inventory.h"


Inventory::Inventory() : armorSlot(), amuletSlot() {
    //TODO search for save file


    //set the inventory to empty

    for(int i = 0; i < maxSlots; i++){
        inventorySlot[i] = nullptr;
    }
}


Inventory::~Inventory() {
    delete[] inventorySlot;
}


bool Inventory::addItem(Item &newItem, int quantity) {
    for(int i = 0; i < maxSlots; i++){
        if(inventorySlot[i] == nullptr){
            inventorySlot[i]->item = &newItem;
            inventorySlot[i]->quantity = quantity;
            return true;
        }
    }
    return false;
}


bool Inventory::removeItem(int slotToRemove) {
    try {
        inventorySlot[slotToRemove] = nullptr;
        return true;
    }
    //TODO  catch exceptions
    catch(int e){
        return false;
    }
}
