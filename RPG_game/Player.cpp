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
