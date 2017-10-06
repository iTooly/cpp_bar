//
//  WhiteWine.hpp
//  Bar
//
//  Created by Gabriel Kapach on 19/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef WhiteWine_hpp
#define WhiteWine_hpp

#include <stdio.h>
#include "Wine.hpp"

class WhiteWine : public Wine {
    
public:
    WhiteWine(string name, int year) : Wine(name, year) {};
    string prepare();
};

class CarmelEmeraledRiesling : public WhiteWine {
public:
    CarmelEmeraledRiesling(int year):WhiteWine("Carmel Emeraled Riesling", year) {}
};

class GolanSmadar : public WhiteWine {
public:
    GolanSmadar(int year):WhiteWine("Golan Smadar", year) {}
};

class YardenChardonnay : public WhiteWine {
public:
    YardenChardonnay(int year):WhiteWine("Yarden Chardonnay", year) {}
};

#endif /* WhiteWine_hpp */
