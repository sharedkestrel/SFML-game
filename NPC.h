/**
 * Project Untitled
 */


#ifndef _NPC_H
#define _NPC_H

#include "InteractableObject.h"


class NPC: public InteractableObject {
public: 
    
    void move();
    
    void changeOrientation();
};

#endif //_NPC_H