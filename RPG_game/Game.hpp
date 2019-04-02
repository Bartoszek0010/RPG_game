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
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <map>

#include "Character.hpp"
#include "Normal_stats.hpp"
#include "Player.hpp"
#include "Floor.hpp"
#include "Opponent.hpp"
#include "Item.hpp"
#include "ItemType.hpp"
#include "FileReader.hpp"
#include "TxtFileReader.hpp"
#include "XMLFileReader.hpp"
class Game{
private:
    Game();
    Game(const Game&) = delete;
    int id_counter = 1;
    int actualFloor;
    map<int, string> floorText;
    using reader = unique_ptr<FileReader>;
    //reader txtReader = make_unique<TxtFileReader>();
public:
    static Game &getInstance();
    Opponent createOpponent(string name, int hp, int stamina, int strength);
    Player& createPlayer(string name, int hp, int stamina, int strength);
    void inc_id(){ id_counter++; }
    Floor createFloor(int floorNumber, int opponentsAmount, bool bossFloor = false, bool shopFloor = false); // false (MVP settings)
    int attack(Player &player, Opponent &opponent, int playerDec);
    Item createItem();
    Item createItem2();
    void giveItem(Player &player, Item &item);
    void fillFloorMap(string fileName);
    string fileType(string fileName);
    string getFloorText(int floor);
};

#endif /* Game_hpp */
