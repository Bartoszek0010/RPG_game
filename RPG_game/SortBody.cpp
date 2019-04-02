//
//  SortBody.cpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 02/04/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#include "SortBody.hpp"

vector<Item> SortBody::nameSort(){
    auto statsLambda =[](Item i1, Item i2) { return i1.getItemName() < i2.getItemName(); };
    sort(vec2sort.begin(), vec2sort.end(), statsLambda);
    return vec2sort;
}

vector<Item> SortBody::statsSort(){
    auto statsLambda =[](Item i1, Item i2) { return i1.getStats() < i2.getStats(); };
    sort(vec2sort.begin(), vec2sort.end(), statsLambda);
    return vec2sort;
}

