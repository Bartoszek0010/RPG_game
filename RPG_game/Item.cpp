//
//  Item.cpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 26/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#include "Item.hpp"

Item::Item(ItemType type, int stat, string name, string info){
    this->type = type;
    itemName = name;
    itemInfo = info;
    stats = stat;
}

int Item::getArmor(){
    if(type == armor) return stats;
    return 0;
}
int Item::getWeapon(){
    if(type == weapon) return stats;
    return 0;
}
int Item::getPotionHp(){
    if(type == potionHp) return stats;
    return 0;
}
int Item::getPotionStamina(){
    if(type == potionStamina) return stats;
    return 0;
}
int Item::getFood(){
    if(type == food) return stats;
    return 0;
}
ItemType Item::getType(){
    return type;
}

string Item::getInfo(){
    return itemInfo;
}
