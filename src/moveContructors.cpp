//============================================================================
// Name        : moveContructors.cpp
// Author      : Angel Ale
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>
#include "Player.h"
using namespace std;



int main() {

    const o::Player villain {"Villain", 100, 55};
    o::Player hero {"Hero", 100, 15};

   // villain.set_name("Super villain");
    cout << villain.get_name() << endl;
    cout << hero.get_name() << endl;


    hero.displayName(villain);


    return 0;
}
