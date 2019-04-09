//
//  ItemsFileReader.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 09/04/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef ItemsFileReader_hpp
#define ItemsFileReader_hpp

#include <stdio.h>
#include <vector>
#include <string>

#include <fstream>
#include "Item.hpp"
#include "ItemType.hpp"
using namespace std;
class ItemsFileReader {
protected:
    string fileName;
    vector<Item> itemsVec;
public:
    void setName(string fileName){ this->fileName = fileName; }
    virtual vector<Item> fillVec() = 0;
    virtual ~ItemsFileReader() = default;
    ItemsFileReader() = default;
};
#endif /* ItemsFileReader_hpp */
