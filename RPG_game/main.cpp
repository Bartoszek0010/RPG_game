//
//  main.cpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 19/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#include <iostream>
#include "Game.hpp"
using namespace std;
void creating_player(Game &game){
    // here will be creating your own character ( setting 10 points of skills (stamina, hp and strength) and choosing start weapon (sword or bow))
}
int main(int argc, const char * argv[]) {
    Game &game = Game::getInstance();
    Character player = game.createCharacter();
    cout<<player.getHp()<<endl;
    cout<<player.getName()<<endl;
    cout<<player.getStrength()<<endl;
    return 0;
}
