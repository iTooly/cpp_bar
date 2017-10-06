//
//  main.cpp
//  Bar
//
//  Created by Gabriel Kapach on 19/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#define SHELF_SIZE 98

#include <iostream>
#include "Beer.hpp"
#include "WhiteWine.hpp"
#include "RedWine.hpp"

void ask();

Drink* stock[SHELF_SIZE] = { NULL };
int drink = -1;

int main(int argc, const char * argv[]) {
    //Init Shelf
    stock[0] = new Beer("Heineken");
    stock[1] = new Beer("Carlsberg");
    stock[2] = new Beer("Maccabee");
    stock[3] = new Beer("Tuborg");
    stock[4] = new CarmelEmeraledRiesling(1986);
    stock[5] = new GolanSmadar(1989);
    stock[6] = new YardenChardonnay(1997);
    stock[7] = new Chianti(1997);
    stock[8] = new YardenMountHermonRed(1994);
    stock[9] = new YardenCabernetSauvignon(1997);
    stock[10] = new ChateauMargaux(1997);
    
    ask();
    
    return 0;
}

void ask() {
    int option;
    
    cout << "What can I get you, sir? (0 - list options)\n";
    cin >> option;
    
    //If list options was asked
    if (option == 0) {
        cout << "(0) list options\n";
        
        //Go over the entire stock
        for (int i = 0; i < SHELF_SIZE; i++) {
            if (stock[i] != NULL) {
                cout << "(" << i + 1 << ") " << stock[i]->getName() << "\n"; //Print stock option
            }
        }
        
        cout << "(" << SHELF_SIZE + 1 << ") How did you prepare my last drink?\n";
        cout << "(" << SHELF_SIZE + 2 << ") Leave the bar\n";
    }
    
    //If a drink was selected
    if (option > 0 && option <= SHELF_SIZE) {
        drink = option - 1;
        cout << "One " << stock[drink]->getName() << " coming up, sir.\n";
    }
    
    //If the customer ask about the last drink
    if (option == SHELF_SIZE + 1) {
        if (drink < 0 && drink >= SHELF_SIZE) {
            cout << "You havn't oredered a drink yet.\n";
            return ask();
        }
        
        cout << "You ordered " << stock[drink]->getName() << ".\n";
        cout << stock[drink]->prepare();
    }
    
    //If the customer leaves
    if (option == SHELF_SIZE + 2) {
        cout << "Bar is closed. Good night.\n";
        return;
    }
    
    return ask();
}
