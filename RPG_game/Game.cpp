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
    createCharacter();
}

Game& Game::getInstance(){
    static Game g;
    return g;
}

Character Game::createCharacter(){
    string name = "player1";
    int id = 1;
    Normal_stats stats = Normal_stats(1,2,3);
    Character newC = Character(name, id, stats);
    return newC;
}
