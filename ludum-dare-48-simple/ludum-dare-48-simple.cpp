// ludum-dare-48-simple.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "language.h"

int main()
{
    array<array<string, 10>, 10> map;
    for (int i = 0; i < 10; i++) {
        map = gen_map();
        print_map(map);
        cout << "\n";
    }

    return 0;
}
