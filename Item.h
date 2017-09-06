/**
 * Project Untitled
 */


#ifndef _ITEM_H
#define _ITEM_H

#include <string>

class Item {
public: 
    
    bool use();
    
    bool remove();
    
    bool buy();
    
    bool sell();
protected: 
    std::string name;
    std::string description;
    bool questItem;
    int buyCost;
    bool stackable = true;
    int stacks;
    std::string spritePath;
};

#endif //_ITEM_H