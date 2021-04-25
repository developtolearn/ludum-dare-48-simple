// ludum-dare-48-simple.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "a_deeper_love.h"


int main()
{
    // intro
    startup();
    map<string, string> player = gen_player();
    instructions(player);
    array<array<string, 10>, 10> map = gen_map();
    unordered_map<string, unordered_set<string>> phrases = gen_phrases();

    // main loop
    string command;
    do {
        command = get_command();
        parse_command(command, phrases);
    } while (command != "EXIT");

    return 0;
}
