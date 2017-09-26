/**
 * Project Untitled
 */


#include "MainCharacter.h"

/**
 * MainCharacter implementation
 */

MainCharacter::MainCharacter() {

    //if save file exists, load from it

    //else build default character
    status1 = "null";
    status2 = "null";
    busy = false;
    xpToLvlUp = 4/5 * lvl * lvl * lvl;
    direction = 0;

    //TODO set spawn
    posX = 56;
    posY = 70;

    //set texture and sprite
    spritePath = "C:\\Users\\Francesco\\CLionProjects\\SFML-game\\assets\\sprites\\criminale.png";
    if(!heroTexture.loadFromFile((spritePath), sf::IntRect(0, 0, 32, 32))){
        //TODO error
    }
    heroSprite.setTexture(heroTexture);
    //TODO heroSprite.setOrigin();
}


/**
 * @return void
 */
void MainCharacter::Move(unsigned short int side, sf::Sprite &sprite) { // SONO CHI NO SADAME
    direction = side;
    for(int i = 1; i < 2; i++) {
        sprite.setTextureRect(sf::IntRect(32 * i, 32 * (side), 32, 32));
    }
}

/**
 * @return void
 */
void MainCharacter::PlayDeath() {
    return;
}

/**
 * @return void
 */
void MainCharacter::LvlUp() {
    return;
}

/**
 * @return bool
 */
bool MainCharacter::SetWeapon() {
    return false;
}

/**
 * @return void
 */
void MainCharacter::UseMove1() {
    return;
}

/**
 * @return void
 */
void MainCharacter::UseMove2() {
    return;
}

/**
 * @return void
 */
void MainCharacter::UseMove3() {
    return;
}

/**
 * @return void
 */
void MainCharacter::NoWeaponAttack() {
    return;
}

/**
 * @return void
 */
void MainCharacter::RunFromBattle() {
    return;
}

/**
 * @return void
 */
void MainCharacter::EncounterEnemy() {
    return;
}

sf::Texture &MainCharacter::getHeroTexture() {
    return heroTexture;
}

sf::Sprite &MainCharacter::getHeroSprite() {
    return heroSprite;
}
