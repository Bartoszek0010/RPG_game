//
//  VendorItemReader.cpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 09/04/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#include "VendorItemReader.hpp"


vector<Item> VendorItemReader::fillVec(){
    ifstream myFile(fileName);
    string tempName, tempInfo, tempText;
    int tempStats;
    ItemType iType;
    while(!myFile.eof()){
        tempText = "";
        tempInfo = "";
        // name of item
        myFile>>tempName;
        // info of item
        while(tempText[tempText.length() - 1] != '\''){
            myFile>>tempText;
            tempInfo += tempText + " ";
        }
        // type of item
        myFile>>tempText;
        iType = ItemType(atoi(tempText.c_str()));
        // stats of item
        myFile>>tempText;
        tempStats = atoi(tempText.c_str());
        Item item = Item(iType, tempStats, tempName, tempInfo);
        itemsVec.push_back(item);
    }
    myFile.close();
    return itemsVec;
}
