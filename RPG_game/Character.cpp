//
//  Character.cpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 19/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#include "Character.hpp"
#include <string>
#include "Normal_stats.hpp"
using namespace std;
Character::Character(string cName, int cId, Normal_stats nStats, character_types cType){
    this->cName = cName;
    this->cId = cId;
    this->nStats = nStats;
    this->cType = cType;
}
Character::Character(string cName, int cId, Normal_stats nStats){
    this->cName = cName;
    this->cId = cId;
    this->nStats = nStats;
}
Character::Character(){
    //cout<<"/////////character constructor////////"<<endl;
    
}


