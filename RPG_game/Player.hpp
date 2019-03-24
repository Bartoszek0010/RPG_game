//
//  Player.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 24/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp
#include "Character.hpp"
#include <stdio.h>

class Player : public Character{
private:
    double money;
    //Item[] itemsArray;
    Player();
    Player(const Player&) = delete;
public:
    static Player &getInstance();
    void setStats(string name, int hp, int strength, int stamina);
};
#endif /* Player_hpp */
