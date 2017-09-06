/**
 * Project Untitled
 */


#ifndef _MERCHANT_H
#define _MERCHANT_H

#include "InteractableObject.h"


class Merchant: public InteractableObject {
public: 
    
    void changeOrientation();
    
    void sellItem();
private: 
    UnsellableItem* soldItems[];
};

#endif //_MERCHANT_H