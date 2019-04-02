//
//  TxtFileReader.cpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 31/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#include "TxtFileReader.hpp"

map<int,string>  TxtFileReader::fillMap(){
    ifstream myFile(fileName);
    string tempText, tempFullText;
    int tempKey, tempLength;
    while(!myFile.eof()){
        tempFullText = "";
        myFile>>tempText;
        tempKey = atoi(tempText.c_str());
        //cout<<tempKey;// checking is correct
        myFile>>tempText;
        tempLength = atoi(tempText.c_str());
        //cout<<tempLength; //checking is correct
        for (int i= 0; i<tempLength; i++){
            myFile>>tempText;
            tempFullText += tempText;
            tempFullText += " ";
        }
        textMap[tempKey] = tempFullText;
    }
    myFile.close();
    return textMap;
}
