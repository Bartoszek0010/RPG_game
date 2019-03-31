//
//  FileReader.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 31/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef FileReader_hpp
#define FileReader_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
#include <fstream>
using namespace std;
class FileReader {
protected:
    string fileName;
    map<int, string> textMap;
public:
    void setFileName(string nfileName){
        fileName = nfileName;
    }
    virtual map<int, string> fillMap() = 0;
    virtual ~FileReader() = default;
    FileReader() = default;
};
#endif /* FileReader_hpp */
