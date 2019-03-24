//
//  Normal_stats.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 19/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef Normal_stats_hpp
#define Normal_stats_hpp

#include <stdio.h>

struct Normal_stats{
private:
    int hp;
    int strength;
    int stamina;
public:
    Normal_stats(int hp = 0, int strength = 0, int stamina = 0);
    int getHp(){ return hp; }
    int getStrength(){ return strength; }
    int getStamina(){ return stamina; }
};

#endif /* Normal_stats_hpp */
