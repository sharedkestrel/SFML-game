/**
 * Project Untitled
 */


#ifndef _TRIGGEROBJECT_H
#define _TRIGGEROBJECT_H

#include "InteractableObject.h"


class TriggerObject: public InteractableObject {
public: 
    
    void setTrigger();
protected: 
    bool triggered;
    bool& trigger;
};

#endif //_TRIGGEROBJECT_H