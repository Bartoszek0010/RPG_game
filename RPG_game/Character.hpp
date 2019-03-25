//
//  Character.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 19/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef Character_hpp
#define Character_hpp

#include <stdio.h>
#include <string>
#include "Normal_stats.hpp"
#include <iostream>
using namespace std;
class Character{
protected:
    enum character_types {player, opponent, vendor};
    character_types cType;
    string cName;
    int cId;
    Normal_stats nStats;
public:
    Character(string cName, int cId, Normal_stats nStats, character_types cType);
    Character(string cName, int cId, Normal_stats nStats);
    Character();
    string getName(){ return cName; }
    int getHp(){ return nStats.getHp(); }
    int getStrength(){ return nStats.getStrength(); }
    int getStamina(){ return nStats.getStamina(); }
    void setHp(int hp){
        if(hp >= 0) {nStats.hp = hp;}
        else{ nStats.hp = 0; }
    }
    void setStrength(int strength){
        if(strength >= 0) nStats.strength = strength;
        else nStats.strength = 0;
    }
    void setStamina(int stamina){
        if(stamina >= 0) nStats.stamina = stamina;
        else nStats.stamina = 0;
    }
    void setName(string name){ cName = name;}
};

#endif /* Character_hpp */
