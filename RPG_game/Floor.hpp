//
//  Floor.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 25/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef Floor_hpp
#define Floor_hpp

#include <stdio.h>
#include "Location.hpp"

class Floor : public Location{
private:
    int floorNumber;
    int opponentsAmount;
    bool bossFloor, shopFloor;
public:
    //Floor();
    Floor(int floorNumber, int opponentsAmount, bool bossFloor, bool shopFloor);
    int getNumber(){ return floorNumber;}
};
#endif /* Floor_hpp */
