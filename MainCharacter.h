/**
 * Project Untitled
 */


#ifndef _MAINCHARACTER_H
#define _MAINCHARACTER_H

class MainCharacter {
public: 
    
    void move();
    
    void changeOrientation();
    
    void playDeath();
    
    void lvlUp();
    
    bool setWeapon();
    
    void useMove1();
    
    void useMove2();
    
    void useMove3();
    
    void noWeaponAttack();
    
    void runFromBattle();
    
    void encounterEnemy();
protected: 
    static std::string name;
    int hp;
    int lvl = 1;
    int xp = 0;
    int resistance = 0;
    std::string status1 = null;
    std::string status2 = null;
    int posX;
    int posY;
    Inventory * inventory;
    int maxWeight;
    int xpToLvlUp;
    boolean busy;
    std::string spritePath;
};

#endif //_MAINCHARACTER_H