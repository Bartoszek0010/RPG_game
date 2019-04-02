//
//  Item.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 26/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef Item_hpp
#define Item_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>

#include "ItemType.hpp"
using namespace std;
class Item{
protected:
    string itemName;
    string itemInfo;
    ItemType type;
    int stats;
public:
    Item(ItemType type, int stat, string name, string info);
    //~Item();
    int getArmor();
    int getWeapon();
    int getPotionHp();
    int getPotionStamina();
    int getFood();
    int getStats();
    string getItemName(){ return itemName; }
    ItemType getType();
    string getInfo();
};
#endif /* Item_hpp */
