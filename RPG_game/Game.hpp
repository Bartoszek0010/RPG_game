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
class Game{
private:
    Game();
    Game(const Game&) = delete;
public:
    static Game &getInstance();
    Character createCharacter();
};

#endif /* Game_hpp */
