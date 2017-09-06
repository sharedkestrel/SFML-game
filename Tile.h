/**
 * Project Untitled
 */


#ifndef _TILE_H
#define _TILE_H

#include <string>

class Tile {
public: 
    static int stepsFromLastEncounter;
    
    void checkEncounters();
private: 
    void probability;
    bool encounterTile;
    bool isWalkable;
    unsigned short int environment;
    std::string spritePath;
};

#endif //_TILE_H