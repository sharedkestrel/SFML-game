/**
 * Project Untitled
 */


#ifndef _MAINCHARACTER_H
#define _MAINCHARACTER_H

#include <string>
#include <SFML/Graphics.hpp>
#include "Inventory.h"

class MainCharacter {
public:

    MainCharacter();
    
    virtual void Move(unsigned short int side, sf::Sprite &sprite);
    
    void PlayDeath();
    
    void LvlUp();
    
    bool SetWeapon();
    
    void UseMove1();
    
    void UseMove2();
    
    void UseMove3();
    
    void NoWeaponAttack();
    
    void RunFromBattle();
    
    void EncounterEnemy();

    sf::Texture &getHeroTexture();

    sf::Sprite &getHeroSprite();

protected:
    unsigned short int direction;
    static std::string name;
    int hp;
    int lvl = 1;
    int xp = 0;
    int resistance;
    std::string status1 = "null";
    std::string status2 = "null";
    int posX;
    int posY;
    Inventory * inventory;
    int maxWeight;
    int xpToLvlUp;
    bool busy = true;
    std::string spritePath;
    sf::Texture heroTexture;
    sf::Sprite heroSprite;
};

#endif //_MAINCHARACTER_H