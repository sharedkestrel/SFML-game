/**
 * Project Untitled
 */


#include "Criminale.h"

Criminale::Criminale() {

    //spritePath = "assets/sprites/criminale.png";

    // TODO MainCharacter();

    //set texture and sprite
    //if(!heroTexture.loadFromFile(("C:\\Users\\Francesco\\CLionProjects\\SFML-game\\assets\\sprites\\criminale.png"), sf::IntRect(0, 32 * direction, 32, 32))){
    //   //TODO error
    //}

    //if file


    //else

    //load hp, maxWeight, resistance independently from the file, based on lvl and xp
    hp = 50 + lvl * 5;
    maxWeight = 6 + lvl * 2;
    resistance = 10 + lvl * 5; //TODO + inventory->getArmorSlot()->getResistance();
    strength = 5 + lvl * 3;
}

void Criminale::Move(unsigned short int side) {
    //Move(side, &heroSprite);
    direction = side;
    for(int i = 1; i < 2; i++) {
        heroSprite.setTextureRect(sf::IntRect(32 * i, 32 * (side), 32, 32));
    }
}
