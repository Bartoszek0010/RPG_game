//
//  ItemOpponentAdapter.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 09/04/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef ItemOpponentAdapter_hpp
#define ItemOpponentAdapter_hpp

#include <stdio.h>

#include "Item.hpp"
#include "Boss.hpp"
class ItemOpponentAdapter : public Boss, private Item{
private:
    
public:
    ItemOpponentAdapter(ItemType ntype, int nstat, string nname, string ninfo) :
    Item(ntype, nstat, nname, ninfo){
        
    }
    void attack(){
        // here will be attack
    }
};
#endif /* ItemOpponentAdapter_hpp */
