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

Opponent Game::createOpponent(string name, int hp, int stamina, int strength){
    int id = id_counter;
    inc_id();
    Opponent newC = Opponent(name);
    Normal_stats nStats = Normal_stats(hp, strength, stamina);
    newC.setStats(nStats);
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

Floor Game::createFloor(int floorNumber, int opponentsAmount, bool bossFloor, bool shopFloor){
    Floor newFloor = Floor(floorNumber, opponentsAmount, bossFloor, shopFloor);
    actualFloor = floorNumber;
    
    return newFloor;
    
}

int Game::attack(Player &player, Opponent &opponent, int playerDec){
    // 1 - attack, 0 - defence
    int opponentDec = rand() % 2;
    if(opponent.getStamina() == 0){
        opponentDec = 1;
    }
    auto damage = [] (int strength, int stamina) -> int{
        if(strength - stamina >= 0){
            return strength - stamina;
        } else{
            return 0;
        }
    };
    if(playerDec == 1 && opponentDec == 1){
        player.setHp(player.getHp() - damage(opponent.getStrength(), player.getStamina()));
        opponent.setHp(opponent.getHp() - damage(player.getStrength(), opponent.getStamina()));
    }
    if(playerDec == 0 && opponentDec == 1){
        player.setHp(player.getHp() - damage(opponent.getStrength(), 2*player.getStamina()));
        player.setStamina(player.getStamina() - 1);
        
    }
    if(playerDec == 1 && opponentDec == 0){
        opponent.setHp(opponent.getHp() - damage(player.getStrength(), 2*opponent.getStamina()));
        opponent.setStamina(opponent.getStamina() - 1);
    }
    return opponentDec;
}

Item Game::createItem(){
    ItemType type = weapon;
    int stat = 5;
    string name = "sword";
    string info = "God's sword, this is the strongest sword which you can meet in this world";
    Item item = Item(type, stat, name, info);
    return item;
    
}

void Game::giveItem(Player &player, Item &item){
    player.addItem(item);
}


// handle body to reading text and puuting into map (text of every floor)
void Game::fillFloorMap(string fileName){
    string nfileType = fileType(fileName);
    if(nfileType == "txt"){
        reader txtReader = make_unique<TxtFileReader>();
        txtReader->setFileName(fileName);
        try{
            floorText = txtReader->fillMap();
        } catch(const char *e){
            cerr<<e<<endl;
        }
    } else if(nfileType == "xml"){
        reader xmlReader = make_unique<XMLFileReader>();
        xmlReader->setFileName(fileName);
        try{
            floorText = xmlReader->fillMap();
        } catch(const char *e){
            cerr<<e<<endl;
        }
    } else{
        cout<<"aaaa";
    }
    //cout<<floorText[1]<<endl; // checking of filling map
}
// getting type of reading file
string Game::fileType(string fileName){
    string returnType;
    bool startAdding = false;
    for(int i=0; i<fileName.length();i++){
        if(startAdding){
            returnType += fileName[i];
        }
        
        if(fileName[i] == '.'){
            startAdding = true;
        }
    }
    return returnType;
}
// returning text of every floor
string Game::getFloorText(int floor){
    return floorText[floor];
}
