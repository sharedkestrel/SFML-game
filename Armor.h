/**
 * Project Untitled
 */


#ifndef _ARMOR_H
#define _ARMOR_H

#include "Gear.h"


class Armor: public Gear {
public:

    Armor() {};

    int getMaxDurability() const {
        return maxDurability;
    }

    void setMaxDurability(int maxDurability) {
        Armor::maxDurability = maxDurability;
    }

    int getDurability() const {
        return durability;
    }

    void setDurability(int durability) {
        Armor::durability = durability;
    }

    int getResistance() const {
        return resistance;
    }

    void setResistance(int resistance) {
        Armor::resistance = resistance;
    }

private:
    int maxDurability = 1;
    int durability = 1;
    int resistance = 1;
};

#endif //_ARMOR_H