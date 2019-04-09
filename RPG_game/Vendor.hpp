//
//  Vendor.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 09/04/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef Vendor_hpp
#define Vendor_hpp

#include <stdio.h>

#include "Character.hpp"
#include "Item.hpp"
class Vendor : public Character {
private:
    vector<Item> sellItems;
    vector<double> prices;
public:
    Vendor(vector<Item> sellItems, vector<double> prices) { this->sellItems = sellItems; this->prices = prices; }
    
};
#endif /* Vendor_hpp */
