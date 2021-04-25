// ludum-dare-48-simple.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "language.h"
#include "map.h"
#include "player.h"
#include "gameplay.h"

int main()
{
    startup();
    map<string, string> player = gen_player();
    array<array<string, 10>, 10> map = gen_map();
    print_player(player);
    print_map(map);
    return 0;
}
