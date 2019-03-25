//
//  Floor.cpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 25/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#include "Floor.hpp"

Floor::Floor(int floorNumber, int opponentsAmount, bool bossFloor, bool shopFloor){
    this->floorNumber = floorNumber;
    this->opponentsAmount = opponentsAmount;
    this->bossFloor = bossFloor;
    this->shopFloor = shopFloor;
}
