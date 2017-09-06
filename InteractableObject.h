/**
 * Project Untitled
 */


#ifndef _INTERACTABLEOBJECT_H
#define _INTERACTABLEOBJECT_H

#include <string>

class InteractableObject {
public: 
    
    void talk();
protected: 
    /**
     * The dialog to be printed.
     */
    std::string dialog;
    std::string name;
    std::string spritePath;
};

#endif //_INTERACTABLEOBJECT_H