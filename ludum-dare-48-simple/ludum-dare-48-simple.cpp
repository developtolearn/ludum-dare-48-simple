// ludum-dare-48-simple.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "language.h"

int main()
{
    unordered_map<string, unordered_set<string>> thesaurus;
    unordered_map<string, unordered_set<string>> phrases;
    thesaurus = gen_thesaurus();
    phrases = gen_phrases(thesaurus);
    print_phrases(phrases);
    return 0;
}
