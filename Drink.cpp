//
//  Drink.cpp
//  Bar
//
//  Created by Gabriel Kapach on 19/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#include "Drink.hpp"

Drink::Drink(string name) {
    this->name = name;
}

string Drink::getName() {
    return name;
}
