//
//  VendorItemReader.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 09/04/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef VendorItemReader_hpp
#define VendorItemReader_hpp

#include <stdio.h>
#include "ItemsFileReader.hpp"
class VendorItemReader : public ItemsFileReader{
private:
public:
    vector<Item> fillVec();
};
#endif /* VendorItemReader_hpp */
