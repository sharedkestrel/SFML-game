/**
 * Project Untitled
 */


#ifndef _ENEMY_H
#define _ENEMY_H

#include "NPC.h"


class Enemy: public NPC {
public: 
    
    int setResistance();
    
    int setHP();
    
    int setXpReward();
    
    int setGoldReward();
    
    int setStrength();
    
    void receiveDamage();
    
    int attack();
    
    void useMove1();
    
    void useMove2();
    
    void useMove3();
protected: 
    int hp;
    int resistance;
    std::string status1;
    std::string status2;
    int xpReward;
    int goldReward;
    int lvl;
    int strength;
    std::string battleSpritePath;
};

#endif //_ENEMY_H