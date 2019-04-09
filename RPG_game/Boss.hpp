//
//  Boss.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 09/04/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef Boss_hpp
#define Boss_hpp

#include <stdio.h>
#include "Opponent.hpp"
class Boss : public Opponent {
private:
public:
    virtual void attack() = 0;
    virtual ~Boss() = default;
    Boss() = default;
};
#endif /* Boss_hpp */
