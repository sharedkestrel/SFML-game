/**
 * Project Untitled
 */


#ifndef _TILE_H
#define _TILE_H

class Tile {
public: 
    static int stepsFromLastEncounter;
    
    void checkEncounters();
private: 
    void probability;
    boolean encounterTile;
};

#endif //_TILE_H