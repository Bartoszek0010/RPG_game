//
//  Location.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 25/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef Location_hpp
#define Location_hpp
#include <vector>
#include <stdio.h>

class Location{
protected:
    int locationId;
    enum locationType {floor, shop};
public:
    Location();
    //int getLocationId();
};
#endif /* Location_hpp */
