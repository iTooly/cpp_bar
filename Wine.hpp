//
//  Wine.hpp
//  Bar
//
//  Created by Gabriel Kapach on 19/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef Wine_hpp
#define Wine_hpp

#include <stdio.h>
#include "Drink.hpp"

class Wine : public Drink {
    int year;
    
public:
    Wine(string name, int year);
    string getName();
    virtual string prepare() = 0;
};

#endif /* Wine_hpp */
