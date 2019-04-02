//
//  Player.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 24/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>

#include "Character.hpp"
#include "Item.hpp"
#include "SortBody.hpp"
class Player : public Character{
private:
    double money;
    //Item[] itemsArray;
    Player();
    Player(const Player&) = delete;
    vector<Item> backpack;
    vector<string> itemInfo;
    const vector<int> maxAmount {1, 2, 3, 3, 5};
    vector<int> backpackAmount {0, 0, 0, 0, 0};
public:
    static Player &getInstance();
    void setStats(string name, int hp, int strength, int stamina);
    void addItem(Item item);
    vector<string> getInfo(){ return itemInfo; }
    void removeItem(int itemId);
    void sortVectorStats();
    void sortVectorNames();
    vector<Item> getBackpack() { return backpack; }
    //TODO//void getItems(ItemType type);
};
#endif /* Player_hpp */
