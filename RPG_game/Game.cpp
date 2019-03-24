//
//  Game.cpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 19/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#include "Game.hpp"
using namespace std;
Game::Game(){
    
}

Game& Game::getInstance(){
    static Game g;
    return g;
}

Character Game::createOpponent(string name, int hp, int stamina, int strength){
    int id = id_counter;
    inc_id();
    Normal_stats stats = Normal_stats(hp, strength, stamina);
    Character newC = Character(name, id, stats);
    return newC;
}
Player& Game::createPlayer(string name, int hp, int stamina, int strength){
    int id = id_counter;
    inc_id();
//    Normal_stats stats = Normal_stats(hp, strength, stamina);
    Player &player = Player::getInstance();
    player.setStats(name, hp, strength, stamina);
    return player;
}
