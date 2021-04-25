// ludum-dare-48-simple.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "a_deeper_love.h"


int main()
{
    // intro
    startup();
    map<string, string> player = gen_player();
    instructions(player);
    
    // main loop
    string command = "";
    do {
        command = get_command();
        parse_command(command);
    } while (command != "EXIT");

    return 0;
}
