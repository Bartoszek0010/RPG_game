//
//  Game.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 19/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <iostream>
#include "Character.hpp"
#include "Normal_stats.hpp"
#include "Player.hpp"

class Game{
private:
    Game();
    Game(const Game&) = delete;
    int id_counter = 1;
public:
    static Game &getInstance();
    Character createOpponent(string name, int hp, int stamina, int strength);
    Player& createPlayer(string name, int hp, int stamina, int strength);
    void inc_id(){ id_counter++; }
};

#endif /* Game_hpp */
