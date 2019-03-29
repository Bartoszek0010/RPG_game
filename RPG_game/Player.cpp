//
//  Player.cpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 24/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#include "Player.hpp"

Player::Player(){
    
    
}
Player& Player::getInstance(){
    static Player p;
    return p;
}

void Player::setStats(string name, int hp, int strength, int stamina){
    setHp(hp);
    setStrength(strength);
    setStamina(stamina);
    setName(name);
}

void Player::addItem(Item item){
    if(backpackAmount.at(item.getType()) < maxAmount.at(item.getType())){
        backpack.push_back(item);
        backpackAmount.at(item.getType()) += 1;
        itemInfo.push_back(item.getInfo());
    }
}

void Player::removeItem(int itemId){
    Item item_temp = backpack.at(itemId);
    ItemType type = item_temp.getType();
    backpackAmount.at(type) -= 1;
    itemInfo.erase(itemInfo.begin() + itemId);
    backpack.erase(backpack.begin() + itemId);
}


