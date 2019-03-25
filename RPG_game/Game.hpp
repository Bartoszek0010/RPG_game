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
#include "Floor.hpp"
#include "Opponent.hpp"
#include <cstdlib>
#include <ctime>
class Game{
private:
    Game();
    Game(const Game&) = delete;
    int id_counter = 1;
    int actualFloor;
public:
    static Game &getInstance();
    Opponent createOpponent(string name, int hp, int stamina, int strength);
    Player& createPlayer(string name, int hp, int stamina, int strength);
    void inc_id(){ id_counter++; }
    Floor createFloor(int floorNumber, int opponentsAmount, bool bossFloor = false, bool shopFloor = false); // false (MVP settings)
    int attack(Player &player, Opponent &opponent, int playerDec);
};

#endif /* Game_hpp */
