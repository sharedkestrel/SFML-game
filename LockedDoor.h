/**
 * Project Untitled
 */


#ifndef _LOCKEDDOOR_H
#define _LOCKEDDOOR_H

#include "InteractableObject.h"


class LockedDoor: public InteractableObject {
public: 
    
    bool unlock();
private: 
    bool locked;
};

#endif //_LOCKEDDOOR_H