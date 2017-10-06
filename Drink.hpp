//
//  Drink.hpp
//  Bar
//
//  Created by Gabriel Kapach on 19/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef Drink_hpp
#define Drink_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Drink {
    
public:
    
    Drink(string name);
    
    virtual string getName();
    virtual string prepare() = 0;
    
protected:
    string name;
};

#endif /* Drink_hpp */
