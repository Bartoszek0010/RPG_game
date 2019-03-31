//
//  XMLFileReader.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 31/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef XMLFileReader_hpp
#define XMLFileReader_hpp

#include <stdio.h>
#include "FileReader.hpp"

class XMLFileReader : public FileReader{
private:
public:
    map<int, string> fillMap();
};
#endif /* XMLFileReader_hpp */
