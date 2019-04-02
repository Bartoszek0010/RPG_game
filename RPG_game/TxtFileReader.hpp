//
//  TxtFileReader.hpp
//  RPG_game
//
//  Created by Bartosz Jastrzębski on 31/03/2019.
//  Copyright © 2019 Bartosz Jastrzębski. All rights reserved.
//

#ifndef TxtFileReader_hpp
#define TxtFileReader_hpp

#include <stdio.h>
#include "FileReader.hpp"

class TxtFileReader : public FileReader {
private:
public:
    map<int, string>fillMap();
};

#endif /* TxtFileReader_hpp */
