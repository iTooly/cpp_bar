//
//  RedWine.hpp
//  Bar
//
//  Created by Gabriel Kapach on 19/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef RedWine_hpp
#define RedWine_hpp

#include <stdio.h>
#include "Wine.hpp"

class RedWine : public Wine {
    
public:
    RedWine(string name, int year) : Wine(name, year) {};
    string prepare();
};

class Chianti : public RedWine {
public:
    Chianti(int year):RedWine("Chianti", year) {}
};

class YardenMountHermonRed : public RedWine {
public:
    YardenMountHermonRed(int year):RedWine("Yarden Mount Hermon Red", year) {}
};

class YardenCabernetSauvignon : public RedWine {
public:
    YardenCabernetSauvignon(int year):RedWine("Yarden Cabernet Sauvignon", year) {}
};

class ChateauMargaux : public RedWine {
public:
    ChateauMargaux(int year):RedWine("Chateau Margaux", year) {}
};

#endif /* RedWine_hpp */
