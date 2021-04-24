// ludum-dare-48-simple.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "language.h"

int main()
{
    unordered_map<string, unordered_set<string>> phrases;
    phrases = gen_phrases();
    print_phrases(phrases);
    
    array<array<string, 10>, 10> map;
    map = gen_map();
    print_map(map);

    return 0;
}
