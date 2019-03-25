//
//  Opponent.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 25/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef Opponent_hpp
#define Opponent_hpp

#include <stdio.h>
#include "Character.hpp"
class Opponent: public Character{
protected:
    
public:
    Opponent();
    Opponent(string name);
    void setStats(Normal_stats nStats){ this->nStats = nStats; }
};
#endif /* Opponent_hpp */
