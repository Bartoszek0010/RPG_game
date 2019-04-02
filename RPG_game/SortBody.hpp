//
//  SortBody.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 02/04/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef SortBody_hpp
#define SortBody_hpp

#include <stdio.h>
#include "Item.hpp"
class SortBody{
private:
    vector<Item> vec2sort;
    
public:
    SortBody( vector<Item> vec2sort){ this->vec2sort = vec2sort; }
    vector<Item> nameSort();
    vector<Item> statsSort();
};

#endif /* SortBody_hpp */
