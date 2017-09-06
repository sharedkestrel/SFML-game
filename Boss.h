/**
 * Project Untitled
 */


#ifndef _BOSS_H
#define _BOSS_H

#include "Enemy.h"


class Boss: public Enemy {
public: 
    
    void regenShield();
    
    void useMove4();
private: 
    int shield;
    int turnsForShield;
};

#endif //_BOSS_H