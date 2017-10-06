//
//  Wine.cpp
//  Bar
//
//  Created by Gabriel Kapach on 19/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#include "Wine.hpp"

Wine::Wine(string name, int year) : Drink(name) {
    this->year = year;
}

string Wine::getName() {
    return name + " ("+to_string(year)+")";
}
