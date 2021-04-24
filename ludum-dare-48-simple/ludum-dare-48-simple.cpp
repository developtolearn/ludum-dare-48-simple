// ludum-dare-48-simple.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "language.h"
#include "map.h"
#include "player.h"

int main()
{
    map<string, string> player = gen_player();
    print_player(player);
    return 0;
}
