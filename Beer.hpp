//
//  Beer.hpp
//  Bar
//
//  Created by Gabriel Kapach on 19/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef Beer_hpp
#define Beer_hpp

#include <stdio.h>
#include "Drink.hpp"

class Beer : public Drink {
    
public:
    Beer(string name) : Drink(name) {};
    string prepare();
};

#endif /* Beer_hpp */
